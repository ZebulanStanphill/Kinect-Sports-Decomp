typedef struct { int **first; int **last; } Vec_8326504C;
extern Vec_8326504C lbl_8326504C;
extern void fn_83052288(int *, int, int);
void fn_8304F0A8(int *param_1, int param_2)
{
  Vec_8326504C *v = &lbl_8326504C;
  unsigned i;
  for (i = 0; i < (unsigned)(v->last - v->first); i++) {
    fn_83052288(v->first[i], param_1 == v->first[i], param_2);
  }
}
