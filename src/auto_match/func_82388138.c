extern unsigned int iStack_c;


void fn_82388138(int param_1)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  unsigned int uVar4;
  int iStack_c;
  
  iVar3 = *(int *)(param_1 + 8);
  fVar2 = *(float *)(*(int *)((*(int **)**(unsigned int **)(iVar3 + 8))[4] * 4 +
                             **(int **)**(unsigned int **)(iVar3 + 8)) + 0x20);
  *(int *)(iVar3 + 0xa80) = *(int *)(iVar3 + 0xa80) + 1;
  uVar1 = (unsigned int)fVar2;
  uVar4 = *(unsigned int *)(iVar3 + 0xa94);
  if (*(unsigned int *)(iVar3 + 0xa90) < uVar1) {
    *(unsigned int *)(iVar3 + 0xa90) = uVar1;
    *(unsigned int *)
     (*(int *)((*(int **)**(unsigned int **)(iVar3 + 8))[4] * 4 +
              **(int **)**(unsigned int **)(iVar3 + 8)) + 0x1c) = 1;
  }
  if ((uVar1 != 0) && ((uVar1 < uVar4 || (uVar4 == 0)))) {
    *(unsigned int *)(iVar3 + 0xa94) = uVar1;
  }
  iStack_c = (int)(__int64)*(float *)(iVar3 + 0x208);
  *(int *)(iVar3 + 0xa88) = iStack_c + *(int *)(iVar3 + 0xa88);
  return;
}

