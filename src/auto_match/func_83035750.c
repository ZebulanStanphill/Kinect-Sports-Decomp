extern unsigned int fStack_30;
extern int fn_830176A0();
extern int fn_83035078();
extern unsigned int lbl_832642FC;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64
fn_83035750(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  double dVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned char uStack_38;
  unsigned int uStack_34;
  float fStack_30;
  
  stack_pair_40.second = (unsigned int)param_7;
  uStack_38 = 0;
  stack_pair_40.first = param_4;
  dVar1 = (double)fn_830176A0(lbl_832642FC,param_3,param_7);
  fStack_30 = (float)(param_1 - dVar1);
  uStack_34 = param_8;
  fn_83035078(param_2,&stack_pair_40.first);
  return 1;
}

