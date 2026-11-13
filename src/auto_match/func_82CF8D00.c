typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D01808();
extern int fn_82D01D88();
extern int fn_82D035F8();


void fn_82CF8D00(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  RtlEnterCriticalSection(param_1 + 4);
  bVar4 = false;
  do {
    bVar3 = false;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x208)) {
      piVar6 = (int *)(param_1 + 0x17c);
      bVar3 = false;
      do {
        iVar1 = *piVar6;
        iVar2 = *(int *)(iVar1 + 0x28);
        iVar5 = fn_82D01D88(iVar1);
        if (iVar5 < 0) {
          bVar4 = true;
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          bVar3 = true;
        }
        fn_82D01808(iVar1);
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        *(int *)(param_1 + 0x20) =
             (*(int *)(iVar1 + 0x28) - iVar2) * *(int *)(iVar1 + 4) + *(int *)(param_1 + 0x20);
      } while (iVar7 < *(int *)(param_1 + 0x208));
    }
  } while ((bVar3) && (bVar4));
  fn_82D035F8(param_1 + 0x2c);
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

