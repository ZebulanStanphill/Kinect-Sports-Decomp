extern int fn_82BD3880(void);
extern int fn_82BD38E8(void *, void *);
extern unsigned int fn_82BD62B8(void *);
extern int fn_82BD6F78(void *, unsigned int, void *, unsigned int *, void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int lbl_820E8684;

typedef struct Dev_82BD5B08 {
  int pad[3];
  void *f0c;
} Dev_82BD5B08;
typedef struct Pair_82BD5B08 {
  float a;
  float b;
} Pair_82BD5B08;
typedef struct Mgr_82BD5B08 {
  int pad0[0x14];
  Dev_82BD5B08 *slot[4];
  int pad1[0x24];
  char cs[1];
} Mgr_82BD5B08;

int fn_82BD5B08(Mgr_82BD5B08 *m, void *p2, unsigned int *p3, void *p4, Pair_82BD5B08 *out, unsigned int *cnt)
{
  int hr = (int)0x8007048f;
  Dev_82BD5B08 *dev;
  Pair_82BD5B08 buf[4];
  unsigned int i;
  unsigned int j;
  if (fn_82BD3880() != 1) {
    return hr;
  }
  RtlEnterCriticalSection(m->cs);
  i = 0;
  while ((dev = m->slot[i]) == 0 || fn_82BD62B8(dev) != 0x70000000 || dev->f0c == 0) {
    i++;
    if (i >= 4) goto leave;
  }
  if (out == 0 || *cnt == 0) {
    hr = 0;
    *cnt = 0;
  } else {
    hr = fn_82BD38E8(dev->f0c, buf);
    if (*cnt > 1) {
      *cnt = 1;
    }
    for (j = 0; j < *cnt; j++) {
      out->a = buf[j].a;
      out->b = buf[j].b;
    }
  }
  if (hr >= 0) {
    if (p2 == 0 || *p3 == 0) {
      *p3 = 0;
    } else {
      hr = fn_82BD6F78(dev, lbl_820E8684, p2, p3, p4);
    }
  }
leave:
  RtlLeaveCriticalSection(m->cs);
  return hr;
}
