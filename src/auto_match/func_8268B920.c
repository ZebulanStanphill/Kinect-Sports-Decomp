typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_826BD598();
extern int fn_826BD620();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268B920(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_1;
  if ((param_2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826BD598(param_2,0xffffffffffffffff);
  }
  uVar5 = 0;
  uVar2 = *param_1 & 3;
  if ((*param_1 & 3) == 0) {
    uVar5 = (unsigned __int64)lbl_831E7E64;
  }
  else if (uVar2 == 1) {
    uVar5 = fn_8267BF50(param_1,0);
  }
  else if (uVar2 < 3) {
    uVar5 = (unsigned __int64)param_1[1];
  }
  lVar4 = fn_8268B368(param_1,uVar5,uVar3,0);
  fn_826BD620(lVar4 + 8,param_2,0xffffffffffffffff);
  lVar6 = ((unsigned __int64)uVar1 & 0xfffffffc) + 4;
  *param_1 = *param_1 & 3 | (unsigned int)lVar4;
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar5 = (unsigned __int64)*puVar7;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38((unsigned __int64)uVar1 & 0xfffffffc);
  }
  return;
}

