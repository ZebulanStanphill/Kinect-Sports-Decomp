extern int fn_8227EB10();


void fn_8227E950(int *param_1,int *param_2,unsigned param_3)

{
  int iVar1;
  float uVar2;
  int *piVar3;
  
  iVar1 = param_1[0xb];
  if (iVar1 != -1) {
    if ((unsigned)iVar1 != param_3) {
      iVar1 = *(int *)(iVar1 * 4 + param_1[3]);
      if (*(int (***)())(iVar1 + 4) != (int (**)())0x0) {
        (*(int (**)())(iVar1 + 4))(*(unsigned int *)(iVar1 + 0x14),*(unsigned int *)(iVar1 + 0xc),0);
      }
      piVar3 = *(int **)(iVar1 + 0x10);
      if (piVar3 != (int *)0x0) {
        (*(int (**)())(*piVar3 + 4))(piVar3,*(unsigned int *)(iVar1 + 0x14),0);
      }
      *(unsigned int *)(iVar1 + 0x6c) = *(unsigned int *)(iVar1 + 0x6c) & 0xfffffffb;
    }
    fn_8227EB10(param_1,0);

    if ((param_2 != (int *)0x0) && (piVar3 = (int *)param_2[0x13], piVar3 != (int *)param_2[0x14]))
    {
      uVar2=0.0f;
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        *(float *)((*param_2 + 0xf) * 4 + iVar1) = uVar2;
      } while (piVar3 != (int *)param_2[0x14]);
    }
    (*(int (**)())(*param_1 + 0x18))(param_1);
  }
  param_1[0xb] = param_3;
  return;
}

