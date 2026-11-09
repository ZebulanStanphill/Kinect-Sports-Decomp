extern unsigned int lbl_82002780;
extern void *fn_82669E78(void *);

void **fn_8266B0A8(void **p)
{
  fn_82669E78(p + 1);
  *p = &lbl_82002780;
  return p;
}
