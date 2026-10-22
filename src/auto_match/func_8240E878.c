typedef void (*vfn)();
extern void fn_823B78E0(void *a, void *b);
extern void fn_824106F8(void *a, int b, int c);
extern void fn_8251FA58(void *a);
extern void fn_82529320(void *a, int b);
extern void fn_82536288(void *a);
extern void fn_82573868(void *a, void *b);
extern void fn_82575DF0(void *a, void *b);
extern void fn_82D89B48(void *a, void *b);
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821B8244;

void fn_8240E878(void **param_1)
{
  void **piVar1;

  *param_1 = &lbl_821B8244;
  if (param_1[0x99] != 0) {
    fn_82575DF0(*(void **)(*(int *)((char *)param_1[10] + 0x4c) + 0x93c), param_1[0x99]);
    param_1[0x99] = 0;
  }
  if (*(int *)((char *)param_1[10] + 0x4c) != 0) {
    fn_824106F8(param_1, 0, *(int *)((char *)param_1[10] + 0x4c));
  }
  if ((int)param_1[0x96] != 0) {
    fn_82573868(param_1[10], param_1 + 0x7c);
  }
  if (param_1[0x9c] != 0) {
    fn_82D89B48(*(void **)((char *)param_1[10] + 0x7c0), param_1[0x9c]);
    piVar1 = (void **)param_1[0x9c];
    if (piVar1 != 0) {
      (*(vfn *)((char *)*piVar1 + 0xc))(piVar1, 1);
    }
    param_1[0x9c] = 0;
  }
  fn_82529320(param_1[10], 0);
  param_1[10] = 0;
  if (param_1[0x35] != 0) {
    fn_8251FA58(param_1[0x35]);
    param_1[0x35] = 0;
  }
  if (param_1[6] != 0) {
    (**(vfn **)param_1[6])(param_1[6]);
  }
  fn_82536288(param_1 + 6);
  *param_1 = &lbl_821B5BEC;
  if (param_1[1] != 0) {
    fn_823B78E0(param_1[1], param_1);
  }
}
