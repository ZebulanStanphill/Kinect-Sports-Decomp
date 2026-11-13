extern int fn_822315A0();
extern int fn_827D6E18();
extern int fn_827E0088();
extern unsigned int iStack_2c;


void fn_827D6F50(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piStack_30;
  int iStack_2c;
  
  fn_827E0088(param_1 + 0x110,param_3);
  fn_827D6E18(&piStack_30,param_1,param_2);
  (**(int (***)())(*piStack_30 + 0x38))(piStack_30,param_3);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

