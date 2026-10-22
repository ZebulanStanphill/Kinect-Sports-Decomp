typedef unsigned int uint;
extern void fn_822B5CE8(void *);
extern void fn_822C16B8(void *);
extern void fn_82359C18(void *);
extern void fn_823DF780(void *);
extern void fn_823E2028(void *);
extern void fn_8251FA58(int);
extern void fn_82575DF0(int, void *);
extern void fn_8265CA20(void *);
extern char lbl_821ACF5C[];

static void release(void **param_1, void **pp)
{
  if (*pp != 0) {
    fn_82575DF0(*(int *)(*(int *)((int)param_1[5] + 0x4c) + 0x93c), *pp);
    *pp = 0;
  }
}

void fn_822C2750(void **param_1)
{
  char *iVar1;

  iVar1 = (char *)param_1[0x7a];
  *param_1 = lbl_821ACF5C;
  if (iVar1 != 0) {
    fn_8251FA58(*(int *)(iVar1 + 0x52c));
    fn_82359C18(iVar1 + 0x510);
    fn_8265CA20(iVar1);
  }
  if (param_1[0x9d] != 0) {
    release(param_1, &param_1[0x9d]);
  }
  fn_822C16B8(param_1 + 0x70);
  fn_823E2028(param_1 + 0x6c);
  fn_823DF780(param_1 + 0x68);
  fn_822B5CE8(param_1);
}
