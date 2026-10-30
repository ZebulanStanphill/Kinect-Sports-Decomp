typedef struct T_827622E0 { int v[5]; } T_827622E0;
typedef struct V_827622E0 { T_827622E0 *data; unsigned n; } V_827622E0;
extern int fn_827610C8(V_827622E0 *, V_827622E0 *, unsigned);

void fn_827622E0(V_827622E0 *vec, T_827622E0 *src)
{
  T_827622E0 *p;
  fn_827610C8(vec, vec, vec->n + 1);
  p = vec->data + vec->n - 1;
  if (p != 0) {
    *p = *src;
  }
}
