extern void fn_82D82658(int, int);


typedef struct { int *data; int size; } Arr_82D82710;
typedef struct { char pad[0x28]; Arr_82D82710 a; int pad2; Arr_82D82710 b; } Obj_82D82710;
static void Each_82D82710(Arr_82D82710 *a, int x)
{
  int *p;
  for (p = a->data; p != a->data + a->size; p++) {
    fn_82D82658(*p, x);
  }
}
void fn_82D82710(Obj_82D82710 *param_1, int param_2)
{
  Each_82D82710(&param_1->a, param_2);
  Each_82D82710(&param_1->b, param_2);
}
