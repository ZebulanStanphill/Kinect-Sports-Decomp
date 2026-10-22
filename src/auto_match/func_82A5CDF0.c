typedef int (*code)();

typedef struct Lock { code *vt; } Lock;
typedef struct Obj { char pad[4]; char sub[8]; Lock *lock; } Obj;

extern int fn_82A5C650(void *a, int b, int c);

int fn_82A5CDF0(Obj *p, int a, int b)
{
  int r;
  p->lock->vt[2](p->lock);
  r = fn_82A5C650(p->sub, 0, b);
  p->lock->vt[5](p->lock);
  return r;
}
