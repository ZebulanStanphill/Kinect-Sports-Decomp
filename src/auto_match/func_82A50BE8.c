typedef struct Lock Lock;
typedef void (*VFn)(Lock *);
struct Lock { VFn *vt; };
typedef struct { char pad[0x2c]; Lock lock; } Owner;
typedef struct { char pad[0x30]; Owner *owner; int h; } Obj;
extern int fn_82A4FB90(int, int, int);

int fn_82A50BE8(Obj *param_1, int param_2, int param_3)
{
  int r;
  param_1->owner->lock.vt[2](&param_1->owner->lock);
  r = fn_82A4FB90(param_1->h, param_2, param_3);
  param_1->owner->lock.vt[5](&param_1->owner->lock);
  return r;
}
