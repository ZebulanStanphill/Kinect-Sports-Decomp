#define TBLr 0
extern unsigned int *auStack_5e;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


char * fn_82D3DCD8(char *param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char *pcVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  char cStack_60;
  char cStack_5f;
  unsigned char auStack_5e [1];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  uVar8 = 0;
  uVar7 = 0xffffffffffffffff;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  if (*(int *)(param_3 + 0x24) == 0) {
    if (0 < *(int *)(param_2 + 0x1c)) {
      iVar4 = 0;
      do {
        if (((0xff < (uVar8 & 0xffffffff)) ||
            ((1 << ((unsigned int)uVar8 & 0x1f) &
             *(unsigned int *)(((int)((uVar8 & 0xffffffff) >> 5) + 0x14) * 4 + param_2)) != 0)) &&
           (piVar2 = *(int **)(*(int *)(param_2 + 0x18) + iVar4),
           (**(int (***)())(*piVar2 + 0x20))(&cStack_60,piVar2,param_3,param_4), cStack_60 != '\0')) {
          uVar7 = uVar8;
        }
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 0x10;
      } while ((int)uVar8 < *(int *)(param_2 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_2 + 0x1c)) {
    iVar4 = 0;
    do {
      if ((((0xff < (uVar8 & 0xffffffff)) ||
           ((1 << ((unsigned int)uVar8 & 0x1f) &
            *(unsigned int *)(((int)((uVar8 & 0xffffffff) >> 5) + 0x14) * 4 + param_2)) != 0)) &&
          (pcVar5 = (char *)(**(int (***)())**(unsigned int **)(param_3 + 0x24))
                                      (auStack_5e,*(unsigned int **)(param_3 + 0x24),param_3,param_2,
                                       param_2 + 0x10,uVar8), *pcVar5 != '\0')) &&
         (piVar2 = *(int **)(*(int *)(param_2 + 0x18) + iVar4),
         (**(int (***)())(*piVar2 + 0x20))(&cStack_5f,piVar2,param_3,param_4), cStack_5f != '\0')) {
        uVar7 = uVar8;
      }
      uVar8 = uVar8 + 1;
      iVar4 = iVar4 + 0x10;
    } while ((int)uVar8 < *(int *)(param_2 + 0x1c));
  }
  iVar4 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar4 + -1;
  if ((int)uVar7 != -1) {
    *(int *)((iVar4 + 7) * 4 + param_4) = (int)uVar7;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  lVar6 = -uVar7 + -1;
  *param_1 = (char)lVar6 + (-(lVar6 == 0) - ((char)-uVar7 + -2));
  return param_1;
}

