#define TBLr 0
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82139008;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_54;
extern unsigned int uStack_7c;


void fn_82D6E0D8(int param_1,int *param_2,int *param_3,int *param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int aiStack_90 [3];
  int *piStack_84;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  char cStack_78;
  unsigned int uStack_54;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "LthkpBvAgent";
    puVar1[3] = "StcheckBvShape";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 4;
  }
  aiStack_90[2] = param_2[2];
  iVar3 = *param_2;
  aiStack_90[0] = *(int *)(iVar3 + 0x10);
  uStack_54 = lbl_82134508;
  uStack_7c = lbl_82134508;
  aiStack_90[1] = 0xffffffff;
  ppuStack_80 = &lbl_82139008;
  cStack_78 = '\0';
  piStack_84 = param_2;
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0x14))
            (*(int **)(param_1 + 0xc),aiStack_90,param_3,param_4,&ppuStack_80,&ppuStack_80);
  if (cStack_78 != '\0') {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = "Stchild";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
    }
    aiStack_90[0] = *(int *)(iVar3 + 0x18);
    aiStack_90[1] = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = *param_4;
      iVar4 = iVar3 + 0x5a0;
      if (param_4[5] == 0) {
        iVar4 = iVar3 + 0x1a0;
      }
      uVar5 = (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(aiStack_90[0] + 0xc) * 0x20 + iVar4 +
                                          *(int *)(*param_3 + 0xc)) * 0x14 + iVar3 + 0x9a0))
                        (aiStack_90,param_3,param_4,*(unsigned int *)(param_1 + 8));
      *(unsigned int *)(param_1 + 0x10) = uVar5;
    }
    (**(int (***)())(**(int **)(param_1 + 0x10) + 0x14))
              (*(int **)(param_1 + 0x10),aiStack_90,param_3,param_4,param_5,param_6);
  }
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

