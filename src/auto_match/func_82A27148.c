typedef struct Node_82A27148 { struct Node_82A27148 *next; } Node_82A27148;
typedef struct Obj_82A27148 {
  char pad0[0x14];
  unsigned flags;
  char pad18[0x30];
  Node_82A27148 *single;
  char pad4c[0xc];
  Node_82A27148 head;
  char pad5c[0x4];
  void *tbl[0x40];
  char pad[0x420];
  unsigned f580;
  char pad584[0xc];
  unsigned f590;
} Obj_82A27148;
extern void *_ReturnAddress(void);
extern void KeBugCheckEx(unsigned, void *, unsigned, unsigned, unsigned);
extern int KeGetCurrentProcessType(void);
extern int NtFreeVirtualMemory(void *, void *, unsigned, unsigned);
extern int fn_82A26BB0(void *, unsigned);

int fn_82A27148(Obj_82A27148 *p)
{
  Node_82A27148 *n, *e;
  struct { void *base; unsigned size; } pr;
  unsigned h;
  unsigned char i;
  if (p != 0) {
    if ((p->flags & 0x40000) != 0) {
      int t = KeGetCurrentProcessType();
      if (*((unsigned char *)p + 0x17b) != t) {
        KeBugCheckEx(0xf4, p, (unsigned)_ReturnAddress(), 0x50f, 0);
      }
    }
    e = &p->head;
    n = e->next;
    while (e != n) {
      pr.base = n;
      n = n->next;
      pr.size = 0;
      NtFreeVirtualMemory(&pr, &pr.size, 0x8000, p->f590);
    }
    if ((p->flags & 1) == 0) {
      p->f580 = 0;
    }
    n = p->single;
    p->single = 0;
    while (n != 0) {
      pr.base = n;
      n = n->next;
      pr.size = 0;
      NtFreeVirtualMemory(&pr, &pr.size, 0x8000, p->f590);
    }
    h = p->f590;
    i = 0x40;
    do {
      i = i + 0xff;
      if (p->tbl[i] != 0) {
        fn_82A26BB0(p->tbl[i], h);
      }
    } while (i != 0);
  }
  return 0;
}
