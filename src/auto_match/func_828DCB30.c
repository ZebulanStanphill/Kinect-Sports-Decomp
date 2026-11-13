typedef struct { char pad[0x34]; } Elem;
typedef struct {
  char pad[0x80];
  int a;
  int b;
  Elem *begin;
  Elem *end;
} Obj;

extern void fn_8223C478(void *s, int n, int z);
extern int fn_8240D930(Elem *e);
extern void fn_828E9DB8(void *s, int v, int n);


void fn_828DCB30(Obj *param_1, void *param_2)
{
  int a = param_1->a;
  int v;
  Elem *e;

  fn_8223C478(param_2, 2, 0);
  fn_828E9DB8(param_2, a, 2);
  v = param_1->b;
  fn_8223C478(param_2, 2, 0);
  fn_828E9DB8(param_2, v, 2);
  for (e = param_1->begin; e != param_1->end; e++) {
    fn_8223C478(param_2, 1, 0);
    fn_828E9DB8(param_2, 1, 1);
    v = fn_8240D930(e);
    fn_8223C478(param_2, 2, 0);
    fn_828E9DB8(param_2, v, 2);
  }
  fn_8223C478(param_2, 1, 0);
  fn_828E9DB8(param_2, 0, 1);
}
