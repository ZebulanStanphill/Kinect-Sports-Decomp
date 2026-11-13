typedef struct { int *a; int *b; int pad[3]; } Ent_83032E20;
typedef struct { Ent_83032E20 *begin; Ent_83032E20 *end; } Vec_83032E20;

void fn_83032E20(Vec_83032E20 *param_1)
{
  Ent_83032E20 *e;
  Ent_83032E20 *end = param_1->end;
  for (e = param_1->begin; e != end; e++) {
    if (e->b != 0) {
      (*(int (**)())(*(int *)e->b + 4))(e->b);
      e->b = 0;
    }
    if (e->a != 0) {
      (*(int (**)())(*(int *)e->a + 8))(e->a);
      e->a = 0;
    }
  }
  param_1->end = param_1->begin;
}
