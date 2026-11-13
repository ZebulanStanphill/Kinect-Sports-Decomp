extern int fn_82FA5060();
extern int fn_8304CC68();
extern int fn_8304CCB8();
extern unsigned int lbl_8217D540;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


int * fn_8303CDE0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82FA5060(lbl_831BC768,0x38);
  if (piVar1 != (int *)0x0) {
    fn_8304CC68(piVar1,param_1,param_2);
    *piVar1 = (int)&lbl_8217D540;
    iVar2 = lbl_821AAD20;
    piVar1[10] = lbl_821AAD20;
    piVar1[0xb] = iVar2;
    piVar1[0xc] = iVar2;
    piVar1[0xd] = 2;
    iVar2 = fn_8304CCB8(piVar1);
    if (iVar2 == 1) {
      return piVar1;
    }
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  return (int *)0x0;
}

