#define true 1
extern int fn_8255C820();
extern unsigned int stack0x00000020;


int fn_822B40A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x14);
  do {
    if (piVar6 == piVar1) {
      return 0;
    }
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x20) == param_2) {
      uVar5 = *(unsigned int *)(*(int *)(param_1 + 0x20) + 4);
      uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x20) + 8);
      if (uVar5 < uVar3) {
        do {
          if ((unsigned int)*(unsigned short *)(uVar5 + 8) == (*(unsigned int *)(iVar2 + 0x24) & 0xffff)) goto LAB_822b4110;
          uVar5 = uVar5 + 0x50;
        } while (uVar5 < uVar3);
      }
      uVar5 = 0;
LAB_822b4110:
      iVar4 = fn_8255C820(&stack0x00000020,uVar5);
      if (iVar4 != 0) {
        return iVar2;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

