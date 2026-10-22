extern void fn_8265C990(void *, unsigned int);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int NtClose(void *);

typedef struct {
  void *handle;
  void *arg;
  int pad[3];
  void *event;
  char pad2[0x58 - 0x18];
} Entry;

typedef struct Cb Cb;
typedef struct {
  void (*f0)(void *);
  void (*f4)(void *);
} CbVT;
struct Cb {
  CbVT *vt;
};

typedef struct {
  Cb *cb;
  Entry *entries;
  unsigned int count;
  unsigned int active;
  int pad10;
  char cs[0x30 - 0x14];
  int f30;
  void *buf;
  int f38;
} Mgr;

void fn_82A382C8(Mgr *m)
{
  unsigned int i;

  if (m->entries != 0) {
    RtlEnterCriticalSection(m->cs);
    if (m->active > 0) {
      for (i = 0; i < m->count; i++) {
        if (m->entries[i].handle != (void *)-1) {
          m->cb->vt->f4(m->entries[i].arg);
          NtClose(m->entries[i].event);
          NtClose(m->entries[i].handle);
        }
      }
    }
    RtlLeaveCriticalSection(m->cs);
  }
  if (m->f30 != 0) {
    m->f30 = 0;
  }
  if (m->f38 != 0) {
    fn_8265C990(m->buf, 0x24830000);
    m->f38 = 0;
  }
  m->buf = 0;
  m->entries = 0;
  m->count = 0;
  m->cb = 0;
}
