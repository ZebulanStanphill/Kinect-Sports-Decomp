extern void *fn_8265C9E0(unsigned int n);
extern void *fn_8288B668(void *p, void *a);
extern char lbl_82197070[];

void *fn_828A15A0(void *param_1)
{
  void **p;
  p = (void **)fn_8265C9E0(0x48);
  if (p != 0) {
    fn_8288B668(p, param_1);
    *p = lbl_82197070;
    return p;
  }
  return 0;
}
