extern int fn_8267C4C8(void *p);
extern int fn_826E4270(int a, void *b);
extern char lbl_8200D5A8;
typedef struct T { char pad[0x3c]; int x3c; } T;
typedef struct { void *vtbl; int refs; int x8; int xc; T *obj; } Obj;

Obj *fn_826E56B8(Obj *param_1, T *param_2, int param_3)
{
  T **pp;
  param_1->x8 = param_3;
  param_1->refs = 1;
  param_1->vtbl = &lbl_8200D5A8;
  param_1->xc = 0;
  if (param_2 != 0) fn_8267C4C8((void *)param_2);
  param_1->obj = param_2;
  pp = &param_1->obj; fn_826E4270((*pp)->x3c, param_1);
  return param_1;
}
