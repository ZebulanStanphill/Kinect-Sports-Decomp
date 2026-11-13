#define true 1
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826E7800();
extern int fn_826E94D0();
extern int fn_82F68CC0();
extern unsigned int iStack_44;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64 fn_826E95F8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char acStack_50;
  struct { unsigned int first; int second; } stack_pair_48;

  unsigned int uStack_40;
  
  stack_pair_48.first = 0;
  stack_pair_48.second = 0;
  uStack_40 = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  while( true ) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7800(param_1,1);
    }
    acStack_50 = *(char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (acStack_50 == '\0') break;
    fn_826E94D0(&stack_pair_48.first,&acStack_50);
  }
  acStack_50 = '\0';
  fn_826E94D0(&stack_pair_48.first,&acStack_50);
  iVar2 = stack_pair_48.second;
  uVar1 = stack_pair_48.first;
  if (stack_pair_48.second == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8267B890(param_2,stack_pair_48.second,0);
    fn_82F68CC0(uVar3,uVar1,iVar2);
  }
  fn_8267BE38(uVar1);
  return uVar3;
}

