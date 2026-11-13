extern unsigned int *auStack_1e0;
extern int fn_82A1DD38();
extern int fn_82F52E10();
extern int fn_82F593F8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82021544;


void fn_82F5C9D0(double param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned char auStack_1e0 [464];
  
  fn_82A1DD38(auStack_1e0,param_4 * 0x1c0 + param_3 + 0x30,0x1c0);
  fn_82F593F8((double)(float)(param_1 * (double)lbl_82002C5C),(double)lbl_82021544,
               (double)lbl_82002AE0);
  fn_82F52E10(param_2,auStack_1e0);
  return;
}

