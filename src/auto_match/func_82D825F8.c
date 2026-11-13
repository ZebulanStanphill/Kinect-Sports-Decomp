extern unsigned int *auStack_20;
extern int fn_82D82418();
extern int fn_82D82548();


void fn_82D825F8(unsigned __int64 param_1,int param_2)

{
  unsigned char *puVar1;
  unsigned char auStack_20 [8];
  
  fn_82D82418(auStack_20,param_1,param_2);
  puVar1 = (unsigned char *)fn_82D82548(auStack_20,param_1,param_2);
  *(unsigned char *)(param_2 + 0x40) = *puVar1;
  return;
}

