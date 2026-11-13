typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268BC50(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar7 = 0;
  uVar5 = (unsigned __int64)uVar1 & 0xfffffffc;
  uVar3 = *(unsigned int *)uVar5;
  uVar4 = *(unsigned int *)(uVar2 & 0xfffffffc);
  uVar10 = (unsigned __int64)uVar3 & 0x7fffffff;
  uVar6 = (unsigned __int64)uVar4 & 0x7fffffff;
  if ((uVar1 & 3) == 0) {
    uVar7 = (unsigned __int64)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar7 = fn_8267BF50(param_1);
  }
  else if ((uVar1 & 3) < 3) {
    uVar7 = (unsigned __int64)param_1[1];
  }
  lVar8 = fn_8268B368(param_1,uVar7,uVar6 + uVar10,uVar4 & uVar3 & 0x80000000);
  fn_82F68CC0(lVar8 + 8,uVar5 + 8,uVar10);
  fn_82F68CC0(lVar8 + uVar10 + 8,(unsigned int *)(uVar2 & 0xfffffffc) + 2,uVar6);
  *param_1 = (unsigned int)lVar8 | *param_1 & 3;
  do {
    puVar9 = (unsigned int *)(uVar5 + 4);
    uVar10 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar10 - 1,0,uVar5 + 4);
      *puVar9 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar10 == 1) {
    fn_8267BE38(uVar5);
  }
  return;
}

