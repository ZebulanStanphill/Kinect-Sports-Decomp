#define TBLr 0
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138A3C;
extern unsigned int lbl_82138FF8;
extern unsigned int lbl_8323B4A0;


void fn_82D6E4A0(int param_1,int *param_2,int *param_3,int *param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char **ppuStack_70;
  char cStack_6c;
  int aiStack_60 [3];
  int *piStack_54;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "LthkpBvAgent";
    puVar1[3] = "StcheckBvShape";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 4;
  }
  aiStack_60[2] = param_2[2];
  iVar3 = *param_2;
  aiStack_60[0] = *(int *)(iVar3 + 0x10);
  aiStack_60[1] = 0xffffffff;
  ppuStack_70 = &lbl_82138FF8;
  cStack_6c = '\0';
  piStack_54 = param_2;
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0xc))
            (*(int **)(param_1 + 0xc),aiStack_60,param_3,param_4,&ppuStack_70);
  if (cStack_6c != '\0') {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = "Stchild";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
    }
    aiStack_60[0] = *(int *)(iVar3 + 0x18);
    aiStack_60[1] = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = *param_4;
      iVar4 = iVar3 + 0x5a0;
      if (param_4[5] == 0) {
        iVar4 = iVar3 + 0x1a0;
      }
      uVar5 = (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(aiStack_60[0] + 0xc) * 0x20 + iVar4 +
                                          *(int *)(*param_3 + 0xc)) * 0x14 + iVar3 + 0x9a0))
                        (aiStack_60,param_3,param_4,*(unsigned int *)(param_1 + 8));
      *(unsigned int *)(param_1 + 0x10) = uVar5;
    }
    (**(int (***)())(**(int **)(param_1 + 0x10) + 0x10))
              (*(int **)(param_1 + 0x10),aiStack_60,param_3,param_4,param_5);
  }
  ppuStack_70 = &lbl_82138A3C;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

