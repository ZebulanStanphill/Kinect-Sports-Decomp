typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BD7F18();


unsigned __int64 fn_82BD7B10(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int (**pcVar1)();
  bool bVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x10);
  uVar4 = 0;
  while ((piVar3[-2] == 0 || (*piVar3 != 1))) {
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
    if (1 < uVar4) {
      bVar2 = false;
LAB_82bd7b5c:
      uVar6 = param_2 - param_3;
      if ((int)param_3 != -1) {
        piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
        while (((uVar6 & 0xffffffff) != 0 && (uVar6 = uVar6 - 1, piVar3 != (int *)0x0))) {
          *(unsigned int *)*piVar3 = 0;
          *(unsigned int *)(*piVar3 + 4) = *(unsigned int *)(*piVar3 + 0xc);
          piVar3 = (int *)fn_82BD7F18(*(unsigned int *)(param_1 + 4));
        }
      }
      if (bVar2) {
        pcVar1 = *(int (***)())(*(int *)(param_1 + 0x18) + 8);
        if (pcVar1 == (int (**)())0x0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (*pcVar1)(param_1,param_3);
        }
      }
      else {
        piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
        while (((param_3 & 0xffffffff) != 0 && (param_3 = param_3 - 1, piVar3 != (int *)0x0))) {
          *(unsigned int *)*piVar3 = 0;
          *(unsigned int *)(*piVar3 + 4) = *(unsigned int *)(*piVar3 + 0xc);
          piVar3 = (int *)fn_82BD7F18(*(unsigned int *)(param_1 + 4));
        }
      }
      return uVar5;
    }
  }
  bVar2 = true;
  goto LAB_82bd7b5c;
}

