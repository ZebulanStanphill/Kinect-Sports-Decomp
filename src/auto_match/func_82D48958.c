#define TBLr 0
extern unsigned int *auStack_250;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821386D0;
extern unsigned int lbl_8323B4A0;


char * fn_82D48958(char *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar5;
  __int64 lVar4;
  int *piVar6;
  __int64 lVar7;
  int *piVar8;
  char acStack_260 [16];
  unsigned char auStack_250 [512];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_821386D0;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar8 = (int *)(param_2 + 0x14);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  lVar7 = -1;
  lVar4 = (**(int (***)())(*piVar8 + 8))(piVar8);
  iVar5 = (int)lVar4;
  while (iVar5 != -1) {
    piVar6 = (int *)(**(int (***)())(*piVar8 + 0x14))(piVar8,lVar4,auStack_250);
    (**(int (***)())(*piVar6 + 0x20))(acStack_260,piVar6,param_3,param_4);
    if (acStack_260[0] != '\0') {
      lVar7 = lVar4;
    }
    lVar4 = (**(int (***)())(*piVar8 + 0xc))(piVar8,lVar4);
    iVar5 = (int)lVar4;
  }
  iVar5 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar5 + -1;
  if ((int)lVar7 != -1) {
    *(int *)((iVar5 + 7) * 4 + param_4) = (int)lVar7;
  }
  uVar3 = lbl_8323B4A0;
  lVar4 = -lVar7 + -1;
  *param_1 = (char)lVar4 - ((char)-lVar7 + -2 + (lVar4 == 0));
  iVar5 = KeTlsGetValue(uVar3);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  return param_1;
}

