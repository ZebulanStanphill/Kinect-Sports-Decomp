extern float fn_8300A140(void *);
typedef struct { void *obj; } Ref_830251B0;
float fn_830251B0(Ref_830251B0 *r)
{
  void *p = r->obj;
  if (p != 0) return fn_8300A140(p);
  return 0.0f;
}
