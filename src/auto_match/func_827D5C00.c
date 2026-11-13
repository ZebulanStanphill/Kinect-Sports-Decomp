extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5850();
extern int fn_827DFCE8();
extern int fn_827E1820();
extern int fn_827E22D0();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_94;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


unsigned __int64
fn_827D5C00(__int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064)

{
  char cVar3;
  __int64 lVar1;
  unsigned __int64 uVar2;



  unsigned int uStack_ac;
  struct { unsigned int first; unsigned int second; } stack_pair_a8;

  unsigned int uStack_a0;
  unsigned int uStack_9c;
  struct { unsigned int first; int second; } stack_pair_98;

  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_80 [96];

  if ((param_8 & 0xffffffff) != 0) {
    fn_827E1820(param_8);
  }
  cVar3 = fn_827DFCE8(param_1 + 0x110,param_2,param_3,param_5,param_6,in_stack_0000005c,param_7,
                          &uStack_ac);
  if (cVar3 == '\0') {
    uVar2 = 0xb7;
  }
  else {
    fn_827E2790(&stack_pair_98.first,uStack_ac);
    if (in_stack_00000064 != 0) {
      fn_82517A50(in_stack_00000064,&stack_pair_98.first);
    }
    stack_pair_a8.first = 0;
    fn_82811438(auStack_80,&stack_pair_a8.first,0x10);
    lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))
                      (lbl_83156AA0,0x4c,auStack_80,in_stack_0000005c);
    stack_pair_a8.second = (unsigned int)lVar1;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_a0 = stack_pair_a8.second;
      fn_82517978(&uStack_90,stack_pair_98.first,stack_pair_98.second,0);
      uVar2 = fn_827E22D0(lVar1,uStack_ac,param_4,param_5,param_6,0,in_stack_00000054,
                              in_stack_0000005c);
    }
    uStack_a0 = 0;
    uStack_9c = 0;
    fn_82517978(&uStack_a0,stack_pair_98.first,stack_pair_98.second,0);
    uVar2 = fn_827D5850(param_1,uVar2,&uStack_a0,0);
    if (stack_pair_98.second != 0) {
      fn_822315A0();
    }
  }
  return uVar2;
}
