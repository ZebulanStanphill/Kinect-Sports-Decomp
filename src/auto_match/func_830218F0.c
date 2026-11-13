extern int fn_82FAB9C0();
extern int fn_82FF5D28();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_830218F0(__int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int *puVar3;
  
  if (param_2 == 0) {
    uVar1 = 0xe;
  }
  else {
    piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x998);
    if (piVar2 != (int *)0x0) {
      puVar3 = (unsigned int *)fn_82FF5D28(param_1 + 0x10);
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = piVar2;
        return 1;
      }
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
    uVar1 = 2;
  }
  return uVar1;
}

