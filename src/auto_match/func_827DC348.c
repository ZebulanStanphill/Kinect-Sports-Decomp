extern int fn_827DCBF8();
extern int fn_827E3840();
extern int fn_82F63CA0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_827DC348(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  fn_827E3840(param_2,param_3);
  for (puVar1 = *(unsigned int **)(param_1 + 4);
      (puVar1 != *(unsigned int **)(param_1 + 8) && ((unsigned __int64)*puVar1 != (param_2 & 0xffffffff)));
      puVar1 = puVar1 + 1) {
  }
  fn_82F63CA0(puVar1,puVar1 + 1,(*(int *)(param_1 + 8) - (int)(puVar1 + 1) >> 2) << 2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  fn_827DCBF8(param_1 + 0x2c,&stack0x0000001c);
  return;
}

