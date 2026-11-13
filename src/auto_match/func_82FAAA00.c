extern int fn_82FAB9C0();
extern int fn_82FACCE8();
extern int fn_82FADD68();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_82FAAA00(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int *piVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  
  piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  uVar1 = 0;
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
  }
  else {
    uVar1 = fn_82FADD68(piVar2,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x28),
                              param_1 + 0x10);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82FACCE8(uVar1,0,1);
      *param_3 = uVar3;
    }
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

