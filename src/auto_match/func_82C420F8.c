extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82C41C38();
extern int fn_82C41F90();


void fn_82C420F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [48];
  
  fn_82C41F90(param_1,param_2,auStack_50,auStack_80,param_4);
  fn_82C41C38(param_1,auStack_50,auStack_80,param_3,param_4);
  return;
}

