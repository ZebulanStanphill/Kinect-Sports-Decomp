extern int fn_82D07B30();
extern int fn_82D07CB0();
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82D07EB8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char abStack_40 [8];
  unsigned int uStack_38;
  unsigned int uStack_34;
  char cStack_2c;
  unsigned int uStack_28;
  
  (**(int (***)())(*param_1 + 0x10))(param_1,param_2,1,abStack_40);
  if (cStack_2c == '\0') {
    fn_82D07B30(abStack_40[0],uStack_38,uStack_34,param_3);
  }
  else if (cStack_2c == '\x01') {
    if ((2 < abStack_40[0]) && (abStack_40[0] < 5)) {
      fn_82D07CB0(abStack_40[0],uStack_28,uStack_38,0,param_3);
    }
  }
  (**(int (***)())(*param_1 + 0x14))(param_1,abStack_40);
  return;
}

