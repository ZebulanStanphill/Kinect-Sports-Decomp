extern int fn_82F63108();
extern unsigned int iStack_3c;
extern unsigned int lbl_821AFAF0;
extern unsigned int uStack_41;


void fn_82320B00(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned char uStack_41;
  unsigned char **ppuStack_40;
  int iStack_3c;
  unsigned char ***pppuStack_30;
  
  if ((param_2 != 0) || (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x20) + 0x1d0) != 0)) {
    uVar2 = 1;
  }
  *(unsigned int *)(param_1 + 0x2c) = uVar2;
  if (*(int *)(param_1 + 0x28) != 2) {
    pppuStack_30 = &ppuStack_40;
    ppuStack_40 = &lbl_821AFAF0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x8c0);
    uVar1 = *(unsigned int *)(iVar3 + 0x138);
    iStack_3c = param_1;
    if (uVar1 != 0) {
      uVar5 = 0;
      puVar4 = (unsigned int *)(*(int *)(iVar3 + 0x130) + -4);
      do {
        if (pppuStack_30 == (unsigned char ***)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        puVar4 = puVar4 + 1;
        (*(int (**)())(*pppuStack_30)[1])(pppuStack_30,*puVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      if (pppuStack_30 == (unsigned char ***)0x0) {
        return;
      }
    }
    iVar3 = (int)&ppuStack_40 + -(int)pppuStack_30;
    (*(int (**)())(*pppuStack_30)[3])
              (pppuStack_30,iVar3 - (int)(&uStack_41 + (unsigned int)(iVar3 == 0) + -(int)pppuStack_30));
  }
  return;
}

