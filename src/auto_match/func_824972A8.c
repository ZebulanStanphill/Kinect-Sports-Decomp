#define true 1
extern unsigned int *auStack_2c;
extern int fn_824973B0();
extern int fn_82498128();
extern unsigned int iStack_30;


unsigned int fn_824972A8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iStack_30;
  unsigned char auStack_2c [1];
  
  if (param_2 <= param_3) {
    do {
      iStack_30 = param_2;
      iVar4 = fn_824973B0(param_1 + 0x28,&iStack_30);
      piVar6 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x38));
      puVar1 = *(unsigned int **)(param_1 + 0x2c);
      puVar2 = (unsigned int *)*piVar6;
      piVar3 = puVar2;
      while( true ) {
        puVar7 = puVar1;
        if (puVar2 != puVar1) {
          puVar7 = *(unsigned int **)piVar6[1];
        }
        if (piVar3 == puVar7) goto LAB_82497368;
        piVar5 = piVar3;
        if (piVar3[2] == param_2) break;
        piVar3 = (int *)*piVar3;
      }
      while( true ) {
        puVar7 = puVar1;
        if (puVar2 != puVar1) {
          puVar7 = *(unsigned int **)piVar6[1];
        }
        if ((piVar5 == puVar7) || (param_2 != piVar5[2])) break;
        piVar5 = (unsigned int *)*piVar5;
      }
      if (piVar3 == piVar5) {
LAB_82497368:
        piVar3 = *(int **)(param_1 + 0x2c);
        piVar5 = piVar3;
      }
      for (; piVar3 != piVar5; piVar3 = (int *)*piVar3) {
      }
      fn_82498128(auStack_2c,param_1 + 0x28);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return *(unsigned int *)(param_1 + 0x30);
}

