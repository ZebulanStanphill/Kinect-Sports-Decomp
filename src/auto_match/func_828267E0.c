#define true 1
extern int fn_82822E38();
extern int fn_828233A8();
extern int fn_828283F0();


void fn_828267E0(int param_1,int param_2)

{
  int aiStack_30;
  
  *(unsigned int *)(param_1 + 0x3d8) = *(unsigned int *)(param_2 + 0xc);
  while( true ) {
    fn_828233A8(param_1 + 0x318,&aiStack_30,0xffffffff8282b9f8,param_2);
    if (aiStack_30 == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  while( true ) {
    fn_828233A8(param_1 + 0x344,&aiStack_30,0xffffffff8282afc0,param_2);
    if (aiStack_30 == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  while( true ) {
    fn_828233A8(param_1 + 0x36c,&aiStack_30,0xffffffff82829f80,param_2);
    if (aiStack_30 == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  }
  fn_828283F0(param_1,0);
  *(unsigned int *)(param_1 + 0x3d8) = 0;
  return;
}

