typedef struct VObj { void (**vt)(); } VObj;
extern void fn_8223F508(void *p);
extern VObj *fn_8223CBE8(void **pp);
extern VObj *fn_8223F5A0(void *p);

void fn_8223CC88(int param_1, int param_2)
{
  void *p;
  VObj *a;
  VObj *b;
  void *tmp;

  p = **(void ***)(param_1 + 0x30);
  tmp = p;
  fn_8223F508(p);
  a = fn_8223CBE8(&tmp);
  if (p != 0 && (b = fn_8223F5A0(p)) != 0) {
    b->vt[0](b, 1);
  }
  a->vt[6](a, param_2);
}
