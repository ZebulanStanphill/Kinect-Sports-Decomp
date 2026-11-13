extern int fn_82FAB9C0();
extern int fn_8300A520();
extern int fn_8300A650();
extern int fn_8300B5D0();
extern unsigned int lbl_832642E0;


void fn_8300B720(int param_1)

{
  unsigned int *puVar1;
  unsigned char bVar2;
  int *piVar3;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x5c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    piVar3 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,puVar1[1]);
    if (piVar3 != (int *)0x0) {
      bVar2 = *(unsigned char *)(param_1 + 0xa0) >> 5;
      if (bVar2 == 0) {
        fn_8300A520(piVar3,*(unsigned int *)(param_1 + 0xc),puVar1[4],puVar1[5]);
      }
      else if (bVar2 == 1) {
        fn_8300B5D0((double)(float)puVar1[2],piVar3,*(unsigned int *)(param_1 + 0xc));
      }
      else if (bVar2 < 3) {
        fn_8300A650(piVar3,*(unsigned int *)(param_1 + 0xc));
      }
      (**(int (***)())(*piVar3 + 8))(piVar3);
    }
  }
  return;
}

