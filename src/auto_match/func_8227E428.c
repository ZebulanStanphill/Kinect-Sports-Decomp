extern int fn_8227E4B0();
extern int fn_8227F7B8();


void fn_8227E428(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  for (piVar3 = *(int **)(param_1 + 0xc); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    fn_8227E4B0(param_1,*(unsigned int *)(*piVar3 + 0x14),param_2,param_3);
  }
  if ((int)param_3 != 0) {
    for (uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
        (uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x20); uVar2 = uVar2 + 8) {
      if (*(int *)uVar2 == 0) {
        fn_8227F7B8(((int *)uVar2)[1],param_2);
      }
    }
  }
  return;
}

