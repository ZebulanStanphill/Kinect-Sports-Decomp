extern int fn_82522ED8(void *);


unsigned __int64 fn_8262CC58(int param_1,int param_2)

{
  int iVar1;
  unsigned int iVar2;
  int *piVar3;
  
  for (iVar1 = *(int *)(param_1 + 0x304); (unsigned int)iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar3 = *(int **)(iVar1 + 8);
    if (*piVar3 == 0x6c) goto LAB_8262cc90;
  }
  piVar3 = (int *)0x0;
LAB_8262cc90:
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3[2] == *(int *)(param_2 + 0xc)) {
        if (*(float *)(param_2 + 0x10) != 0.0f) {
          return 0;
        }
        { unsigned *node = (unsigned *)(piVar3-2);
          if (node[0]) *(unsigned *)(node[0]+4)=node[1];
          if (node[1]) *(unsigned *)node[1]=node[0];
          node[0]=0; node[1]=0;
          fn_82522ED8(node);
        }
        return 1;
      }
      iVar1 = *piVar3;
      for (iVar2 = piVar3[-1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        piVar3 = *(int **)(iVar2 + 8);
        if (*piVar3 == iVar1) goto LAB_8262ccd4;
      }
      piVar3 = (int *)0x0;
LAB_8262ccd4:;} while (piVar3 != (int *)0x0);
  }
  return 0;
}

