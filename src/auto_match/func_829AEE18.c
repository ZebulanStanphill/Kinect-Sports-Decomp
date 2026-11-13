extern int fn_829AECC8();
extern int fn_829B5070();


void fn_829AEE18(void **param_1,void **param_2,void **param_3)

{
  void *iVar1;
  void *iVar2;
  void *iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *param_1;
  }
  if (param_2 != 0) {
    iVar3 = *param_2;
  }
  if (param_3 != 0) {
    iVar2 = *param_3;
  }
  if (iVar1 != 0) {
    fn_829AECC8(iVar1,iVar3,iVar2);
  }
  if (iVar3 != 0) {
    fn_829B5070(iVar3);
    *param_2 = 0;
  }
  if (iVar2 != 0) {
    fn_829B5070(iVar2);
    *param_3 = 0;
  }
  if (iVar1 != 0) {
    fn_829B5070(iVar1);
    *param_1 = 0;
  }
  return;
}

