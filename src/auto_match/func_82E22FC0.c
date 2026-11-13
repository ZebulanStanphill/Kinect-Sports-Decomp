extern unsigned int *auStack_2c;
extern int fn_82A1F2F8();
extern int fn_82E23670();
extern int fn_82E23748();
extern int fn_82E238E0();
extern int fn_82E23918();
extern int fn_82E23A10();
extern unsigned int iStack_30;


void fn_82E22FC0(int param_1)

{
  int iVar2;
  unsigned int uVar1;
  unsigned int iStack_30;
  unsigned char auStack_2c [4];
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar2 = fn_82A1F2F8();
    if ((*(unsigned int *)(param_1 + 0x158) != 0) &&
       ((unsigned int)(iVar2 - *(int *)(param_1 + 0x154)) > *(unsigned int *)(param_1 + 0x158))) {
      *(unsigned int *)(param_1 + 0x17c) = 1;
    }
    if (*(int *)(param_1 + 0x17c) == 0) {
      fn_82E23A10(param_1 + 0x30,*(unsigned int *)(param_1 + 0x180),
                      *(unsigned int *)(param_1 + 0x150) + 9,auStack_2c,0,0);
      *(unsigned int *)(param_1 + 0x180) = 0;
    }
    else {
      iVar2 = param_1 + 0x30;
      iStack_30 = 0;
      fn_82E23918(iVar2);
      uVar1 = fn_82E23748(iVar2,*(unsigned int *)(param_1 + 0x148),
                              *(unsigned int *)(param_1 + 0x14c),&iStack_30);
      fn_82E238E0(iVar2);
      if (iStack_30 == 0) {
        uVar1 = 0xe8;
      }
      *(unsigned int *)(param_1 + 0x17c) = 0;
      *(unsigned int *)(param_1 + 0x180) = 0;
      *(unsigned int *)(param_1 + 0x178) = 0;
      fn_82E23670(param_1 + 0x168,uVar1,uVar1,iStack_30);
    }
  }
  return;
}

