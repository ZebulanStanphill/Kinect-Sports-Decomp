typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82271830();
extern int fn_82271B78();
extern int fn_82271C18();
extern int fn_82279C58();
extern int fn_8227A8B8();
extern int fn_8265CA20();


unsigned int fn_82272770(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uVar6;
  int iVar7;
  bool bVar8;
  unsigned char auStack_50 [1];
  
  uVar6 = *(unsigned int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0x98) != 0) {
    piVar5 = *(int **)(param_1 + 0xa8);
    iVar7 = 0;
    bVar8 = false;
    piVar1 = (int *)*piVar5;
    do {
      if (piVar5 == piVar1) goto LAB_82272834;
      piVar5 = (int *)piVar5[1];
    } while ((piVar5[0x42d] != 0) || (piVar5[3] == 0));
    iVar7 = piVar5[2];
    iVar2 = piVar5[0xc];
    iVar3 = *(int *)(param_1 + 0xbc);
    uVar4 = fn_82279C58(auStack_50);
    fn_82271B78(param_1,uVar4,iVar3 == 0,0,iVar2);
    if (piVar5[3] != 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      *(int *)(piVar5[3] + 0xf0) = iVar2;
      if (iVar2 != 0) {
        fn_8227A8B8();
      }
      bVar8 = *(int *)(piVar5[3] + 0x14) != 0;
    }
LAB_82272834:
    *(unsigned int *)(param_1 + 0xc0) = 1;
    *(unsigned int *)(param_1 + 0xc4) = 1;
    *(unsigned int *)(param_1 + 0xd0) = 1;
    fn_82271C18(param_1,3,iVar7,bVar8);
  }
  for (piVar5 = *(int **)(*(int *)(param_1 + 0x4c) + 0xc);
      piVar5 != *(int **)(*(int *)(param_1 + 0x4c) + 0x10); piVar5 = piVar5 + 1) {
    if (*piVar5 == *(int *)(param_1 + 0x50)) {
      bVar8 = true;
      goto LAB_82272884;
    }
  }
  bVar8 = false;
LAB_82272884:
  if (!bVar8) {
    piVar5 = *(int **)(param_1 + 0xa8);
    *(unsigned int *)(param_1 + 0x50) = 0;
    for (piVar1 = (int *)*piVar5; piVar1 != piVar5; piVar1 = (int *)*piVar1) {
      if (piVar1[2] == *(int *)(param_1 + 0xb4)) {
        fn_82271830(param_1,piVar1 + 2);
        if (piVar1 != *(int **)(param_1 + 0xa8)) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          if (piVar1[4] != 0) {
            fn_822315A0();
          }
          fn_8265CA20(piVar1);
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
        }
        break;
      }
      piVar5 = *(int **)(param_1 + 0xa8);
    }
    uVar6 = 2;
  }
  return uVar6;
}

