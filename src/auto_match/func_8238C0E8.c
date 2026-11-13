extern int fn_822A1830();
extern int fn_822ABA88();
extern int fn_824C97F0();


unsigned __int64 fn_8238C0E8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar6 = *(int **)(*(int *)(iVar1 + 0x1f0) * 4 + **(int **)(iVar1 + 8));
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6),*(unsigned int *)(iVar1 + 500));
  if (*(int *)(iVar4 + 0x24) == 0) {
    return 0;
  }
  uVar2 = *(unsigned int *)(iVar4 + 600);
  if (uVar2 < 3) {
    uVar5 = 3;
  }
  else if (uVar2 == 0xb) {
    if (*(int *)(iVar1 + 0x21c) == 0) {
      return 0;
    }
    uVar5 = 0;
  }
  else if (uVar2 == 0xc) {
    if (*(int *)(iVar4 + 0x26c) == 0) {
      return 0;
    }
    uVar5 = 2;
  }
  else {
    if (uVar2 != 0x10) {
      return 0;
    }
    uVar5 = 1;
  }
  fn_822A1830(*(unsigned int *)(iVar1 + 0xd4),iVar4 + 0x30,uVar5);
  piVar3 = (int *)(*(unsigned int **)(iVar1 + 0xa8))[1];
  for (piVar6 = (int *)**(unsigned int **)(iVar1 + 0xa8); piVar6 != piVar3; piVar6 = piVar6 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar6 + 0x28),0xffffffff821b4420);
  }
  return 1;
}

