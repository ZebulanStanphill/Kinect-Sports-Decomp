extern int fn_8236F868();


void fn_823709B8(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x600);
  fVar1 = *(float *)(*(int *)((*(int **)**(unsigned int **)(param_1 + 8))[4] * 4 +
                             **(int **)**(unsigned int **)(param_1 + 8)) + 0x20);
  *(float *)((*(int *)(iVar2 + 0xc) + 8) * 4 + iVar2) = *(float *)(param_1 + 0x5e8);
  *(float *)((*(int *)(iVar2 + 0xc) + 4) * 4 + iVar2) = (float)(__int64)(int)fVar1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  fn_8236F868();
  *(float *)(param_1 + 0x288) = 0.0f;
  return;
}

