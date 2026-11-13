extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D6C00();
extern int fn_827DFCE8();
extern int fn_827E1820();
extern int fn_827E22D0();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_8c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


unsigned __int64
fn_827D7098(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar4;
  __int64 lVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_98;
  unsigned int uStack_94;
  struct { unsigned int first; int second; } stack_pair_90;

  unsigned char auStack_80 [112];
  
  if ((param_8 & 0xffffffff) != 0) {
    fn_827E1820(param_8);
  }
  piVar3 = (int *)0x0;
  cVar4 = fn_827DFCE8(param_1 + 0x110,param_2,param_3,param_5,param_6,in_stack_0000005c,param_7,
                          &uStack_ac);
  if (cVar4 == '\0') {
    uVar2 = 0xb7;
  }
  else {
    fn_827E2790(&stack_pair_90.first,uStack_ac);
    uStack_a8 = 0;
    fn_82811438(auStack_80,&uStack_a8,0x10);
    lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))
                      (lbl_83156AA0,0x4c,auStack_80,in_stack_0000005c);
    uStack_a4 = (unsigned int)lVar1;
    uStack_a0 = uStack_a4;
    if (lVar1 != 0) {
      uStack_98 = 0;
      uStack_94 = 0;
      fn_82517978(&uStack_98,stack_pair_90.first,stack_pair_90.second,0);
      piVar3 = (int *)fn_827E22D0(lVar1,uStack_ac,param_4,param_5,param_6,0,in_stack_00000054,
                                      in_stack_0000005c);
    }
    (**(int (***)())(*piVar3 + 4))(piVar3,param_1);
    fn_827D6C00(param_1,piVar3);
    if (stack_pair_90.second != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

