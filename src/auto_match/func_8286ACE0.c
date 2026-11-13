extern unsigned int *auStack_40;
extern int fn_82292780();
extern int fn_82864898();


unsigned int * fn_8286ACE0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char auStack_40 [40];
  
  uVar1 = fn_82292780(auStack_40,param_3);
  *param_1 = *param_2;
  fn_82292780(param_1 + 1,uVar1);
  fn_82864898(auStack_40);
  return param_1;
}

