typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_8269A190();
extern int fn_8269E088();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8269F310(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  uVar1 = *param_2;
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  lVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 8) - 1;
  *(int *)(*(int *)(param_1 + 8) + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8();
  }
  *(unsigned int *)(param_1 + 8) = uVar1;
  fn_8268B330(&uStack_30);
  if ((param_3 & 0xffffffff) != 0) {
    fn_8269E088(param_3,&uStack_30);
    fn_8268B610(&uStack_30,0xffffffff821c7f2c,0xffffffffffffffff);
  }
  fn_8268B610(&uStack_30,**(unsigned int **)(param_1 + 8),0xffffffffffffffff);
  piVar3 = (int *)fn_8269A190(aiStack_2c,*(unsigned int *)(*param_2 & 0xfffffc00),&uStack_30);
  iVar2 = *piVar3;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  lVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + 8) - 1;
  *(int *)(*(int *)(param_1 + 0xc) + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8();
  }
  *(int *)(param_1 + 0xc) = iVar2;
  lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_2c[0] + 8) - 1;
  bVar7 = (lVar5 == 0) << 1;
  *(int *)(aiStack_2c[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_2c[0]);
  }
  lVar5 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar4 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
      *puVar6 = uVar1;
      bVar7 = 2;
    }
  } while (!(bool)(bVar7 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  return;
}

