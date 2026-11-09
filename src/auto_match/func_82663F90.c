extern unsigned int lbl_82001D8C;
extern void *fn_82669E78(void *);

void **fn_82663F90(void **p)
{
  fn_82669E78(p + 1);
  *p = &lbl_82001D8C;
  return p;
}
