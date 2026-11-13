#define true 1
extern int fn_82A40B38();
extern int fn_82A4F4E0();
extern int fn_82A5CA80();


unsigned __int64 fn_82A5CAE0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar4 = 0;
  piVar6 = *(int **)(param_1 + 0xd4);
  do {
    do {
      while( true ) {
        if (piVar6 == (int *)0x0) {
          return uVar4;
        }
        piVar5 = (int *)piVar6[1];
        piVar1 = (int *)*piVar6;
        piVar6 = piVar5;
        if (*piVar1 != 0) break;
        fn_82A40B38(param_1 + 8);
        uVar3 = fn_82A5CA80(param_1,piVar1);
        if ((int)uVar3 < 0) {
          uVar4 = uVar3;
        }
      }
    } while (*piVar1 != 3);
    iVar2 = piVar1[1];
    piVar5 = *(int **)(param_1 + 0xd4);
    while( true ) {
      do {
        if (piVar5 == (int *)0x0) {
          return uVar4;
        }
        piVar6 = (int *)piVar5[1];
        piVar1 = (int *)*piVar5;
        piVar5 = piVar6;
      } while ((piVar1[1] != iVar2) && (iVar2 != 0));
      fn_82A40B38(param_1 + 8);
      if (*piVar1 == 3) break;
      uVar3 = fn_82A5CA80(param_1,piVar1);
      if ((int)uVar3 < 0) {
        uVar4 = uVar3;
      }
    }
    if (piVar1[2] != 5) {
      fn_82A4F4E0(piVar1);
    }
  } while( true );
}

