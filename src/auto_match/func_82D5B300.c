typedef struct Obj_82D5B300 { struct OVt_82D5B300 *vt; } Obj_82D5B300;
struct OVt_82D5B300 { void *f0, *f4, *f8, *fc; int (*f10)(Obj_82D5B300 *); };
typedef struct { int a; Obj_82D5B300 **b; int c; int d; int e; int f; int g; } Msg_82D5B300;
typedef struct Sub_82D5B300 {
  char pad0[0xb];
  unsigned char flags;   /* 0x0B */
  int pad0c;
  char queue[1];         /* 0x10 */
} Sub_82D5B300;
extern void fn_82D71478(void *, Msg_82D5B300 *);

void fn_82D5B300(void *self, Sub_82D5B300 *sub, int a, Obj_82D5B300 **o, int e, int f, int g)
{
  Msg_82D5B300 m;
  if ((sub->flags & 0x20) == 0) {
    m.d = (*o)->vt->f10(*o);
    m.a = a;
    m.b = o;
    m.e = e;
    m.f = f;
    m.g = g;
    fn_82D71478(sub->queue, &m);
  }
}
