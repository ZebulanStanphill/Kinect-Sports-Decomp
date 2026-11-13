extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_822B33B0();
extern int fn_823C9098();
extern int fn_823CB4A0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192604;


void fn_823C8830(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5,unsigned __int64 param_6)

{
  char cVar1;
  double extraout_f1;
  double dVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned char auStack_50 [8];
  float fStack_48;
  unsigned char auStack_40 [64];
  
  fn_823CB4A0(param_1,param_2,auStack_40,auStack_50,&fStack_60,param_5,param_6);
  dVar2 = (double)fStack_60;
  altv207_13(in_vs32,in_vs43);
  fn_823C9098(dVar2,(double)fStack_5c,(double)fStack_58);
  cVar1 = fn_822B33B0((double)lbl_82192604,
                       *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x240) + 0x1c) + 4));
  if (cVar1 == '\0') {
    fStack_48 = (float)extraout_f1;
    fn_823C9098(dVar2);
    *param_5 = *param_5 - lbl_821922D0;
  }
  return;
}

