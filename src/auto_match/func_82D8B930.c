extern unsigned int *auStack_20;
extern int fn_82D8B400();


void fn_82D8B930(int param_1)

{
  unsigned char auStack_20 [16];
  
  (*(int (**)())(*(int *)(param_1 + 0xe0) + 0x2c))(param_1 + 0xe0);
  fn_82D8B400(param_1,*(unsigned int *)(param_1 + 0x10),auStack_20);
  return;
}

