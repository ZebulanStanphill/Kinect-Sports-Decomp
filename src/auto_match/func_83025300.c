extern int fn_83018DD8(int, void *, int, int, int, int, int, int, int, int);
extern void *zz;
extern int lbl_832642FC;

typedef struct Vt_83025300 { char pad[0xfc]; void *(*f)(void *); } Vt_83025300;
typedef struct Obj_83025300 { Vt_83025300 *vt; } Obj_83025300;
typedef struct Ent_83025300 { int a; unsigned id; int f8, fc, f10, f14, f18, f1c; } Ent_83025300;
typedef struct Lst_83025300 { Ent_83025300 *first, *last; } Lst_83025300;

int fn_83025300(Obj_83025300 **param_1, void *param_2, unsigned param_3)
{
  int r = 1;
  if (*param_1 == 0 || param_2 == 0) {
    r = 2;
  } else {
    Lst_83025300 *l = (Lst_83025300 *)(*param_1)->vt->f(*param_1);
    if (l != 0) {
      Ent_83025300 *e;
      for (e = l->first; e != l->last; e++) {
        if (param_3 == e->id) {
          r = fn_83018DD8(lbl_832642FC, param_2, e->f8, e->fc, e->f10, e->f1c, e->f14, e->f18, 0, 0);
        }
      }
    }
  }
  return r;
}
