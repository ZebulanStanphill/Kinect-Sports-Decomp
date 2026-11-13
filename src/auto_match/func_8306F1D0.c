extern unsigned int *auStack_30;
extern unsigned int fStack_2c;
extern int fn_8306E7E8();
extern int fn_83075D30();
extern int fn_83075D80();
extern unsigned int lbl_8202236C;


void fn_8306F1D0(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  double dVar1;
  unsigned char auStack_30 [4];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0xd24) != 0) && (*(int *)((param_4 + 0x58) * 4 + param_2) == 1)) {
    fn_83075D30(auStack_30,param_3,param_4);
    dVar1 = (double)fn_8306E7E8((double)fStack_2c,
                                 (double)(lbl_8202236C / *(float *)(param_1 + 0xd20)));
    fStack_2c = (float)dVar1;
    fn_83075D80(param_3,param_4);
  }
  return;
}

