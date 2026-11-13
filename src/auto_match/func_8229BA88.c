extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_82F4EC30();
extern int fn_82F52C20();


void fn_8229BA88(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x40);
  do {
    if (*piVar5 != 0) {
      uVar1 = fn_82F4EC30(uVar4);
      fn_82F52C20(uVar1,*piVar5,1);
      *piVar5 = 0;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 2;
  } while ((uVar4 & 0xffffffff) < 2);
  iVar2 = fn_8249ABC0();
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x50) != -1) {
    uVar3 = 0xffffffff;
    fn_8249D980(*(unsigned int *)(iVar2 + 0x110));
    *(unsigned int *)(param_1 + 0x50) = uVar3;
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    fn_8249DA08();
    *(unsigned int *)(param_1 + 0x54) = uVar3;
  }
  return;
}

