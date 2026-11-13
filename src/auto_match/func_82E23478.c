extern int fn_8265C940();
extern int fn_82E233E0();
extern unsigned int lbl_8214BF70;
extern unsigned int lbl_8214BF74;
extern unsigned int lbl_821B4200;


__int64 fn_82E23478(unsigned __int64 param_1,unsigned int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  
  piVar1 = (int *)fn_8265C940(0x208,0x60908066);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)&lbl_821B4200;
    piVar1[2] = 1;
    *piVar1 = (int)&lbl_8214BF74;
    piVar1[1] = (int)&lbl_8214BF70;
  }
  if (piVar1 == (int *)0x0) {
    lVar2 = 0xe;
  }
  else {
    lVar2 = fn_82E233E0(piVar1,param_1);
    if (lVar2 == 0) {
      *param_2 = piVar1;
    }
    else {
      (**(int (***)())(*piVar1 + 4))(piVar1);
    }
  }
  return lVar2;
}

