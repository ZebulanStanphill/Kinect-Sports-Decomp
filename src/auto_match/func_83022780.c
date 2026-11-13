extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_83022530();
extern int fn_83023180();


void fn_83022780(int *param_1,unsigned int *param_2)

{
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fn_83023180((double)(float)param_1[3],&fStack_50,param_2 + 4);
  fn_83022530((double)fStack_50,(double)fStack_4c,param_1,*param_2,*(unsigned int *)*param_1);
  fn_83022530((double)fStack_48,(double)fStack_44,param_1,
                    (unsigned __int64)*(unsigned short *)(param_2 + 3) * 4 + (unsigned __int64)*param_2,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 4 + (unsigned __int64)*(unsigned int *)*param_1)
  ;
  fn_83022530((double)fStack_40,(double)fStack_3c,param_1,
                    (unsigned __int64)*(unsigned short *)(param_2 + 3) * 8 + (unsigned __int64)*param_2,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 8 + (unsigned __int64)*(unsigned int *)*param_1)
  ;
  fn_83022530((double)fStack_38,(double)fStack_34,param_1,
                    (unsigned __int64)*(unsigned short *)(param_2 + 3) * 0x14 + (unsigned __int64)*param_2,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0x14 +
                    (unsigned __int64)*(unsigned int *)*param_1);
  fn_83022530((double)fStack_30,(double)fStack_2c,param_1,
                    (unsigned __int64)*(unsigned short *)(param_2 + 3) * 0xc + (unsigned __int64)*param_2,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0xc +
                    (unsigned __int64)*(unsigned int *)*param_1);
  fn_83022530((double)fStack_28,(double)fStack_24,param_1,
                    (unsigned __int64)*(unsigned short *)(param_2 + 3) * 0x10 + (unsigned __int64)*param_2,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0x10 +
                    (unsigned __int64)*(unsigned int *)*param_1);
  return;
}

