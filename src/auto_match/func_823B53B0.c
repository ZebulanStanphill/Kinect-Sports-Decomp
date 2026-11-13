typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_823B7080();
extern int fn_823B93C0();
extern int fn_823BB160();
extern int fn_82517D50();
extern int fn_82518120();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828AAF70();
extern int fn_828AD740();
extern int fn_82BA02A8();
extern int fn_82F56D40();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B5C70;
extern unsigned int lbl_821B5C88;
extern unsigned int lbl_821B5CA0;
extern unsigned int lbl_821B5DA0;
extern unsigned int lbl_821B5DE8;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_823B53B0(int *param_1)

{
  int (**pcVar1)();
  int iVar2;
  bool bVar3;
  int iVar6;
  char cVar8;
  unsigned int *puVar7;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int (**pcVar9)();
  int (***ppcVar10)();
  int (**pcVar11)();
  int (**apcStack_b0[2])();
  int (**pcStack_a8)();
  int *piStack_a4;
  unsigned char **ppuStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_90;
  int *piStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char **ppuStack_80;
  int (**pcStack_7c)();
  int *piStack_78;
  unsigned int uStack_74;
  unsigned char ***pppuStack_70;
  unsigned char **ppuStack_60;
  unsigned __int64 uStack_5c;
  unsigned char ***pppuStack_50;
  unsigned char auStack_40 [16];
  unsigned int *puStack_30;
  
  iVar6 = param_1[3];
  if (iVar6 == 0) {
    bVar3 = false;
    apcStack_b0[0] = *(int (***)())(*param_1 + 0x28);
    iVar6 = fn_82518120();
    fn_82F56D40(&pcStack_a8,iVar6,apcStack_b0);
    if ((ZEXT48(pcStack_a8) != (unsigned __int64)*(unsigned int *)(iVar6 + 4)) &&
       (ZEXT48(pcStack_a8) != 0xfffffffffffffff0)) {
      pcVar1 = *(int (***)())(*(int (***)())(pcStack_a8 + 0x14) + 4);
      pcVar9 = *(int (***)())(pcStack_a8 + 0x14);
      while (pcVar11 = pcVar1, pcVar11[0x69] == (int (*)())0x0) {
        if (*(unsigned int *)(pcVar11 + 0x10) < 4) {
          pcVar1 = *(int (***)())(pcVar11 + 8);
        }
        else {
          pcVar1 = *(int (***)())pcVar11;
          pcVar9 = pcVar11;
        }
      }
      pcVar1 = *(int (***)())(pcStack_a8 + 0x14);
      if ((pcVar9 == pcVar1) || (4 < *(unsigned int *)(pcVar9 + 0x10))) {
        ppcVar10 = apcStack_b0;
        apcStack_b0[0] = pcVar1;
      }
      else {
        ppcVar10 = &pcStack_a8;
      }
      pcStack_a8 = pcVar9;
      if (*ppcVar10 != pcVar1) {
        bVar3 = true;
      }
    }
    cVar8 = fn_828AD740(*param_1);
    if (bVar3) {
      if (cVar8 == '\0') {
        uVar5 = fn_828A12E8(*param_1);
        iVar6 = fn_8288F948(uVar5,4);
        if (*(int *)(iVar6 + 8) != 0) {
          fn_823B93C0(param_1 + 1,*(unsigned int *)(**(int **)(iVar6 + 4) + 0x14));
        }
      }
      else {
        puVar7 = (unsigned int *)fn_8265C9E0(0xa0);
        if (puVar7 == (unsigned int *)0x0) {
          puVar7 = (unsigned int *)0x0;
        }
        else {
          fn_82517D50(puVar7,*param_1,4);
          *puVar7 = &lbl_821B5DA0;
          puVar7[0x1a] = &lbl_821B5DE8;
          puVar7[0x20] = 1;
          puVar7[0x26] = 0;
        }
        fn_823B93C0(param_1 + 1,puVar7);
        lVar4 = (unsigned __int64)(unsigned int)param_1[3] - 0x68;
        if ((unsigned __int64)(unsigned int)param_1[3] == 0) {
          lVar4 = 0;
        }
        fn_828904D8(lVar4);
      }
    }
    if (param_1[3] != 0) {
      pcStack_a8 = fn_823B7080;
      uStack_74 = uStack_98;
      uStack_5c = CONCAT44(fn_823B7080,param_1);
      ppuStack_80 = &lbl_821B5CA0;
      pppuStack_70 = &ppuStack_80;
      ppuStack_60 = &lbl_821B5C88;
      pppuStack_50 = &ppuStack_60;
      pcStack_7c = fn_82BA02A8;
      piStack_a4 = param_1;
      piStack_8c = param_1;
      piStack_78 = param_1;
      puStack_30 = (unsigned int *)fn_8265C9E0(0x14);
      if (puStack_30 == (unsigned int *)0x0) {
        uStack_9c = 0;
        ppuStack_a0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_a0);
      }
      *puStack_30 = &lbl_821B5C70;
      puStack_30[1] = uStack_90;
      puStack_30[2] = piStack_8c;
      puStack_30[3] = uStack_88;
      puStack_30[4] = uStack_84;
      lVar4 = (unsigned __int64)(unsigned int)param_1[3] - 0x68;
      if ((unsigned __int64)(unsigned int)param_1[3] == 0) {
        lVar4 = 0;
      }
      fn_823BB160(lVar4,auStack_40,&ppuStack_60,&ppuStack_80);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x308) + 0x1c);
    lVar4 = (**(int (***)())(*(int *)(iVar6 + -0x68) + 8))(iVar6 + -0x68);
    fn_828AAF70(lVar4 + 0x48,iVar2 != 0);
    lVar4 = (unsigned __int64)(unsigned int)param_1[3] - 0x68;
    if ((unsigned __int64)(unsigned int)param_1[3] == 0) {
      lVar4 = 0;
    }
    fn_8288B760(lVar4);
  }
  return;
}

