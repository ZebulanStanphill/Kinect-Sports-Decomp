extern void fn_82286BF0(void *p);
extern void fn_8265CA20(void *p);
typedef struct { char pad[0xf0]; int a, b; } G;
extern G *lbl_8327F844;
typedef struct { char pad[0x448]; void *p; } Sub;
void fn_82487D88(char *param_1)
{
  Sub *s = (Sub *)(param_1 + 0x10);
  G *g = lbl_8327F844;
  void *o;
  if (lbl_8327F844 != 0) {
    g->a = 0;
    g->b = 0;
  }
  o = s->p;
  if (o != 0) {
    fn_82286BF0(o);
    fn_8265CA20(o);
    s->p = 0;
  }
}
