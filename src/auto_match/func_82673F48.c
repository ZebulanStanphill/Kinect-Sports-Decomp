extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_82520098();
extern int fn_8265C9E0();
extern int fn_82670CE0();
extern int fn_82672358();
extern int fn_82673CF0();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int * fn_82673F48(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar2;
  unsigned __int64 uVar1;
  struct { unsigned int first; int second; } stack_pair_58;

  
  iVar2 = fn_8265C9E0(0x15c);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82672358();
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_82670CE0(param_1,uVar1,0);
  fn_82520098((unsigned __int64)*param_1 + 0xd4,param_2);
  iVar2 = fn_82673CF0(*param_1,param_3,param_4,param_5,param_6,param_7);
  if (iVar2 == 0) {
    stack_pair_58.first = 0;
    stack_pair_58.second = 0;
    fn_82266D28(&stack_pair_58.first,0);
    fn_823F2E20(param_1,&stack_pair_58.first);
    if (stack_pair_58.second != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

