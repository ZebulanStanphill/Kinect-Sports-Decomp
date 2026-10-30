extern void *fn_8265C9E0(int size);
extern void *fn_82E22578(void *mem);
extern void fn_82E22608(void *o);
typedef struct { int a, b; void *obj; } T;
void fn_82E20690(T *t)
{
  void *mem = fn_8265C9E0(0xa0);
  t->obj = mem ? fn_82E22578(mem) : 0;
  fn_82E22608(t->obj);
}
