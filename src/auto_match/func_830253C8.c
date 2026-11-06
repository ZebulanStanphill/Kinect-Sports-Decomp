extern int fn_83018DD8(int, void *, int, int, int, int, int, int, int, int);
extern int lbl_832642FC;

typedef struct Ent_830253C8 { unsigned id; int f4, f8, fc, f10, f14, f18; } Ent_830253C8;
typedef struct Lst_830253C8 { Ent_830253C8 *first, *last; } Lst_830253C8;
typedef struct Mgr_830253C8 { char pad[0x88]; Lst_830253C8 list; } Mgr_830253C8;
extern Mgr_830253C8 *lbl_83264300;

int fn_830253C8(void **param_1, void *param_2, unsigned param_3)
{
  int r = 1;
  if (*param_1 != 0) {
    Lst_830253C8 *l = &lbl_83264300->list;
    if (l != 0) {
      Ent_830253C8 *e;
      for (e = l->first; e != l->last; e++) {
        if (param_2 != 0 && param_3 == e->id) {
          r = fn_83018DD8(lbl_832642FC, param_2, e->f4, e->fc, e->f8, e->f18, e->f10, e->f14, 0, 0);
        }
      }
    }
  } else {
    r = 2;
  }
  return r;
}
