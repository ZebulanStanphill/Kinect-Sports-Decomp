extern int fn_8267C498();

typedef struct { int a; int refs; } Obj;
typedef struct { Obj *p; int b; int c; } Ptr;

Ptr *fn_8272DF40(Ptr *param_1, Ptr *param_2)
{
  int o = (int)param_2->p;
  if (o != 0) {
    ((Obj *)o)->refs = ((Obj *)o)->refs + 1;
  }
  if (param_1->p != 0) {
    fn_8267C498(param_1->p);
  }
  param_1->p = param_2->p;
  param_1->b = param_2->b;
  param_1->c = param_2->c;
  return param_1;
}
