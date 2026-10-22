typedef struct VObj VObj;
typedef struct { void (*dtor)(VObj *self, int flags); } VObjVtbl;
struct VObj { VObjVtbl *vtbl; };

typedef struct { char pad[0x1f0]; int count; } Owner;

typedef struct {
  void *vtbl;
  int state;
  char pad8[0x48];
  Owner *owner;
  char pad54[0x10];
  VObj *child;
} Self;

extern void fn_8289DC70(Owner *o, Self *s);
extern void fn_8289FB58(Self *s);
extern void fn_828A0800(Self *s);
extern char lbl_82023BDC[];

void fn_8289D9E8(Self *param_1)
{
  param_1->vtbl = lbl_82023BDC;
  if (param_1->state == 1) {
    Owner *o = param_1->owner;
    o->count--;
    fn_828A0800(param_1);
  }
  if (param_1->child != 0) {
    param_1->child->vtbl->dtor(param_1->child, 1);
  }
  param_1->child = 0;
  fn_8289DC70(param_1->owner, param_1);
  fn_8289FB58(param_1);
}
