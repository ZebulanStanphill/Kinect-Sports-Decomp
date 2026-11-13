extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


void fn_82BD96A0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int auStack_40 [2];
  unsigned int uStack_38;
  unsigned int *puStack_34;
  unsigned int auStack_30 [6];
  
  uVar6 = 0;
  auStack_40[0] = 0;
  puStack_34 = auStack_40;
  uStack_38 = 1;
  if ((param_2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x4c)) {
    *(unsigned int *)(param_1 + 0x4c) = 0;
    uVar2 = lbl_821AAD20;
    uVar1 = lbl_82002AE0;
    puVar5 = auStack_30;
    puVar4 = (unsigned int *)(param_1 + 0x24);
    lVar7 = 4;
    do {
      if (*puVar4 < 0x10000) {
        if (((unsigned int)*(unsigned char *)(param_1 + 0x40) & 1 << (uVar6 & 0x3f)) != 0) goto LAB_82bd9730;
        *puVar5 = uVar1;
      }
      else {
LAB_82bd9730:
        *puVar5 = uVar2;
      }
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(int *)(param_1 + 0x4c) = (int)param_2;
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50);
    }
    else {
      auStack_30[0] = uVar1;
    }
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),&uStack_38);
    if (-1 < iVar3) {
      (**(int (***)())(**(int **)(param_1 + 0x48) + 0x40))
                (*(int **)(param_1 + 0x48),param_2,1,4,auStack_30,0);
    }
  }
  return;
}

