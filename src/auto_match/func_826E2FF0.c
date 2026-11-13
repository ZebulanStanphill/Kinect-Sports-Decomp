typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B8E8();
extern int fn_826E1F08();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E2FF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  fn_8268B330(&stack_pair_40.first);
  fn_8268B8E8(&stack_pair_40.first,param_2);
  stack_pair_40.second = param_3;
  uStack_38 = param_4;
  fn_826E1F08(param_1,&stack_pair_40.first);
  lVar2 = ((unsigned __int64)stack_pair_40.first & 0xfffffffc) + 4;
  do {
    puVar3 = (unsigned int *)lVar2;
    uVar4 = (unsigned __int64)*puVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  return;
}

