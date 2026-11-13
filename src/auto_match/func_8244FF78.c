extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229AE10();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82436240();
extern int fn_82672C20();
extern unsigned int iStack_2c;


void fn_8244FF78(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  uVar7 = 0;
  uVar8 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 200);
    if ((unsigned __int64)(unsigned int)(*(int *)(*(int *)(param_1 + 0x44) + 0xcc) - iVar1 >> 3) <=
        (uVar7 & 0xffffffff)) break;
    piVar3 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + *(int *)(uVar8 + iVar1) * 4);
    fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
    uVar7 = uVar7 + 1;
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x44) + 0xb8);
    uVar4 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x44) + 200) + uVar8);
    fn_822B67F8();
    uVar5 = fn_822B98A8();
    fn_82436240(param_1,uVar7,(unsigned __int64)uVar4 * 0x18 + (unsigned __int64)uVar2 + 0x14,uVar5);
    uVar8 = uVar8 + 8;
  } while (uVar8 < 0x18);
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    if (*(int *)(iVar1 + 0x34) == 0) {
      puVar6 = (unsigned int *)fn_8229AE10(auStack_30,iVar1);
      fn_82672C20(*puVar6,0xffffffff821aa298,0,0);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      *(unsigned int *)(iVar1 + 0x34) = 1;
    }
  }
  return;
}

