extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern __int64 fn_827D9718(unsigned int);
extern int fn_827DDDD8();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_8260C710(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int *param_5,
                  unsigned __int64 param_6)

{
  unsigned int lVar1;
  __int64 lVar2;
  __int64 lVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  
  RtlEnterCriticalSection(param_1 + 0x1a0);
  *param_5 = (int)param_3;
  fn_82517A50(param_6,param_4);
  lVar1 = fn_827DDDD8(param_1 + 200,param_2);
  if (lVar1 == 0) goto LAB_8260c7d8;
  if (param_3 != 0) {
    lVar2 = fn_827D9718(param_3);
    if (lVar2 == 0) goto LAB_8260c7d8;
    lVar2 = fn_827D9718(lVar1);
    lVar3 = fn_827D9718(param_3);
    if (lVar2 <= lVar3) goto LAB_8260c7d8;
  }
  *param_5 = (int)lVar1;
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  fn_82517978(&stack_pair_50.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
  fn_823F2E20(param_6,&stack_pair_50.first);
  if (stack_pair_50.second != 0) {
    fn_822315A0(stack_pair_50.second);
  }
LAB_8260c7d8:
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  if (*(unsigned int *)(param_4 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_4 + 4));
  }
  return;
}

