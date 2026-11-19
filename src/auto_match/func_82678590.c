extern unsigned int *auStack_1c;
extern int fn_8268D790();
extern unsigned int uStack_20;


void fn_82678590(int self,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  uStack_20 = *param_2;
  puVar1 = (unsigned int *)fn_8268D790(auStack_1c,self + 0x134,&uStack_20);
  *(unsigned int *)(self + 0x2294) = 1;
  *(unsigned int *)(self + 0x229c) = *puVar1;
  return;
}

