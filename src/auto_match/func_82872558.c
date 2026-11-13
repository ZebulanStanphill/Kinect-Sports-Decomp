extern unsigned int *auStack_20;
extern int fn_82872DD8();


int fn_82872558(int param_1)

{
  unsigned char auStack_20 [16];
  
  fn_82872DD8(auStack_20,param_1 + 0x34,*(unsigned int *)(param_1 + 0x34),
                    *(unsigned int *)(param_1 + 0x38));
  return param_1 + 0x34;
}

