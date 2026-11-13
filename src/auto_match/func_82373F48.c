extern int fn_8236FB68();
extern int fn_82372ED8();
extern int fn_82372F88();
extern int fn_82374DA8();
extern int fn_8248F9F8();
extern int fn_82508078();
extern unsigned int lbl_821CA460;


void fn_82373F48(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar6;
  int iVar7;
  
  uVar6 = param_2;
  uVar5 = fn_82372ED8();
  *(unsigned int *)(param_1 + 0x9f4) = uVar5;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + (int)((uVar6 & 0xffffffff) << 2));
  *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) =
       *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) + lbl_821CA460;
  if (*(int *)(param_1 + 0x9f4) == 0) {
    if (*(int *)(param_1 + 0x204) == 0) {
      lVar4 = fn_82372F88(param_1);
      iVar7 = (int)(lVar4 + 1) - ((int)lVar4 + (unsigned int)(lVar4 + 1 == 0));
    }
    else {
      iVar7 = *(int *)(param_1 + 0x658);
    }
    if (iVar7 == 0) goto LAB_82374014;
    uVar3 = 8;
  }
  else {
    uVar3 = 0x27;
  }
  lVar4 = fn_8236FB68(uVar3);
  if (lVar4 != 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),lVar4,0);
  }
LAB_82374014:
  *(int *)(param_1 + 0x1e0) = (int)param_2;
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + -1;
  fn_82374DA8(param_1);
  puVar1 = *(unsigned int **)(param_1 + 0x94);
  if ((puVar1 != (unsigned int *)0x0) && (puVar1[7] != 0)) {
    lVar4 = 0;
    if ((unsigned __int64)*puVar1 != 0) {
      lVar4 = (unsigned __int64)*puVar1 - 1;
    }
    fn_8248F9F8(puVar1[7],lVar4,0);
  }
  return;
}

