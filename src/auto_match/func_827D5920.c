extern int fn_822315A0();
extern int fn_827DE9E8();
extern unsigned int iStack_1c;


void fn_827D5920(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int *piStack_20;
  int iStack_1c;
  
  iVar1 = (**(int (***)())(*param_2 + 8))(param_2);
  if (iVar1 != 0) {
    (**(int (***)())(*param_2 + 0x10))(param_2,0,0);
  }
  fn_827DE9E8(&piStack_20,param_2);
  (**(int (***)())(*piStack_20 + 0x48))(piStack_20,param_2);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

