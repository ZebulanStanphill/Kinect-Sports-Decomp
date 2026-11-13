extern unsigned int *auStack_20;
extern int fn_82F73228();
extern int fn_82F732B0();


unsigned int * fn_82F73928(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned char auStack_20 [8];
  
  puVar1 = (unsigned int *)fn_82F732B0(auStack_20);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  fn_82F73228(param_1,param_3);
  return param_1;
}

