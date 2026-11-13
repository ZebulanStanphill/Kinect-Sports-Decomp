extern int fn_824BF8A8();
extern int fn_825200A8();
extern int fn_82549960();
extern int fn_8254CC70();
extern int fn_8254F740();
extern int fn_8265C9E0();
extern int fn_82829120();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_8254CDE0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  struct { int first; unsigned int second; } stack_pair_30;

  
  iVar3 = fn_825200A8(param_2,0xffffffff82196288);
  if (iVar3 == 0) {
    fn_82829120(&stack_pair_30.first,param_1 + 0x38,param_2);
    if (stack_pair_30.first == *(int *)(param_1 + 0x3c)) {
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) {
        stack_pair_30.first = 0;
      }
      else {
        stack_pair_30.first = fn_82549960(uVar2,param_2,0,0,0,0);
      }
      if (stack_pair_30.first != 0) {
        stack_pair_30.second = fn_8254CC70(param_1,param_3);
        fn_824BF8A8(param_1 + 0x18,&stack_pair_30.first);
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x18);
        piVar4 = (int *)fn_8254F740(param_1 + 0x38,param_2);
        *piVar4 = (iVar3 - iVar1 >> 3) + -1;
      }
    }
  }
  return;
}

