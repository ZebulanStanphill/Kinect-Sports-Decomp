typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_826B2CF0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


unsigned __int64
fn_826B32D0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  bool bVar1;
  char cVar3;
  unsigned __int64 uVar2;
  struct { int first; int second; } stack_pair_50;

  unsigned char bStack_48;
  char acStack_40 [16];
  
  acStack_40[0] = '\0';
  cVar3 = (**(int (***)())(*(int *)(param_2 + 0x10) + 0x10))(param_2 + 0x10,param_1,param_3,acStack_40);
  if (cVar3 != '\0') {
    if ((acStack_40[0] == '\b') || (bVar1 = false, acStack_40[0] == '\v')) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = fn_82696B20(&stack_pair_50.first,acStack_40,param_1);
      uVar2 = fn_826B2CF0(param_1,uVar2,param_4,param_5);
      if (((bStack_48 & 2) == 0) && (stack_pair_50.first != 0)) {
        fn_826824B0();
      }
      stack_pair_50.first = 0;
      if (((bStack_48 & 1) == 0) && (stack_pair_50.second != 0)) {
        fn_826824B0();
      }
      stack_pair_50.second = 0;
      goto LAB_826b33a0;
    }
  }
  uVar2 = 0;
LAB_826b33a0:
  fn_82696330(acStack_40);
  return uVar2;
}

