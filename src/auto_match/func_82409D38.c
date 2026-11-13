extern int fn_82359C18();
extern int fn_82409F90();
extern int fn_824557C0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821B7F24;


void fn_82409D38(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char **ppuStack_30;
  int iStack_2c;
  unsigned char ***pppuStack_20;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xe0) == 0) {
    fn_82409F90(param_1,4);
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(unsigned int *)(iVar1 + 0x6b0);
    if (*(int *)(iVar1 + 0x710) == 0) {
      uVar3 = uVar3 | 1;
    }
    else {
      uVar3 = uVar3 | 4;
    }
    *(unsigned int *)(iVar1 + 0x6b0) = uVar3;
    *(unsigned int *)(iVar1 + 0x710) = 1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x70);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) == 0)) {
      pppuStack_20 = &ppuStack_30;
      ppuStack_30 = &lbl_821B7F24;
      iStack_2c = param_1;
      fn_824557C0((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x7f0,&ppuStack_30);
      fn_82359C18(&ppuStack_30);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    fn_82409F90(param_1,uVar2);
  }
  return;
}

