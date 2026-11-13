extern int fn_822315A0();
extern int fn_8266D9F0();
extern int fn_8266DF80();
extern int fn_8266E458();
extern int fn_8266F680();
extern int fn_8266F688();
extern int fn_8266F6A0();
extern int fn_8266F6B0();
extern int fn_826735B0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8266EA18(double param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  struct { int first; int second; } stack_pair_70;

  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  fn_8266E458(&uStack_60,param_2 + 0xd8);
  uVar5 = (unsigned __int64)uStack_60;
  if (uVar5 != uStack_5c) {
    do {
      fn_8266D9F0(&stack_pair_70.first,uVar5);
      iVar1 = stack_pair_70.first;
      if ((((stack_pair_70.first != 0) &&
           ((iVar2 = fn_8266F688(stack_pair_70.first), param_4 == 0 ||
            (iVar3 = fn_8266F680(iVar1), iVar3 != 0)))) &&
          ((iVar2 == 0 || ((iVar2 == param_5 || (param_5 == 0)))))) &&
         ((iVar2 = fn_8266F6A0(iVar1), iVar2 == 0 &&
          (uVar4 = fn_8266F6B0(iVar1), (uVar4 & *(unsigned int *)(param_2 + 0x1dc)) == 0)))) {
        dVar6 = param_1;
        if (*(int *)(param_2 + 0x1e0) != *(int *)(param_2 + 0x1e4)) {
          dVar6 = (double)*(float *)(*(int *)(param_2 + 0x1e4) + -4);
        }
        fn_826735B0(dVar6,iVar1);
      }
      if (stack_pair_70.second != 0) {
        fn_822315A0();
      }
      uVar5 = uVar5 + 0xc;
    } while ((uVar5 & 0xffffffff) != (unsigned __int64)uStack_5c);
  }
  fn_8266DF80(&uStack_60);
  return;
}

