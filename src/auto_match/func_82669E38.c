extern unsigned int lbl_820026BC;
extern void *fn_82669E78(void *);

void **fn_82669E38(void **p)
{
  fn_82669E78(p + 1);
  *p = &lbl_820026BC;
  return p;
}
