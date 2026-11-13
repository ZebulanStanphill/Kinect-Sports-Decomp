extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_824C97F0();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int ltcg_pool_0_0f;


void fn_82396CA0(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [48];
  
  if (*(int *)(param_1 + 0x2d0) != 0) {
    fn_82864988(auStack_50,0xffffffff821b4aac);
    auStack_60[0] = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(auStack_60,0);
    *(unsigned int *)(param_1 + 0x2d0) = 0;
    *(unsigned int *)(param_1 + 0x868) = ltcg_pool_0_0f;
    piVar1 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
    for (piVar2 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar2 != piVar1; piVar2 = piVar2 + 2) {
      fn_824C97F0(*(unsigned int *)(*piVar2 + 0x28),0xffffffff821b45a8);
    }
  }
  return;
}

