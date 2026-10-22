typedef int (*code)();

typedef struct Lock { code *vt; } Lock;
typedef struct Obj2 { code *vt; } Obj2;
typedef struct Inner { char pad[0x2c]; Lock lock; } Inner;
typedef struct Outer { char pad[0x34]; Inner *inner; char pad2[0x90 - 0x38]; Obj2 *o; } Outer;

int fn_82A477B8(Outer *p)
{
  int r;
  p->inner->lock.vt[2](&p->inner->lock);
  r = p->o->vt[13](p->o, 0x200);
  p->inner->lock.vt[5](&p->inner->lock);
  return r;
}
