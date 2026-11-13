extern void fn_82687270(void *);
extern void fn_826C1AD8(void *);
extern unsigned int lbl_82013530;
extern unsigned int lbl_82013584;

void fn_8274CE00(void **param_1)
{
  *param_1 = &lbl_82013584;
  param_1[4] = &lbl_82013530;
  { void **p = param_1 + 0xd; if (*p != 0) fn_82687270(*p); }
  { void **p = param_1 + 0xc; if (*p != 0) fn_82687270(*p); }
  fn_826C1AD8(param_1);
}
