extern unsigned int *auStack_1c;
extern int fn_8268D790();
extern unsigned int uStack_20;


void fn_82678590(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  uStack_20 = *param_2;
  puVar1 = (unsigned int *)fn_8268D790(auStack_1c,param_1 + 0x134,&uStack_20);
  *(unsigned int *)(param_1 + 0x2294) = 1;
  *(unsigned int *)(param_1 + 0x229c) = *puVar1;
  return;
}

