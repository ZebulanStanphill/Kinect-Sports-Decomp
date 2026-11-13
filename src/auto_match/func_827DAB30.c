extern int fn_822315A0();
extern int fn_827D50C0();


unsigned __int64
fn_827DAB30(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int *param_4,
             unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puStack0000002c;
  
  puStack0000002c = param_4;
  iVar2 = (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,param_2,param_5);
  if (iVar2 == 0) {
    if (param_4[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      fn_827D50C0(*param_4,0x45b);
    }
    if (param_2 != (unsigned int *)0x0) {
      (**(int (***)())*param_2)(param_2,1);
    }
    if (param_4[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0x45b;
  }
  return uVar1;
}

