typedef unsigned char bool;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8273D588();
extern int fn_827A5378();
extern int fn_827A70E0();
extern int fn_827A74A0();
extern int fn_827A7548();
extern int fn_827A7C28();
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_3c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827A8168(int param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  short *psVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  int iVar12;
  char in_RESERVE;
  unsigned char bVar13;
  int iStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [2];
  int iStack_30;
  int *piStack_2c;
  
  fn_8268B330(&uStack_3c);
  uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
  uVar11 = 0;
  if ((uVar7 == 0) || (**(short **)(param_2 + 4) != 0x2e)) {
    psVar6 = *(short **)(param_2 + 4);
  }
  else {
    uVar7 = uVar7 - 1;
    psVar6 = *(short **)(param_2 + 4) + 1;
    uVar11 = 1;
  }
  fn_8268B508(&uStack_3c,psVar6,uVar7);
  iVar2 = *(int *)(param_1 + 4);
  iVar12 = iVar2 + 4;
  fn_827A5378(iVar12,uVar11,&uStack_3c);
  uVar3 = *(unsigned int *)(param_1 + 4);
  iVar5 = fn_827A7548(uVar3,iVar12);
  piVar10 = (int *)(-(unsigned int)(iVar5 != 0) & iVar5 + 0xcU);
  bVar13 = (piVar10 == (int *)0x0) << 1;
  if (piVar10 == (int *)0x0) {
    iStack_40 = 0;
  }
  else {
    iStack_40 = *piVar10;
  }
  if (iStack_40 == 0) {
    uVar11 = fn_8267BF50(uVar3);
    uVar7 = fn_8267B890(uVar11,0x44,0);
    bVar1 = (uVar7 & 0xffffffff) == 0;
    bVar13 = bVar1 << 1;
    if (bVar1) {
      iStack_40 = 0;
    }
    else {
      iStack_40 = fn_827A70E0(uVar7,uVar11);
    }
    piStack_2c = aiStack_38;
    aiStack_38[0] = iStack_40;
    iStack_30 = iVar12;
    fn_827A7C28(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 4),&iStack_30,
                  *(unsigned int *)(iVar2 + 0xc));
  }
  else {
    fn_827A74A0();
  }
  fn_8273D588(param_3,&iStack_40);
  lVar8 = ((unsigned __int64)uStack_3c & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar8;
    uVar7 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
      *puVar9 = uVar4;
      bVar13 = 2;
    }
  } while (!(bool)(bVar13 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return;
}

