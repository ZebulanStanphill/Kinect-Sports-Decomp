extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D12A4;


unsigned __int64 fn_824912B8(int param_1)

{
  unsigned __int64 uVar1;
  int *piVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 100) == 0) {
    for (piVar2 = *(int **)(param_1 + 4);
        (piVar2 != *(int **)(param_1 + 8) && (*piVar2 != *(int *)(param_1 + 0x14)));
        piVar2 = piVar2 + 2) {
    }
    if (((piVar2 != *(int **)(param_1 + 8)) &&
        (piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0)) &&
       (dVar3 = (double)(**(int (***)())(*piVar2 + 0x18))(piVar2,param_1),
       lbl_821CA460 / lbl_831D12A4 <= (float)(dVar3 / (double)*(float *)(param_1 + 0x54)))) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

