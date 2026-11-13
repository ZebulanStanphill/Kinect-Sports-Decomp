extern int fn_825C45F0();


void fn_825C4408(double param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar3 = (int *)(param_2 + 0xc);
    lVar2 = 3;
    do {
      if (((int *)*piVar3 != (int *)0x0) &&
         ((iVar1 = *(int *)*piVar3, iVar1 == 0 ||
          (((double)*(float *)(iVar1 + 0x14) < param_1 && (*(int *)(iVar1 + 0x10) == 0)))))) {
        fn_825C45F0((unsigned __int64)*(unsigned int *)(param_2 + 0x18) + 0xb90);
        *piVar3 = 0;
      }
      lVar2 = lVar2 + -1;
      piVar3 = piVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}

