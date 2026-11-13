extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827DA660(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  if (param_3 != 0xffffffff) {
    if (param_3 < 0x40) {
      piVar1 = *(int **)((param_3 + 0x295) * 4 + param_1);
    }
    else {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 0x14))(piVar1,param_2);
      return;
    }
  }
  auStack_40[0] = 3;
  fn_82811438(auStack_30,auStack_40,0x10);
  (*(int (**)())(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,param_2,auStack_30);
  return;
}

