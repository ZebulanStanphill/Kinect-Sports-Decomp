#define true 1
extern int fn_82FAB9C0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E0;


unsigned __int64 fn_83002AE0(int param_1,unsigned int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  *param_2 = lbl_821AAD20;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 100) != 0) break;
    if ((*(unsigned char *)(param_1 + 0x3d) & 1) != 0) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 0x10);
  }
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xfe0,
                                    *(unsigned int *)(*(int *)(param_1 + 100) + 0xc));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(-(unsigned int)(*(unsigned char *)(piVar1 + 0x17) != 0xff) &
                  (unsigned int)(piVar1 + (unsigned int)*(unsigned char *)(piVar1 + 0x17) * 3 + 8));
  if (piVar2 == (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))();
    return 0;
  }
  *param_2 = *(unsigned int *)(piVar2[1] * 0xc + *piVar2 + -0xc);
  (**(int (***)())(*piVar1 + 8))();
  return 1;
}

