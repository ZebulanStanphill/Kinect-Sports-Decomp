#define TBLr 0
extern unsigned int *auStack_240;
extern unsigned int *auStack_270;
extern unsigned int iStack_244;
extern unsigned int iStack_254;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D49350(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int (**pcVar2)();
  int iVar4;
  unsigned __int64 uVar3;
  char *pcVar5;
  int *piVar6;
  unsigned char auStack_270 [16];
  int *piStack_260;
  unsigned int uStack_25c;
  unsigned int uStack_258;
  int iStack_254;
  int *piStack_250;
  unsigned int uStack_24c;
  unsigned int uStack_248;
  int iStack_244;
  unsigned char auStack_240 [528];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  piVar6 = (int *)(param_1 + 0x10);
  pcVar2 = *(int (***)())(*(int *)(param_1 + 0x10) + 8);
  if (*(int *)(param_2 + 0x24) == 0) {
    uVar3 = (*pcVar2)(piVar6);
    iVar4 = (int)uVar3;
    while (iVar4 != -1) {
      piStack_260 = (int *)(**(int (***)())(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
      uStack_258 = *(unsigned int *)(param_3 + 8);
      uStack_25c = (unsigned int)uVar3;
      iStack_254 = param_3;
      (**(int (***)())(*piStack_260 + 0x24))(piStack_260,param_2,&piStack_260,param_4);
      uVar3 = (**(int (***)())(*piVar6 + 0xc))(piVar6,uVar3);
      iVar4 = (int)uVar3;
    }
  }
  else {
    uVar3 = (*pcVar2)(piVar6);
    iVar4 = (int)uVar3;
    while (iVar4 != -1) {
      pcVar5 = (char *)(**(int (***)())**(unsigned int **)(param_2 + 0x24))
                                 (auStack_270,*(unsigned int **)(param_2 + 0x24),param_2,param_1,
                                  piVar6,uVar3);
      if (*pcVar5 != '\0') {
        piStack_250 = (int *)(**(int (***)())(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
        uStack_24c = (unsigned int)uVar3;
        uStack_248 = *(unsigned int *)(param_3 + 8);
        iStack_244 = param_3;
        (**(int (***)())(*piStack_250 + 0x24))(piStack_250,param_2,&piStack_250,param_4);
      }
      uVar3 = (**(int (***)())(*piVar6 + 0xc))(piVar6,uVar3);
      iVar4 = (int)uVar3;
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

