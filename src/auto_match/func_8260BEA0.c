extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827FA328();


void fn_8260BEA0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_827D5070(*param_1);
  fn_827FA328("anim",uVar1);
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

