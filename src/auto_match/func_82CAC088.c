extern void fn_82C563B0(void *heap, void *p);
extern void fn_82CAD2B0(int a, void *p);

typedef struct {
  char pad[0x28];
  void *a;
  void *b;
  void *c;
} Obj;

void fn_82CAC088(int param_1, Obj *obj)
{
  void *heap = (void *)(*(int *)(param_1 + 0x6070) + 8);

  if (obj != 0) {
    fn_82CAD2B0(param_1, obj->b);
    if (obj->b != 0)
      fn_82C563B0(heap, obj->b);
    if (obj->c != 0)
      fn_82C563B0(heap, obj->c);
    if (obj->a != 0)
      fn_82C563B0(heap, obj->a);
    fn_82C563B0(heap, obj);
  }
}
