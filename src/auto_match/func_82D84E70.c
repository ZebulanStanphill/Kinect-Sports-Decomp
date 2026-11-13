#define TBLr 0
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82D808D0();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;


void fn_82D84E70(int param_1,int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  unsigned char auStack_70 [4];
  int *piStack_6c;
  unsigned char uStack_68;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  int iStack_54;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(unsigned int *)(param_1 + 0x94) = 1;
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = "LtUpdateFilterOnPhantom";
      puVar1[3] = "Stbroadphase";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 4;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x338);
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    uStack_58 = 0x80000000;
    piVar5 = (int *)fn_82CE5410();
    uStack_58 = uVar2 | 0x80000000;
    stack_pair_60.first = *piVar5;
    *piVar5 = (uVar2 * 8 + 0x7f & 0xffffff80) + stack_pair_60.first;
    iStack_54 = stack_pair_60.first;
    (**(int (***)())(**(int **)(param_1 + 0x58) + 0x48))
              (*(int **)(param_1 + 0x58),param_2 + 9,&stack_pair_60.first);
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = "StUpdateOverlaps";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
    }
    iVar4 = 0;
    if (0 < (int)stack_pair_60.second) {
      iVar8 = 0;
      iVar6 = stack_pair_60.first;
      do {
        piVar5 = *(int **)(iVar6 + 4);
        if (piVar5 != param_2 + 9) {
          fn_82D808D0(param_2,(int)*(char *)((int)piVar5 + 5) + (int)piVar5,
                            *(unsigned int *)(param_1 + 0x7c));
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 8;
        iVar6 = iVar8 + stack_pair_60.first;
      } while (iVar4 < (int)stack_pair_60.second);
    }
    if (param_3 != 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar4 + 4);
      if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar1 = "StcollectionFilter";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
      }
      (**(int (***)())(*param_2 + 0x30))(param_2);
    }
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar7;
    if ((lVar7 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(unsigned int *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(unsigned int *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
      }
    }
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    iVar4 = iStack_54;
    puVar1 = *(unsigned int **)(iVar6 + 4);
    if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar1 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
    }
    stack_pair_60.second = -(unsigned int)(stack_pair_60.first != iStack_54) & stack_pair_60.second;
    piVar5 = (int *)fn_82CE5410();
    *piVar5 = iVar4;
    iVar4 = fn_82CE5410();
    stack_pair_60.second = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
    }
  }
  else {
    uStack_68 = (unsigned char)param_3;
    auStack_70[0] = 0x14;
    piStack_6c = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_70);
  }
  return;
}

