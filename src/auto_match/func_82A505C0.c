typedef struct Lock_82A505C0 Lock_82A505C0;
typedef struct LVT_82A505C0 {
  int pad[2];
  void (*f08)(Lock_82A505C0 *);
  int pad0c[2];
  void (*f14)(Lock_82A505C0 *);
} LVT_82A505C0;
struct Lock_82A505C0 { LVT_82A505C0 *vt; };
typedef struct Inner_82A505C0 {
  char pad[0x2c];
  Lock_82A505C0 lock;
} Inner_82A505C0;
typedef struct Obj_82A505C0 {
  char pad[0x30];
  Inner_82A505C0 *p30;
  char pad34[0x48 - 0x34];
  float f48;
} Obj_82A505C0;

void fn_82A505C0(Obj_82A505C0 *o, float *out)
{
  o->p30->lock.vt->f08(&o->p30->lock);
  *out = o->f48;
  o->p30->lock.vt->f14(&o->p30->lock);
}
