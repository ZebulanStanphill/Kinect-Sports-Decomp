typedef unsigned char bool;
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268C3E8(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_2;
  uVar4 = 0;
  uVar3 = (unsigned __int64)uVar1 & 0xfffffffc;
  if ((uVar1 & 3) == 0) {
    uVar4 = (unsigned __int64)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar4 = fn_8267BF50(param_2);
  }
  else if ((uVar1 & 3) < 3) {
    uVar4 = (unsigned __int64)param_2[1];
  }
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = uVar4;
  }
  param_1[1] = (unsigned int)param_3;
  puVar2 = (unsigned int *)uVar3;
  if ((uVar4 & 0xffffffff) == (param_3 & 0xffffffff)) {
    do {
      puVar6 = (unsigned int *)(uVar3 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,uVar3 + 4);
        *puVar6 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar1 = *puVar2 & 0x7fffffff;
    lVar5 = fn_8268B368(param_1,param_3,uVar1,*puVar2 & 0x80000000);
    fn_82F68CC0(lVar5 + 8,uVar3 + 8,uVar1);
    puVar2 = (unsigned int *)lVar5;
  }
  *param_1 = (unsigned int)puVar2 | 2;
  return;
}

