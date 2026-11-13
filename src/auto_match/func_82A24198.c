extern unsigned int *auStack_130;
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A23EE8();
extern unsigned int iStack_140;
extern unsigned int lbl_8315D2EC;
extern unsigned int *lbl_83219C90;
extern unsigned int lbl_83219C9C;


unsigned __int64 fn_82A24198(void)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int *puVar8;
  int iStack_140;
  unsigned char auStack_130 [304];
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if ((int **)lbl_83219C90 != &lbl_83219C90) {
    do {
      piVar4 = lbl_83219C90;
      uVar3 = lbl_8315D2EC;
      uVar6 = (unsigned __int64)lbl_83219C9C;
      if (uVar6 < *(unsigned short *)(lbl_83219C90[2] + 8)) {
        iVar7 = lbl_83219C90[2];
        puVar2 = (unsigned int *)((int)((uVar6 - *(unsigned short *)(iVar7 + 0xc) & 0xffffffff) << 2) +
                          (unsigned int)*(unsigned short *)(iVar7 + 4) + iVar7);
        lbl_83219C9C = lbl_83219C9C + 1;
        iStack_140 = *(unsigned char *)((int)puVar2 + 1) - 1;
        puVar8 = (unsigned int *)
                 ((unsigned int)*(unsigned char *)((int)((uVar6 - *(unsigned short *)(iVar7 + 0xc) & 0xffffffff) << 2) +
                                  (unsigned int)*(unsigned short *)(iVar7 + 4) + iVar7) *
                  (*(unsigned int *)(iVar7 + 4) & 0xffff) + iVar7 + 0x14);
        iVar7 = (*puVar2 & 0xffff) + iVar7 + 1;
        goto LAB_82a24284;
      }
      lbl_83219C9C = 0;
      iVar7 = *lbl_83219C90;
      piVar1 = (int *)lbl_83219C90[1];
      *piVar1 = iVar7;
      *(int **)(iVar7 + 4) = piVar1;
      fn_8265C990(piVar4,uVar3);
    } while ((int **)lbl_83219C90 != &lbl_83219C90);
  }
  puVar8 = (unsigned int *)0x0;
  iVar7 = iStack_140;
LAB_82a24284:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if (puVar8 == (unsigned int *)0x0) {
    uVar5 = 0;
  }
  else {
    if (iStack_140 + 1U < 0x105) {
      fn_82A1DDC0(auStack_130,iVar7,iStack_140);
      auStack_130[iStack_140] = 0;
      fn_82A23EE8(*puVar8,auStack_130);
    }
    uVar5 = 1;
  }
  return uVar5;
}

