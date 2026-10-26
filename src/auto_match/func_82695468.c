typedef struct Obj Obj;
typedef struct { void *a; void *b; int (*get)(Obj *); } Vt;
struct Obj { Vt *vt; };
typedef struct { int a; int b; Obj *o; } Owner;

int fn_82695468(Owner *param_1, int param_2)
{
  if (param_1->o != 0 && param_1->o->vt->get(param_1->o) == param_2) {
    return 1;
  }
  return 0;
}
