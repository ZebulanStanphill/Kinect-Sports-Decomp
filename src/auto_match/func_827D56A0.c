extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_827D9798();
extern int fn_827DF340();


extern char lbl_8201AC8A[];
void fn_827D56A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 auStack_50 [2];
  unsigned char auStack_40 [16];
  
  auStack_50[0] = 0;
  fn_827D9798(auStack_40,lbl_8201AC8A,auStack_50,*(unsigned int *)(param_1 + 0x2c4));
  fn_827DF340(param_1 + 0x110,param_2,auStack_40,0,param_3,param_4);
  return;
}

