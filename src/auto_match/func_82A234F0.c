extern unsigned int *auStack_70;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A1E228();
extern int fn_82A1FBD8();
extern int fn_82A207C8();
extern int fn_82A21110();
extern int fn_82A21458();
extern int fn_82A21B98();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219C28;


int fn_82A234F0(int param_1,unsigned char param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  int iVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned __int64 auStack_70 [14];
  
  RtlEnterCriticalSection();
  uVar8 = 0;
  do {
    iVar9 = *(int *)(param_1 + 0x20);
    if (iVar9 != 0) {
      iVar10 = iVar9 << 2;
      do {
        iVar10 = iVar10 + -4;
        iVar9 = iVar9 + -1;
        iVar5 = fn_82A21B98(*(unsigned int *)(*(int *)(param_1 + 0x1c) + iVar10),param_3,param_4);
        if (iVar5 != 0) {
          *(unsigned char *)(iVar5 + 0x19) = param_2;
          fn_82A1E228(auStack_70);
          uVar2 = lbl_8315D2F0;
          *(unsigned char *)(iVar5 + 0x1a) = 1;
          *(int *)(iVar5 + 0x10) = (int)(auStack_70[0] / 10000000) - (int)uVar2;
          fn_82A1FBD8(param_1,iVar5);
          fn_82A21458();
          *(unsigned int *)(param_1 + 0x38) = 1;
          goto LAB_82a236b0;
        }
      } while (iVar9 != 0);
    }
    uVar7 = *(unsigned int *)(param_1 + 0x24);
    if ((uVar7 <= *(unsigned int *)(param_1 + 0x20)) && (uVar11 = uVar7 + 8, uVar7 < uVar11)) {
      lVar3 = fn_8265C940(uVar11 * 4,lbl_8315D2EC);
      if (lVar3 == 0) break;
      fn_82A1DDC0(lVar3,*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) << 2);
      fn_8265C990(*(unsigned int *)(param_1 + 0x1c),lbl_8315D2EC);
      *(int *)(param_1 + 0x1c) = (int)lVar3;
      *(unsigned int *)(param_1 + 0x24) = uVar11;
    }
    uVar4 = fn_8265C940(0x1000,lbl_8315D2EC);
    if ((uVar4 & 0xffffffff) == 0) break;
    uVar6 = fn_82A207C8(uVar4,0x1000,0x24,1);
    *(unsigned int *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x1c)) = uVar6;
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = (int)lVar3;
    if (lVar3 != 0) {
      iVar9 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        puVar1 = *(unsigned short **)(*(int *)(param_1 + 0x1c) + iVar9);
        iVar9 = iVar9 + 4;
        *puVar1 = (short)uVar7;
        puVar1[1] = (short)*(unsigned int *)(param_1 + 0x20);
        uVar7 = uVar11;
      } while (uVar11 < *(unsigned int *)(param_1 + 0x20));
    }
    RtlLeaveCriticalSection(param_1);
    *(unsigned int *)(param_1 + 0x38) = 1;
    fn_82A21110(param_1,lbl_83219C28);
    RtlEnterCriticalSection(param_1);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar5 = 0;
LAB_82a236b0:
  RtlLeaveCriticalSection(param_1);
  return iVar5;
}

