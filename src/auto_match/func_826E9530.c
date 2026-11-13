typedef unsigned char bool;
#define true 1
extern int fn_8267BE38();
extern int fn_8268B818();
extern int fn_8268BEA8();
extern int fn_826E7800();
extern int fn_826E94D0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


bool fn_826E9530(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char acStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  unsigned int uStack_30;
  
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  uStack_30 = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  while( true ) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7800(param_1,1);
    }
    acStack_40 = *(char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (acStack_40 == '\0') break;
    fn_826E94D0(&stack_pair_38.first,&acStack_40);
  }
  acStack_40 = '\0';
  fn_826E94D0(&stack_pair_38.first,&acStack_40);
  uVar1 = stack_pair_38.first;
  uVar2 = (unsigned __int64)stack_pair_38.second;
  if (uVar2 != 0) {
    fn_8268B818(param_2,stack_pair_38.first,uVar2 - 1);
  }
  else {
    fn_8268BEA8();
  }
  fn_8267BE38(uVar1);
  return uVar2 != 0;
}

