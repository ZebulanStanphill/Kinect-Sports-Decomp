extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


void fn_82826E90(int param_1,unsigned int param_2,int param_3,unsigned int *param_4,int *param_5)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int iStack00000014;
  
  *param_4 = 0;
  *param_5 = 0;
  if ((*(unsigned char *)(param_1 + 0x134) & 8) == 0) {
    iStack00000014 = param_1;
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),4,&stack0x00000014);
    param_1 = iStack00000014;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar4 = 0;
    uVar3 = 0;
    if (*(unsigned int *)(param_1 + 0x2c) != 0) {
      piVar7 = *(int **)(param_1 + 0xec);
      do {
        if (*piVar7 == param_3) {
          uVar5 = 0;
          if (piVar7[1] != 0) {
            iVar6 = iVar4 << 2;
            do {
              uVar1 = *(unsigned int *)(iVar6 + *(int *)(param_1 + 0xf0));
              if (param_2 < uVar1) break;
              if ((int)(param_2 - uVar1) < piVar7[3]) {
                *param_4 = uVar1;
                *param_5 = piVar7[3];
                return;
              }
              uVar5 = uVar5 + 1;
              iVar6 = iVar6 + 4;
            } while (uVar5 < (unsigned int)piVar7[1]);
          }
        }
        piVar2 = piVar7 + 1;
        uVar3 = uVar3 + 1;
        piVar7 = piVar7 + 5;
        iVar4 = *piVar2 + iVar4;
      } while (uVar3 < *(unsigned int *)(param_1 + 0x2c));
    }
  }
  return;
}

