extern unsigned int lbl_820026C4;
extern void *fn_82669E78(void *);

void **fn_8266A030(void **p)
{
  fn_82669E78(p + 1);
  *p = &lbl_820026C4;
  return p;
}
