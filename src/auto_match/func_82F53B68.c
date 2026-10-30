extern unsigned int lbl_82165C64;
extern void *fn_82359C18(void *p);

void *fn_82F53B68(void **param_1)
{
  *param_1 = &lbl_82165C64;
  return fn_82359C18(param_1 + 2);
}
