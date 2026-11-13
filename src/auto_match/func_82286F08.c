extern void *fn_8225C590();
extern int fn_8225D168();
extern int fn_82267130();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern unsigned char lbl_832766F6;


int * fn_82286F08(int *param_1)

{
  void *uVar1;
  char *iVar2; char *begin;
  
  uVar1 = fn_8225C590();
  fn_8225D168(uVar1,param_1[0xe1]);
  if ((void *)param_1[0xe5] != 0) {
    fn_8229E090(param_1[0xe5],0,0);
    param_1[0xe5] = 0;
  }
  if ((void *)param_1[0xb3] != 0) {
    fn_82267130(param_1[0xb3]);
  }
  if ((void *)param_1[0xe0] != 0) {
    fn_822848B8(param_1[0xe0]);
    param_1[0xe0] = 0;
  }
  fn_8251FA58(param_1[0xaf]);
  fn_8251FA58(param_1[0xb0]);
  begin = (char *)*param_1; iVar2 = 0;
  lbl_832766F6 = 0;
  if (begin != 0) {
    for (iVar2 = begin; iVar2 != (char *)param_1[1]; iVar2 = iVar2 + 0xe0) {
    }
    fn_8265CA20(begin);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8265CA20(param_1);
  return param_1;
}

