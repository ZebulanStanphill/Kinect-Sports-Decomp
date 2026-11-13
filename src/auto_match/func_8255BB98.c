typedef unsigned char bool;
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_30;


unsigned int * fn_8255BB98(unsigned int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  int *piVar6;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  piVar2 = *(int **)(param_2 + 4);
  iVar5 = 0;
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      piVar6 = (int *)*piVar6;
      iVar5 = iVar5 + 1;
    } while (piVar6 != piVar2);
    if (iVar5 == 1) {
      fn_82365BD8(param_1,(unsigned __int64)**(unsigned int **)(param_2 + 4) + 8);
      return param_1;
    }
  }
  piVar2 = *(int **)(param_2 + 4);
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      if (*(int *)(piVar6[2] + 4) == *(int *)(param_2 + 0x10)) break;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar2);
  }
  bVar1 = piVar6 == *(int **)(param_2 + 4);
  if (bVar1) {
    iStack_2c = 0;
    puVar4 = (unsigned int *)(&stack0x00000000 + -0x30);
  }
  else {
    puVar4 = (unsigned int *)fn_82365BD8(&stack0x00000000 + -0x28,piVar6 + 2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != puVar4) {
    param_1[1] = puVar4[1];
    puVar4[1] = 0;
    uVar3 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar3;
  }
  if ((bVar1) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  if ((!bVar1) && (iStack_24 != 0)) {
    fn_822315A0();
  }
  return param_1;
}

