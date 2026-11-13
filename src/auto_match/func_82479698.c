extern unsigned int *auStack_30;
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_822847A8();
extern unsigned int iStack_4c;
extern unsigned int lbl_821BD03C;
extern unsigned int uStack_20;


void fn_82479698(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char **ppuStack_50;
  int iStack_4c;
  unsigned char ***pppuStack_40;
  unsigned char auStack_30 [16];
  unsigned int uStack_20;
  
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  iVar1 = *(int *)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x38) = 1;
  if (*(int *)(iVar1 + 0x10) == 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      fn_822819E0(iVar1,param_1 + 0x30);
    }
  }
  else {
    fn_82281868(iVar1,param_1 + 0x30,0);
  }
  pppuStack_40 = &ppuStack_50;
  uStack_20 = 0;
  ppuStack_50 = &lbl_821BD03C;
  iStack_4c = param_1 + 0x10;
  uVar2 = fn_822847A8(0,&ppuStack_50,0,auStack_30,1,1);
  *(unsigned int *)(param_1 + 100) = uVar2;
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}

