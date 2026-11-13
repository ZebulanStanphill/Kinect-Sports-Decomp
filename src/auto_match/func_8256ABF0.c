extern int fn_822315A0();
extern int fn_8256AC48();
extern int fn_827D50B8();


void fn_8256ABF0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_827D50B8(*param_1);
  fn_8256AC48(param_2,uVar1);
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

