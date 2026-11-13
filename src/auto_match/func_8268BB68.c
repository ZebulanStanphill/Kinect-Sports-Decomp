typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268BB68(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_1;
  uVar7 = (unsigned __int64)*param_2;
  uVar2 = param_2[1];
  if (uVar7 == 0) {
    uVar7 = 0xffffffff82196582;
  }
  uVar4 = 0;
  if ((uVar1 & 3) == 0) {
    uVar4 = (unsigned __int64)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar4 = fn_8267BF50(param_1,0);
  }
  else if ((uVar1 & 3) < 3) {
    uVar4 = (unsigned __int64)param_1[1];
  }
  lVar3 = fn_8268B368(param_1,uVar4,uVar2,0);
  fn_82F68CC0(lVar3 + 8,uVar7,uVar2);
  lVar5 = ((unsigned __int64)uVar1 & 0xfffffffc) + 4;
  *param_1 = (unsigned int)lVar3 | *param_1 & 3;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar7 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38((unsigned __int64)uVar1 & 0xfffffffc);
  }
  return;
}

