extern unsigned int lbl_820026C0;
extern void *fn_82669E78(void *);

void **fn_82669F50(void **p)
{
  fn_82669E78(p + 1);
  *p = &lbl_820026C0;
  return p;
}
