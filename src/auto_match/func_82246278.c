extern void *fn_8265C9E0(unsigned int n);
extern void *fn_828E57F8(void *p);

void *fn_82246278(void)
{
  void *p = fn_8265C9E0(0x90);
  return p ? fn_828E57F8(p) : 0;
}
