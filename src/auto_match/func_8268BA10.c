typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int memcpy();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268BA10(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_1 & 3;
  uVar8 = 0;
  if ((*param_1 & 3) == 0) {
    uVar8 = (unsigned __int64)lbl_831E7E64;
  }
  else if (uVar1 == 1) {
    uVar8 = fn_8267BF50(param_1);
  }
  else if (uVar1 < 3) {
    uVar8 = (unsigned __int64)param_1[1];
  }
  uVar1 = *param_2;
  uVar5 = 0;
  uVar2 = *param_1;
  uVar3 = (unsigned __int64)uVar1 & 0xfffffffc;
  if ((uVar1 & 3) == 0) {
    uVar5 = (unsigned __int64)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar5 = fn_8267BF50(param_2);
  }
  else if ((uVar1 & 3) < 3) {
    uVar5 = (unsigned __int64)param_2[1];
  }
  if ((uVar8 & 0xffffffff) == (uVar5 & 0xffffffff)) {
    *param_1 = *param_1 & 3 | (unsigned int)(unsigned int *)uVar3;
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
    uVar1 = *(unsigned int *)uVar3;
    uVar4 = uVar1 & 0x7fffffff;
    lVar6 = fn_8268B368(param_1,uVar8,uVar4,uVar1 & 0x80000000);
    memcpy(lVar6 + 8,uVar3 + 8,uVar4);
    *param_1 = (unsigned int)lVar6 | *param_1 & 3;
  }
  lVar6 = ((unsigned __int64)uVar2 & 0xfffffffc) + 4;
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar8 = (unsigned __int64)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
      *puVar7 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar8 == 1) {
    fn_8267BE38((unsigned __int64)uVar2 & 0xfffffffc);
  }
  return;
}

