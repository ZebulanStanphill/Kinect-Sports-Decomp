extern float fn_8300A298(void *);
typedef struct { void *obj; } Ref_830251D0;
float fn_830251D0(Ref_830251D0 *r)
{
  void *p = r->obj;
  if (p != 0) return fn_8300A298(p);
  return 0.0f;
}
