typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827AED80();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int uStack_2c;


void fn_827AF130(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  bool bVar5;
  __int64 lVar6;
  __int64 lVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  struct { int first; int second; } stack_pair_38;

  int iStack_30;
  unsigned char uStack_2c;
  
  piVar8 = (int *)param_1;
  if ((unsigned int)piVar8[1] < (unsigned int)piVar8[2]) {
    uVar9 = (unsigned __int64)*(unsigned int *)(*piVar8 + 4);
    iStack_30 = 0;
    stack_pair_38.second = 0;
    stack_pair_38.first = 0;
    uStack_2c = 0;
    if (uVar9 != 0) {
      lVar6 = 0;
      do {
        uVar1 = ((unsigned int *)param_1)[1];
        lVar7 = (unsigned __int64)*(unsigned int *)*(unsigned int *)param_1 + lVar6;
        iVar4 = (int)lVar7;
        iVar2 = *(int *)(iVar4 + 0x10);
        if ((iVar2 == 0) || (uVar3 = *(unsigned int *)(iVar4 + 0xc), uVar1 < uVar3)) {
LAB_827af1d4:
          bVar5 = false;
        }
        else {
          bVar5 = true;
          if (uVar3 + iVar2 <= uVar1) goto LAB_827af1d4;
        }
        if (bVar5) {
          fn_827AED80(&stack_pair_38.first,lVar7 + 0x18);
        }
        piVar8 = (int *)param_1;
        uVar9 = uVar9 - 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar9 != 0);
    }
    piVar8[3] = -1;
    piVar8[4] = 0;
    piVar8[5] = -1;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = stack_pair_38.first;
    piVar8[10] = stack_pair_38.second;
    piVar8[0xb] = iStack_30;
    *(unsigned char *)(piVar8 + 0xc) = uStack_2c;
    piVar8[7] = 1;
  }
  else {
    piVar8[0xb] = 0;
    piVar8[10] = 0;
    piVar8[9] = 0;
    *(unsigned char *)(piVar8 + 0xc) = 0;
    piVar8[7] = 0;
  }
  piVar8[8] = 0;
  piVar8[6] = piVar8[1];
  return;
}

