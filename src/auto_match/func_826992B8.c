struct O_826992B8;
typedef struct VT_826992B8 {
  void *s[2];
  unsigned char (*test)(struct O_826992B8 *);
  void *t[32];
  void (*apply)(struct O_826992B8 *, int);
} VT_826992B8;
typedef struct O_826992B8 { VT_826992B8 *vt; } O_826992B8;
typedef struct V_826992B8 { O_826992B8 **data; int count; } V_826992B8;

void fn_826992B8(V_826992B8 *param_1, int param_2)
{
  int i;
  for (i = param_1->count - 1; i >= 0; i--) {
    O_826992B8 *o = param_1->data[i];
    if (o->vt->test(o) != 0) {
      o->vt->apply(o, param_2);
      if (i >= param_1->count) {
        i = param_1->count;
      }
    }
  }
}
