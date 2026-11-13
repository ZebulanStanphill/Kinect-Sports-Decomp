typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8228E578();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_50;


unsigned int * fn_82513A80(unsigned int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  piVar2 = *(int **)(param_2 + 8);
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    piVar5 = (int *)fn_8228E578(&stack0x00000000 + -0x48,&stack0x00000000 + -0x50);
    if ((*piVar5 == 0) ||
       (bVar1 = true, *(int *)(param_3 + 0x28) != *(int *)(*(int *)(*piVar5 + 8) + 0x28))) {
      bVar1 = false;
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    if (bVar1) break;
    fn_82248B90(&stack0x00000000 + -0x50);
  }
  bVar1 = piVar3 == (int *)*(int *)(param_2 + 8);
  if (bVar1) {
    iStack_4c = 0;
    puVar6 = (unsigned int *)(&stack0x00000000 + -0x50);
  }
  else {
    puVar6 = (unsigned int *)fn_8228E578(&stack0x00000000 + -0x40,&stack0x00000000 + -0x50);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != puVar6) {
    param_1[1] = puVar6[1];
    puVar6[1] = 0;
    uVar4 = *param_1;
    *param_1 = *puVar6;
    *puVar6 = uVar4;
  }
  if ((bVar1) && (iStack_4c != 0)) {
    fn_822315A0();
  }
  if ((!bVar1) && (iStack_3c != 0)) {
    fn_822315A0();
  }
  return param_1;
}

