typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C4C8();
extern int fn_826DAE80();


void fn_826DAFE8(int param_1,int *param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int delta;
  unsigned int uVar4;
  unsigned int *piVar5;
  
  bVar2 = false;
  RtlEnterCriticalSection(param_1 + 0x14);
  if ((param_4 ) != 0) {
    piVar5 = param_2;
    delta = param_3 - (int)param_2;
    uVar4 = param_4;
    do {
      if (*piVar5 == 0) {
        piVar3 = (int *)fn_826DAE80(param_1 + 0x10,delta + (int)piVar5);
        if (piVar3 != 0) { fn_8267C4C8(*piVar3); *piVar5 = *piVar3; }
        else { bVar2 = true; }
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 != 0);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      (*(int (**)())(*(int *)(iVar1 + 8) + 0x10))(iVar1 + 8,param_2,param_3,param_4);
    }
  }
  return;
}

