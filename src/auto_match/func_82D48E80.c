#define TBLr 0
extern unsigned int *auStack_250;
extern unsigned int *auStack_25e;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


char * fn_82D48E80(char *param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int (**pcVar2)();
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar4;
  int *piVar6;
  char *pcVar7;
  __int64 lVar8;
  int *piVar9;
  char cStack_260;
  char cStack_25f;
  unsigned char auStack_25e [1];
  unsigned char auStack_250 [592];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar9 = (int *)(param_2 + 0x10);
  lVar8 = -1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  pcVar2 = *(int (***)())(*(int *)(param_2 + 0x10) + 8);
  if (*(int *)(param_3 + 0x24) == 0) {
    lVar4 = (*pcVar2)(piVar9);
    iVar5 = (int)lVar4;
    while (iVar5 != -1) {
      piVar6 = (int *)(**(int (***)())(*piVar9 + 0x14))(piVar9,lVar4,auStack_250);
      (**(int (***)())(*piVar6 + 0x20))(&cStack_25f,piVar6,param_3,param_4);
      if (cStack_25f != '\0') {
        lVar8 = lVar4;
      }
      lVar4 = (**(int (***)())(*piVar9 + 0xc))(piVar9,lVar4);
      iVar5 = (int)lVar4;
    }
  }
  else {
    lVar4 = (*pcVar2)(piVar9);
    iVar5 = (int)lVar4;
    while (iVar5 != -1) {
      pcVar7 = (char *)(**(int (***)())**(unsigned int **)(param_3 + 0x24))
                                 (auStack_25e,*(unsigned int **)(param_3 + 0x24),param_3,param_2,
                                  piVar9,lVar4);
      if (*pcVar7 != '\0') {
        piVar6 = (int *)(**(int (***)())(*piVar9 + 0x14))(piVar9,lVar4,auStack_250);
        (**(int (***)())(*piVar6 + 0x20))(&cStack_260,piVar6,param_3,param_4);
        if (cStack_260 != '\0') {
          lVar8 = lVar4;
        }
      }
      lVar4 = (**(int (***)())(*piVar9 + 0xc))(piVar9,lVar4);
      iVar5 = (int)lVar4;
    }
  }
  iVar5 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar5 + -1;
  if ((int)lVar8 != -1) {
    *(int *)((iVar5 + 7) * 4 + param_4) = (int)lVar8;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  lVar4 = -lVar8 + -1;
  *param_1 = (char)lVar4 + (-(lVar4 == 0) - ((char)-lVar8 + -2));
  return param_1;
}

