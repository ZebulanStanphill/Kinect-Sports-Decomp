extern int fn_82D8AF78();


void fn_82D8A4F0(unsigned int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0xe8) == '\x05') {
    if (1 < (int)*(unsigned int *)(param_1 + 0xb8)) {
      fn_82D8AF78(*(unsigned int *)(param_1 + 0xb4),0,(unsigned __int64)*(unsigned int *)(param_1 + 0xb8) - 1,
                      param_1);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar4 = 0;
      do {
        iVar8 = 0;
        iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0xb4));
        uVar6 = *(unsigned int *)(iVar2 + 0x18) ^ *(unsigned int *)(iVar2 + 0x14) ^ param_1;
        uVar5 = (unsigned int)*(unsigned short *)(uVar6 + 0xb0);
        if (uVar5 != 0) {
          piVar1 = *(int **)(uVar6 + 0xac);
          piVar7 = piVar1;
          do {
            if (*piVar7 == iVar2) {
              *(short *)((int)piVar1 + iVar8 * 0x30 + 0x22) = (short)iVar3;
              break;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 0xc;
          } while (iVar8 < (int)uVar5);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0xb8));
    }
  }
  return;
}

