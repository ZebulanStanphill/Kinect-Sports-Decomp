typedef struct T_826EBEB0 { int v[5]; } T_826EBEB0;
typedef struct V_826EBEB0 { T_826EBEB0 *data; unsigned n; } V_826EBEB0;
extern int fn_826EBAF0(V_826EBEB0 *, V_826EBEB0 *, unsigned);

void fn_826EBEB0(V_826EBEB0 *vec, T_826EBEB0 *src)
{
  T_826EBEB0 *p;
  fn_826EBAF0(vec, vec, vec->n + 1);
  p = vec->data + vec->n - 1;
  if (p != 0) {
    *p = *src;
  }
}
