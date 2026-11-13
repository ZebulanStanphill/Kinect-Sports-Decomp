typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268ACE8();
extern int fn_8268B368();
extern int fn_826BD7D0();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268BD50(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar4 = (unsigned __int64)*param_1 & 0xfffffffc;
  uVar1 = *(unsigned int *)uVar4;
  uVar5 = fn_8268ACE8();
  if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    if ((uVar5 & 0xffffffff) < (param_2 + param_3 & 0xffffffff)) {
      param_3 = uVar5 - param_2;
    }
    lVar6 = fn_826BD7D0(param_2,uVar4 + 8,0xffffffffffffffff);
    lVar7 = fn_826BD7D0(param_3,lVar6 + uVar4 + 8,0xffffffffffffffff);
    uVar2 = *(unsigned int *)uVar4;
    uVar3 = *param_1 & 3;
    uVar5 = 0;
    if ((*param_1 & 3) == 0) {
      uVar5 = (unsigned __int64)lbl_831E7E64;
    }
    else if (uVar3 == 1) {
      uVar5 = fn_8267BF50(param_1,0);
    }
    else if (uVar3 < 3) {
      uVar5 = (unsigned __int64)param_1[1];
    }
    uVar3 = *param_1;
    lVar10 = ((unsigned __int64)uVar1 & 0x7fffffff) - lVar7;
    lVar8 = fn_8268B368(param_1,uVar5,lVar10,uVar2 & 0x80000000);
    fn_82F68CC0(lVar8 + 8,uVar4 + 8,lVar6);
    fn_82F68CC0(lVar8 + lVar6 + 8,(unsigned __int64)uVar3 + lVar7 + lVar6 + 8,lVar10 - lVar6);
    *param_1 = (unsigned int)lVar8 | *param_1 & 3;
    do {
      puVar9 = (unsigned int *)(uVar4 + 4);
      uVar5 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,uVar4 + 4);
        *puVar9 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38(uVar4);
    }
  }
  return;
}

