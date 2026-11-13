extern int fn_82279398();
extern int fn_8227E4B0();


void fn_82279CA0(int param_1,unsigned param_2)

{
  unsigned int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  
  iVar1 = *(unsigned int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    unsigned value = (unsigned char)param_2;
    int off = value == 0;
    piVar5 = *(int **)(iVar1 + 0xc);
    piVar2 = *(int **)(iVar1 + 0x10);
    for (; piVar5 != piVar2; piVar5 = piVar5 + 1) {
      fn_8227E4B0(iVar1,*(unsigned int *)(*piVar5 + 0x14),off,0);
    }
    puVar4 = *(unsigned int **)(param_1 + 0x10);
    for (puVar3 = (unsigned int *)*puVar4; puVar3 != puVar4; puVar3 = (unsigned int *)*puVar3) {
      fn_82279398(puVar3[2],value);
      puVar4 = *(unsigned int **)(param_1 + 0x10);
    }
  }
  return;
}

