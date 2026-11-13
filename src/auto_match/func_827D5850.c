extern int fn_822315A0();
extern int fn_827D50C0();


unsigned __int64
fn_827D5850(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puStack00000024;
  
  puStack00000024 = param_3;
  iVar2 = (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,param_2,param_4);
  if (iVar2 == 0) {
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    fn_827D50C0(*param_3,0x45b);
    if (param_2 != (unsigned int *)0x0) {
      (**(int (***)())*param_2)(param_2,1);
    }
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0x45b;
  }
  return uVar1;
}

