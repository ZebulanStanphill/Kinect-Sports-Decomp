extern unsigned int lbl_82167E5C;
extern void *fn_82BA02A8(void *p);

void *fn_82F60B18(void **param_1)
{
  *param_1 = &lbl_82167E5C;
  return fn_82BA02A8(param_1 + 1);
}
