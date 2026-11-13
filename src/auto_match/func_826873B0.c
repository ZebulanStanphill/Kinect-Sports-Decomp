typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8267EF68();
extern int fn_82686608();
extern int fn_82687270();
extern unsigned int lbl_82005B58;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826873B0(unsigned int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = param_1[2];
  *param_1 = &lbl_82005B58;
  RtlEnterCriticalSection((unsigned __int64)uVar1 + 0xc);
  if (param_1[3] == 0) {
    fn_82686608((unsigned __int64)(unsigned int)param_1[2] + 0x28,param_1 + 5);
  }
  else if (param_1[4] != 0) {
    fn_82687270(param_1[4]);
  }
  RtlLeaveCriticalSection((unsigned __int64)uVar1 + 0xc);
  fn_8267EF68(param_1 + 8);
  lVar3 = ((unsigned __int64)(unsigned int)param_1[7] & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar5 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 8))(piVar2,param_1[6]);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1);
  return;
}

