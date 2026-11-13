extern int fn_825FAA80();
extern int fn_82631C78();
extern unsigned int lbl_8320A898;


void fn_825C46F8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = *(int **)(param_1 + 0xb90);
  dVar3 = (double)*(float *)(param_1 + 0x828);
  piVar1 = piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      if ((*piVar1 != 0) && (*(char *)(*piVar1 + param_2) != '\0')) break;
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
    if (piVar1 != (int *)0x0) {
      fn_82631C78(lbl_8320A898,0,0x40,0x40);
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (dVar3 <= (double)*(float *)(*piVar2 + 0x14)) {
          fn_825FAA80(dVar3);
        }
      }
      fn_82631C78(lbl_8320A898,0,0x20,0x60);
    }
  }
  return;
}

