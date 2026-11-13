typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FF1BB0();


void fn_82FF41B8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  int *param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_2 + 0x7c);
  do {
    if (iVar2 == 0) {
      return;
    }
    if (param_6 == (int *)0x0) {
      if (param_5 != 0) goto LAB_82ff4248;
LAB_82ff4254:
      fn_82FF1BB0(param_1,iVar2,param_3,param_4);
    }
    else {
      if (param_5 == 0) {
        piVar3 = (int *)*param_6;
        bVar1 = false;
        if (piVar3 == (int *)param_6[1]) {
LAB_82ff4234:
          bVar1 = !bVar1;
        }
        else {
          do {
            if (*piVar3 == *(int *)(iVar2 + 0x70)) {
              bVar1 = true;
              goto LAB_82ff4234;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != (int *)param_6[1]);
          bVar1 = true;
        }
      }
      else {
LAB_82ff4248:
        bVar1 = *(int *)(iVar2 + 0x70) == param_5;
      }
      if (bVar1) goto LAB_82ff4254;
    }
    iVar2 = *(int *)(iVar2 + 0x14);
  } while( true );
}

