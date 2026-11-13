extern int fn_8305F2E8();
extern int fn_83065FF0();
extern unsigned int lbl_83265080;


unsigned __int64 fn_83065E50(void)

{
  int *piVar1;
  __int64 lVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  
  piVar1 = *(int **)(lbl_83265080 + 0x14);
  piVar4 = (int *)*piVar1;
  if (piVar4 == (int *)0x0) {
    lVar2 = (**(int (***)())(*(int *)piVar1[3] + 4))((int *)piVar1[3],piVar1[5]);
    if ((int)lVar2 <= piVar1[5]) {
      return 0;
    }
    fn_83065FF0(piVar1,lVar2 - (unsigned __int64)(unsigned int)piVar1[5]);
    piVar4 = (int *)*piVar1;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    *piVar1 = *piVar4;
  }
  else {
    *piVar1 = *piVar4;
  }
  piVar1[5] = piVar1[5] + 1;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar3 = fn_8305F2E8();
  return uVar3;
}

