extern unsigned int *auStack_20;
extern int fn_828DFCD0();
extern int fn_828E0268();


unsigned __int64 fn_828DFD60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned char auStack_20 [8];
  
  fn_828E0268(auStack_20);
  puVar1 = (unsigned int *)fn_828DFCD0(param_1,auStack_20);
  *puVar1 = param_3;
  return param_1;
}

