extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_824BF8A8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_82460D98(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  struct { unsigned int first; int second; } stack_pair_40;

  
  iVar4 = 1;
  switch(*(unsigned int *)(param_1 + 0x54)) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar4 = 0;
    break;
  case 1:
  case 3:
  case 5:
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0xb4) != iVar4) {
    iVar2 = fn_8249ABC0();
    iVar2 = *(int *)(iVar2 + 0x110);
    if (*(int *)(param_1 + 0xbc) != -1) {
      iVar2 = fn_8249D980();
      *(unsigned int *)(param_1 + 0xbc) = 0xffffffff;
    }
    if (iVar4 == 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
      stack_pair_40.first = 0;
      *(int *)(iVar2 + 0x20) = iVar1 + 1;
      stack_pair_40.second = iVar1;
      fn_824BF8A8(iVar2,&stack_pair_40.first);
      *(int *)(param_1 + 0xbc) = iVar1;
    }
    *(int *)(param_1 + 0xb4) = iVar4;
  }
  if (*(int *)(param_1 + 0xb8) != iVar4) {
    iVar2 = fn_8249ABC0();
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x110);
    if (*(int *)(param_1 + 0xc0) != -1) {
      fn_8249DA08(uVar3);
      *(unsigned int *)(param_1 + 0xc0) = 0xffffffff;
    }
    if (iVar4 == 0) {
      iVar2 = *(int *)((int)uVar3 + 0x20);
      stack_pair_40.first = 0;
      *(int *)((int)uVar3 + 0x20) = iVar2 + 1;
      stack_pair_40.second = iVar2;
      fn_824BF8A8(uVar3 + 0x10,&stack_pair_40.first);
      *(int *)(param_1 + 0xc0) = iVar2;
    }
    *(int *)(param_1 + 0xb8) = iVar4;
  }
  return;
}

