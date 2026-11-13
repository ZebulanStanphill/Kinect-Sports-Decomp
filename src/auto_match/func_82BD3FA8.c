#define true 1
extern unsigned int *auStack_9c;
extern int fn_82BD3A30();
extern int fn_82F691F0();
extern unsigned int register0x0000000c;


unsigned __int64 fn_82BD3FA8(int param_1)

{
  char cVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  unsigned short uVar8;
  int *piVar9;
  int *piVar10;
  unsigned char auStack_9c [28];
  unsigned char *puStack_80;
  
  if (*(int *)(param_1 + 0x24) == 1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_9c,0,0x20);
  }
  piVar10 = (int *)(param_1 + 0x34);
  puVar3 = *(unsigned int **)(param_1 + 0x34);
  puStack_80 = (unsigned char *)register0x0000000c;
  while ((puVar3 != (unsigned int *)0x0 && (*(int *)*puVar3 != 0x103))) {
    iVar4 = *piVar10;
    if (iVar4 != 0) {
      if (iVar4 == *(int *)(param_1 + 0x38)) {
        *(unsigned int *)(param_1 + 0x38) = 0;
      }
      *piVar10 = *(int *)(iVar4 + 4);
      *(unsigned int *)(iVar4 + 4) = 0;
    }
    fn_82BD3A30(param_1);
    puVar3 = (unsigned int *)*piVar10;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  piVar9 = (int *)(param_1 + 0x2c);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    piVar6 = (int *)*piVar5;
    if (*piVar6 == 0x103) break;
    iVar4 = *piVar9;
    iVar7 = piVar6[2];
    if (iVar4 != 0) {
      if (iVar4 == *(int *)(param_1 + 0x30)) {
        *(unsigned int *)(param_1 + 0x30) = 0;
      }
      *piVar9 = *(int *)(iVar4 + 4);
      *(unsigned int *)(iVar4 + 4) = 0;
    }
    if (*piVar6 == 0) {
      cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x8c);
      if (*(char *)(param_1 + 0x3c) != cVar1) {
        *(char *)(param_1 + 0x3c) = cVar1;
      }
      if (0x7ff < *(unsigned short *)(param_1 + 0x3e)) {
        *(unsigned short *)(param_1 + 0x3e) = 0;
      }
      uVar2 = *(unsigned short *)(iVar7 + -2);
      uVar8 = (unsigned short)*(unsigned char *)(param_1 + 0x3c) << 0xc;
      *(unsigned short *)(iVar7 + -2) = uVar8 | uVar2 & 0xfff;
      *(unsigned short *)(iVar7 + -2) = (*(unsigned short *)(param_1 + 0x3e) & 0x7ff) << 1 | uVar8 | uVar2 & 1;
      *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 1;
      *(unsigned short *)(iVar7 + -2) =
           (unsigned short)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xd0) & 0xf0000) == 0x10000) |
           *(unsigned short *)(iVar7 + -2) & 0xfffe;
      *(unsigned int *)*piVar5 = 0x103;
      *(unsigned int *)(*piVar5 + 4) = 0;
      piVar5[1] = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        *piVar10 = (int)piVar5;
      }
      else {
        *(int **)(*(int *)(param_1 + 0x38) + 4) = piVar5;
      }
      *(int **)(param_1 + 0x38) = piVar5;
      *(unsigned int *)(*(int *)(param_1 + 0x20) + 0xec) =
           1 << (**(unsigned int **)(param_1 + 4) & 0x3f) | *(unsigned int *)(*(int *)(param_1 + 0x20) + 0xec);
    }
    else {
      fn_82BD3A30(param_1);
    }
    piVar5 = (int *)*piVar9;
  }
  return 0;
}

