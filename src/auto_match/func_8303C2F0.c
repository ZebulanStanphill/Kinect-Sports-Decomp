extern int fn_82FAB9C0();
extern int fn_83005000();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_8303C2F0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,*(unsigned int *)(param_1 + 0x10));
  if (piVar1 != (int *)0x0) {
    fn_83005000(piVar1,(*(unsigned int *)(param_1 + 0x14) & 0xffffff00) == 0x1001000);
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return 1;
}

