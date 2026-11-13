extern unsigned int fStack_10;
extern unsigned int iStack_20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_83032710(double param_1,int *param_2,int param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned int param_6)

{
  int iStack_20;
  unsigned int uStack_1c;
  unsigned char uStack_18;
  unsigned int uStack_14;
  float fStack_10;
  
  if (param_3 == 0) {
    param_3 = 0x1d;
  }
  else if (param_3 == 2) {
    param_3 = 0x1f;
  }
  fStack_10 = (float)param_1;
  uStack_18 = 0;
  iStack_20 = param_3;
  uStack_1c = param_5;
  uStack_14 = param_6;
  (**(int (***)())(*param_2 + 0x34))(param_2,&iStack_20);
  return;
}

