extern int fn_822635D8();


void fn_82376508(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x600);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = (int *)((int *)**(int **)(iVar2 + 8))[1];
    piVar4 = *(int **)**(int **)(iVar2 + 8);
    iVar5 = piVar4[4] * 4;
    fn_822635D8((double)*(float *)(iVar2 + 0x5e8),*(unsigned int *)(iVar2 + 0x5e0),
                    (int)*(float *)(*(int *)(iVar5 + *piVar4) + 0x20),
                    (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20),iVar5,
                    *(unsigned int *)(iVar2 + 0x5ec),*(unsigned int *)(iVar2 + 0x5f0));
    *(int *)(iVar2 + 0x5e0) = *(int *)(iVar2 + 0x5e0) + 1;
    *(unsigned int *)(iVar1 + 8) = 0;
  }
  return;
}

