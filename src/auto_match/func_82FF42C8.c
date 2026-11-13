typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FEF530();


void fn_82FF42C8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  do {
    if (iVar2 == 0) {
      return;
    }
    if (param_5 == (int *)0x0) {
      if (param_4 != 0) goto LAB_82ff4354;
LAB_82ff4360:
      fn_82FEF530(iVar2,param_2,param_3);
    }
    else {
      if (param_4 == 0) {
        piVar3 = (int *)*param_5;
        bVar1 = false;
        if (piVar3 == (int *)param_5[1]) {
LAB_82ff4340:
          bVar1 = !bVar1;
        }
        else {
          do {
            if (*piVar3 == *(int *)(iVar2 + 0x70)) {
              bVar1 = true;
              goto LAB_82ff4340;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != (int *)param_5[1]);
          bVar1 = true;
        }
      }
      else {
LAB_82ff4354:
        bVar1 = *(int *)(iVar2 + 0x70) == param_4;
      }
      if (bVar1) goto LAB_82ff4360;
    }
    iVar2 = *(int *)(iVar2 + 0x14);
  } while( true );
}

