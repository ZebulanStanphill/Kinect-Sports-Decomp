extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_82365BD8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_822EA610(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  struct { unsigned int first; int second; } stack_pair_50;

  struct { unsigned int first; int second; } stack_pair_48;


  uVar1 = param_1[1];
  for (uVar5 = (unsigned __int64)*param_1; (uVar5 & 0xffffffff) != (unsigned __int64)uVar1; uVar5 = uVar5 + 8) {
    fn_82365BD8(&stack_pair_48.first,uVar5);
    uVar2 = param_2[1];
    for (uVar6 = (unsigned __int64)*param_2; (uVar6 & 0xffffffff) != (unsigned __int64)uVar2; uVar6 = uVar6 + 8) {
      fn_82365BD8(&stack_pair_50.first,uVar6);
      uVar4 = (unsigned __int64)stack_pair_50.first;
      uVar3 = fn_822C7578((unsigned __int64)stack_pair_48.first + 0x40,uVar4 + 4);
      fn_82230218(uVar3,uVar4 + 4,0,0xffffffffffffffff);
      if (stack_pair_50.second != 0) {
        fn_822315A0();
      }
    }
    if (stack_pair_48.second != 0) {
      fn_822315A0();
    }
  }
  return;
}
