extern int fn_82E4BEC0();
extern int fn_82E4DAA8();


unsigned __int64 fn_82E25660(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int in_stack_0000006c;
  char in_stack_0000008f;
  char in_stack_0000009f;
  unsigned int in_stack_000000c4;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if ((((in_stack_0000008f == '\0') && (in_stack_0000006c < 3)) && (in_stack_0000009f == '\0')) &&
       ((param_2 == 2 || (param_2 == 5)))) {
      iVar2 = fn_82E4DAA8(param_1);
      if (iVar2 != 0) {
        return 2;
      }
      fn_82E4BEC0(param_1,in_stack_000000c4);
      return 0;
    }
    uVar1 = 5;
  }
  return uVar1;
}

