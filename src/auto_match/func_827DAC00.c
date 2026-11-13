#define true 1
extern int fn_827E36D0();
extern int fn_827E3840();
extern int fn_827E3AF8();
extern int fn_82F63CA0();


void fn_827DAC00(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  fn_827E3840(param_2,0);
  puVar1 = *(unsigned int **)(param_1 + 4);
  while( true ) {
    if (puVar1 == *(unsigned int **)(param_1 + 8)) {
      return;
    }
    if ((unsigned __int64)*puVar1 == (param_2 & 0xffffffff)) break;
    puVar1 = puVar1 + 1;
  }
  fn_82F63CA0(puVar1,puVar1 + 1,(*(int *)(param_1 + 8) - (int)(puVar1 + 1) >> 2) << 2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  fn_827E3AF8(param_2);
  fn_827E36D0(param_2);
  return;
}

