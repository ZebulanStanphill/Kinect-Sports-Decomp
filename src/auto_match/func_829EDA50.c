extern unsigned int lbl_82079EEC;
extern void *fn_829EC538(void *p);

void *fn_829EDA50(void **param_1)
{
  *param_1 = &lbl_82079EEC;
  return fn_829EC538(param_1 + 2);
}
