typedef struct VT_82797C88 { int s[5]; void (*f)(void *self, void *a); } VT_82797C88;
typedef struct { VT_82797C88 *vt; } Obj_82797C88;
typedef struct { int size1; int size; } Arr_82797C88;
typedef struct { Arr_82797C88 *a; int idx; } Ref_82797C88;
typedef struct { int a, b, c; } Out_82797C88;
extern int fn_8267BE38(int x);
extern int fn_82796410(Arr_82797C88 *a, int i);

void fn_82797C88(Obj_82797C88 *self, Ref_82797C88 *ref, Out_82797C88 *out)
{
  unsigned char bad;
    Arr_82797C88 *a;
  self->vt->f(self, out);
  fn_8267BE38(out->a);
  out->a = 0;
  out->c = 0;
  out->b = 0;
  a = ref->a;
  bad = a == 0 || ref->idx < 0 || ref->idx >= a->size;
  if (!bad) fn_82796410(a, ref->idx);
}
