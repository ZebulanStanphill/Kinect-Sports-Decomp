typedef struct {
  char pad[0x4d];
  unsigned char f4d;
} Mgr;

extern Mgr *lbl_832645D0;
extern unsigned char fn_8300D8E8(Mgr *m);
extern void *fn_83027E80(unsigned short a, unsigned int b, int c);

typedef struct Dev Dev;
typedef struct {
  void *f0[0x40];
  void (*bind)(Dev *self, void *h, void *a, void *b, int c);
  void *f104[2];
  void *(*query)(Dev *self);
} DevVt;
struct Dev { DevVt *vt; };

typedef struct {
  char pad0[0x24];
  unsigned int f24;
} Desc;

typedef struct {
  char pad0[8];
  int f8;
} Info;

typedef struct {
  char pad0[0x38];
  Info *info;
  char pad3c[0x68 - 0x3c];
  Dev *dev;
  Desc *desc;
  void *f70;
  char pad74[0xda - 0x74];
  unsigned char flags;
  char paddb[0x178 - 0xdb];
  void *handle;
} S;

void *fn_82FEFD50(S *s)
{
  Mgr *m;
  int n;
  int a;

  m = lbl_832645D0;
  if (m == 0 || !fn_8300D8E8(m)) {
    return 0;
  }
  if ((s->flags & 4) == 0) {
    if (s->handle == 0 && (s->dev->vt->query(s->dev) != 0 || (s->flags & 2) != 0)) {
      n = 1;
      if (s->info != 0) {
        n = s->info->f8;
      }
      a = m->f4d;
      s->handle = fn_83027E80(a, s->desc->f24 >> 14, n);
    }
    if (s->handle != 0) {
      s->dev->vt->bind(s->dev, s->handle, s->desc, s->f70, 1);
    }
    s->flags |= 4;
  }
  return s->handle;
}
