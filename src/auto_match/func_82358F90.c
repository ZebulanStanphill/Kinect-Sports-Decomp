typedef struct { int *first; int *last; } Vec;
typedef struct Obj Obj;
typedef struct { void *s[4]; void (*f)(Obj *, int, int); } Vt;
struct Obj { Vt *vt; int pad[10]; int idx; };

void fn_82358F90(char *param_1, Obj *param_2)
{
  Vec *v = (*(Vec ***)(param_1 + 0x20))[param_2->idx];
  if ((unsigned int)(v->last - v->first) > 0) {
    param_2->vt->f(param_2, v->first[0], 1);
  }
}
