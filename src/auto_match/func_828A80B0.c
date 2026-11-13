extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_828A7138();
extern int fn_828A8008();
extern int fn_828E38D8();


void fn_828A80B0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int auStack_30;
  
  RtlEnterCriticalSection(param_1 + 3);
  if (*(int *)*param_1 == param_2) {
    if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 1)) {
      uVar1 = fn_8265C9E0(0x10);
      if (uVar1 != 0) {
        uVar2 = fn_828A8008(uVar1,(unsigned int *)*param_1,*(unsigned int *)*param_1);
      }
      else {
        uVar2 = 0;
      }
      fn_828E38D8(param_1,uVar2);
    }
    auStack_30 = *(unsigned int *)**(unsigned int **)*param_1;
    fn_828A7138(param_1,1,&auStack_30,0);
  }
  RtlLeaveCriticalSection(param_1 + 3);
  return;
}

