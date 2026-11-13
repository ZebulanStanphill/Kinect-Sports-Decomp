extern int fn_82668DC0();
extern int fn_82668EA0();
extern int fn_82669C68();
extern int fn_8266A4A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned int * fn_8266AB18(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  char cVar1;
  unsigned int *puStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack_20;
  struct { unsigned int first; unsigned int second; } stack_pair_1c;

  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  fn_8266A4A8(&uStack_20,param_2,param_3);
  fn_8266A4A8(&stack_pair_1c.first,iStack0000001c,uStack0000002c);
  cVar1 = fn_82668EA0(&uStack_20,&stack_pair_1c.first);
  if (cVar1 != '\0') {
    stack_pair_1c.second = fn_82669C68(stack_pair_1c.first,*(unsigned int *)(iStack0000001c + 4),uStack_20);
    fn_82668DC0(iStack0000001c,stack_pair_1c.second,*(unsigned int *)(iStack0000001c + 4));
    *(unsigned int *)(iStack0000001c + 4) = stack_pair_1c.second;
  }
  *puStack00000014 = uStack_20;
  return puStack00000014;
}

