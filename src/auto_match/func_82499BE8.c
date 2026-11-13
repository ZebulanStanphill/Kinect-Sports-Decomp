extern void fn_822B91F8(void *, int, int, int);
extern void fn_822B70F0(void *, float, int);
extern void fn_8252CC80(void *, int);

typedef struct Slot_82499BE8 { unsigned int v; unsigned short s; unsigned short pad; } Slot_82499BE8;
typedef struct P14b_82499BE8 { char pad[0x90]; int f90; } P14b_82499BE8;
typedef struct P14a_82499BE8 { char pad[0x8c0]; P14b_82499BE8 *f8c0; } P14a_82499BE8;
typedef struct P118_82499BE8 { char pad[0x140]; int f140; char pad144[0x368 - 0x144]; int f368; } P118_82499BE8;
typedef struct P11c_82499BE8 { int f0; char pad[0x90 - 4]; Slot_82499BE8 slots[2]; } P11c_82499BE8;
typedef struct Mid_82499BE8 {
  char pad0[0x14];
  P14a_82499BE8 *f14;
  char pad18[0x118 - 0x18];
  P118_82499BE8 *f118;
  P11c_82499BE8 *f11c;
} Mid_82499BE8;
typedef struct Obj_82499BE8 {
  char pad[0xc0];
  Mid_82499BE8 *mid;
  int fc4;
  float fc8;
  float fcc;
  int fd0;
} Obj_82499BE8;

void fn_82499BE8(Obj_82499BE8 *o)
{
  P118_82499BE8 *a = o->mid->f118;
  P11c_82499BE8 *p;
  Slot_82499BE8 *q;
  float *pf;
  int i;

  a->f368 = 0;
  a->f140 = 0;
  if (o->fc4 != 0) {
    o->mid->f14->f8c0->f90 = 1;
    o->fc4 = 0;
  }
  p = o->mid->f11c;
  q = p->slots;
  i = 2;
  do {
    if (q->v != 0) {
      fn_822B91F8(p, p->f0, q->v, q->s);
      q->v = 0;
      q->s = 0x5b;
    }
    i--;
    q++;
  } while (i != 0);
  i = 0;
  do {
    pf = (float *)&o->fc4 + i + 1;
    fn_822B70F0(o->mid, *pf, i);
    fn_8252CC80(o->mid->f14, o->fd0 != 0);
    i++;
  } while (i < 2);
}
