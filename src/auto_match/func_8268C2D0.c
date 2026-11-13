typedef unsigned char bool;
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268C2D0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar3 = (unsigned __int64)*param_2 & 0xfffffffc;
  uVar4 = fn_8267BF50();
  uVar5 = 0;
  uVar1 = *param_2 & 3;
  if ((*param_2 & 3) == 0) {
    uVar5 = (unsigned __int64)lbl_831E7E64;
  }
  else if (uVar1 == 1) {
    uVar5 = fn_8267BF50(param_2);
  }
  else if (uVar1 < 3) {
    uVar5 = (unsigned __int64)param_2[1];
  }
  puVar2 = (unsigned int *)uVar3;
  if ((uVar5 & 0xffffffff) == (uVar4 & 0xffffffff)) {
    do {
      puVar7 = (unsigned int *)(uVar3 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,uVar3 + 4);
        *puVar7 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar1 = *puVar2 & 0x7fffffff;
    lVar6 = fn_8268B368(param_1,uVar4,uVar1,*puVar2 & 0x80000000);
    fn_82F68CC0(lVar6 + 8,uVar3 + 8,uVar1);
    puVar2 = (unsigned int *)lVar6;
  }
  *param_1 = (unsigned int)puVar2 | 1;
  return;
}

