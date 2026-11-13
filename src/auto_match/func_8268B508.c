typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_826BD598();
extern int fn_826BD620();
extern int memcpy();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268B508(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = (unsigned __int64)*param_1 & 0xfffffffc;
    uVar6 = (unsigned __int64)*(unsigned int *)uVar2 & 0x7fffffff;
    lVar3 = fn_826BD598(param_2,param_3);
    uVar4 = 0;
    uVar1 = *param_1 & 3;
    if ((*param_1 & 3) == 0) {
      uVar4 = (unsigned __int64)lbl_831E7E64;
    }
    else if (uVar1 == 1) {
      uVar4 = fn_8267BF50(param_1,0);
    }
    else if (uVar1 < 3) {
      uVar4 = (unsigned __int64)param_1[1];
    }
    lVar3 = fn_8268B368(param_1,uVar4,lVar3 + uVar6,0);
    memcpy(lVar3 + 8,uVar2 + 8,uVar6);
    fn_826BD620(lVar3 + uVar6 + 8,param_2,param_3);
    *param_1 = (unsigned int)lVar3 | *param_1 & 3;
    do {
      puVar5 = (unsigned int *)(uVar2 + 4);
      uVar6 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,uVar2 + 4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar6 == 1) {
      fn_8267BE38(uVar2);
    }
  }
  return;
}

