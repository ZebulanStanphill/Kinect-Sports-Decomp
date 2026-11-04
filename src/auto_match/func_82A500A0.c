typedef struct Obj_82A500A0 { int (**vt)(); } Obj_82A500A0;
typedef struct Buf_82A500A0 { Obj_82A500A0 *o; int a; int b; int c; int d; int e; void *buf; } Buf_82A500A0;
extern void *memcpy(void *, const void *, unsigned);
void fn_82A500A0(Buf_82A500A0 *p, void *s, int t)
{
  memcpy(p->buf, s, 0xc);
  ((void (*)(Obj_82A500A0 *, int, int, void *, int))p->o->vt[2])(p->o, 0, t, p->buf, (p->b * p->a + 3) * 4);
}
