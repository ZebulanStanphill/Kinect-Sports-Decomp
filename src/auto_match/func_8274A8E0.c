extern int fn_8267C4F0();


unsigned int fn_8274A8E0(int *param_1)

{
  int *piVar2;
  unsigned int uVar1;
  
  piVar2 = (int *)(*(int (**)())(*param_1 + 0xc))(param_1,0x22);
  if (piVar2 != (int *)0) {
    uVar1 = (*(int (**)())(*piVar2 + 4))(piVar2);
  } else { uVar1=0; }
  if (piVar2) fn_8267C4F0(piVar2);
  return uVar1;
}

