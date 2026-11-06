typedef struct Ent_82F1CDD0 {
  char pad[0x28];
  int val;
  char pad2[8];
} Ent_82F1CDD0;

typedef struct Rec_82F1CDD0 {
  char pad[0x60];
  int f60;
  char pad2[0x114 - 0x64];
} Rec_82F1CDD0;

typedef struct Ctx_82F1CDD0 {
  char pad[0x2d0];
  int n;
  char pad2[0x6d24 - 0x2d4];
  Ent_82F1CDD0 *tab;
} Ctx_82F1CDD0;

extern short fn_82E85220(Ctx_82F1CDD0 *, int, int);

void fn_82F1CDD0(Ctx_82F1CDD0 *param_1, int param_2, Rec_82F1CDD0 *param_3, int *param_4, int *param_5, int *param_6)
{
  Rec_82F1CDD0 *q;
  Ent_82F1CDD0 *tab;
  int a;
  int b;
  int c;
  int s;
  int v6;

  if (param_2 == 0 || param_2 == 4 || param_2 == 5) {
    v6 = *param_6;
    tab = param_1->tab;
    q = param_3 - param_1->n;
    a = tab[q[-1].f60].val;
    s = tab[param_3->f60].val;
    b = tab[q->f60].val;
    c = tab[param_3[-1].f60].val;
    *param_6 = fn_82E85220(param_1, a * v6, s);
    *param_4 = fn_82E85220(param_1, *param_4 * b, s);
    *param_5 = fn_82E85220(param_1, *param_5 * c, s);
  } else if (param_2 == 1) {
    v6 = *param_6;
    q = param_3 - param_1->n;
    a = param_1->tab[q->f60].val;
    s = param_1->tab[param_3->f60].val;
    *param_6 = fn_82E85220(param_1, a * v6, s);
    *param_4 = fn_82E85220(param_1, *param_4 * a, s);
  } else if (param_2 == 2) {
    v6 = *param_6;
    a = param_1->tab[param_3[-1].f60].val;
    s = param_1->tab[param_3->f60].val;
    *param_6 = fn_82E85220(param_1, a * v6, s);
    *param_5 = fn_82E85220(param_1, *param_5 * a, s);
  }
}
