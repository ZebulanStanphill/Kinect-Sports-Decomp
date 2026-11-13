extern int fn_82ABE870();


void fn_82B4B5F0(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82ABE870();
  *puVar1 = param_2;
  puVar1[1] = (param_3 & 0x3fff) << 2 | puVar1[1] & 0x10000 | 2;
  return;
}

