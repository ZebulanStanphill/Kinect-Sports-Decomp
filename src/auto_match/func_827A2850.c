extern int fn_8267C498();
extern int fn_827226F0();
extern int fn_8272A920();
extern int fn_82773930();
extern int fn_827921B8();
extern int fn_827998E8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_827A2850(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(unsigned char *)(*(int *)(param_1 + 8) + 0x13d) & 0x10) == 0) {
      uVar1 = param_2;
      if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
        uVar1 = param_3;
        param_3 = param_2;
      }
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_827921B8(*(unsigned int *)(*(int *)(param_1 + 8) + 8),&stack_pair_40.first,uVar1,param_3);
      if (param_4 == '\0') {
        uVar1 = (unsigned __int64)stack_pair_40.first;
        if (uVar1 == 0) {
          uVar1 = 0xffffffff820e975c;
        }
        fn_827226F0(*(unsigned int *)(param_1 + 0xc),uVar1,stack_pair_40.second);
      }
      else {
        uVar1 = fn_827998E8(*(unsigned int *)(*(int *)(param_1 + 8) + 8),uVar1,param_3);
        uVar2 = (unsigned __int64)stack_pair_40.first;
        if (uVar2 == 0) {
          uVar2 = 0xffffffff820e975c;
        }
        fn_8272A920(*(unsigned int *)(param_1 + 0xc),uVar2,stack_pair_40.second,uVar1);
        if ((uVar1 & 0xffffffff) != 0) {
          fn_8267C498(uVar1);
        }
      }
      fn_82773930(&stack_pair_40.first);
    }
  }
  return;
}

