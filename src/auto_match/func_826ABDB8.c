extern int fn_826944C8();
extern int fn_826AA3E0();


typedef struct E_826ABDB8 { int a; int *b; } E_826ABDB8;
typedef struct V_826ABDB8 { char pad[0x50]; E_826ABDB8 *data; unsigned int n; } V_826ABDB8;

E_826ABDB8 *fn_826ABDB8(V_826ABDB8 *v,int param_2,int **param_3)
{
  E_826ABDB8 *p;
  int *r;
  int *q;
  fn_826AA3E0(&v->data, v->n + 1);
  p = v->data + v->n - 1;
  p->a = param_2;
  r = *param_3;
  r[2] = r[2] + 1;
  q = p->b;
  if (--q[2] == 0) {
    fn_826944C8(q);
  }
  p->b = r;
  return p;
}
