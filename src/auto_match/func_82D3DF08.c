#define TBLr 0
extern unsigned int *auStack_80;
extern unsigned int iStack_54;
extern unsigned int iStack_64;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_82D3DF08(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  char *pcVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_80 [16];
  int *piStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  int *piStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  uVar5 = 0;
  if (*(int *)(param_2 + 0x24) == 0) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar3 = 0;
      do {
        if ((0xff < (uVar5 & 0xffffffff)) ||
           ((1 << ((unsigned int)uVar5 & 0x1f) &
            *(unsigned int *)(((int)((uVar5 & 0xffffffff) >> 5) + 0x14) * 4 + param_1)) != 0)) {
          uStack_68 = *(unsigned int *)(param_3 + 8);
          piStack_70 = *(int **)(*(int *)(param_1 + 0x18) + iVar3);
          uStack_6c = (unsigned int)uVar5;
          iStack_64 = param_3;
          (**(int (***)())(*piStack_70 + 0x24))(piStack_70,param_2,&piStack_70,param_4);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x10;
      } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      if (((0xff < (uVar5 & 0xffffffff)) ||
          ((1 << ((unsigned int)uVar5 & 0x1f) &
           *(unsigned int *)(((int)((uVar5 & 0xffffffff) >> 5) + 0x14) * 4 + param_1)) != 0)) &&
         (pcVar4 = (char *)(**(int (***)())**(unsigned int **)(param_2 + 0x24))
                                     (auStack_80,*(unsigned int **)(param_2 + 0x24),param_2,param_1,
                                      param_1 + 0x10,uVar5), *pcVar4 != '\0')) {
        uStack_58 = *(unsigned int *)(param_3 + 8);
        piStack_60 = *(int **)(*(int *)(param_1 + 0x18) + iVar3);
        uStack_5c = (unsigned int)uVar5;
        iStack_54 = param_3;
        (**(int (***)())(*piStack_60 + 0x24))(piStack_60,param_2,&piStack_60,param_4);
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

