extern int fn_8255E530();


int fn_822B6BB8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x4c);
  if (iVar3 == 0) goto LAB_822b6c58;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x8c0);
  if ((iVar1 == 0) || (*(int *)((*(int *)(iVar3 + 0x44) + 0x20) * 4 + iVar1) == 0))
  goto LAB_822b6c58;
  if (iVar1 == 0) {
LAB_822b6c3c:
    iVar3 = -1;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x1b4);
    if (piVar2 == (int *)0x0) goto LAB_822b6c3c;
    iVar3 = (**(int (***)())(*piVar2 + 0x14))(piVar2,param_3);
  }
  if (-1 < iVar3) {
                    /* WARNING: Subroutine does not return */
    fn_8255E530(param_1,*(unsigned int *)(param_2 + 0x14));
  }
LAB_822b6c58:
  puVar4 = (unsigned __int64 *)(param_1 + -8);
  puVar5 = (unsigned __int64 *)0x8329eac8;
  lVar6 = 8;
  do {
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}

