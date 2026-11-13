typedef unsigned char bool;
extern int fn_8257A9F0();
extern int fn_82822F60();
extern int fn_828233A8();
extern int fn_828252E8();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


bool fn_82824738(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  unsigned int uStack0000001c;
  int aiStack_30;
  
  uStack0000001c = (unsigned int)param_2;
  fn_828233A8(param_1 + 0x3a4,&aiStack_30,0xffffffff828245e8,param_2);
  if (aiStack_30 == 0) {
    fn_8257A9F0(*(unsigned int *)(param_1 + 0x3bc),&stack0x0000001c);
    *param_3 = ((*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2) + -1;
    iVar1 = fn_828252E8(param_1,0x18);
    *(int *)(iVar1 + 0x10) = param_1;
    *(int *)(iVar1 + 0x14) = *param_3;
    fn_82822F60(param_1 + 0x3a4,iVar1,0xffffffff828244e8);
  }
  else {
    *param_3 = *(int *)(aiStack_30 + 0x14);
  }
  return aiStack_30 == 0;
}

