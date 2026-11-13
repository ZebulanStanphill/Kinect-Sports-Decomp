extern int fn_822315A0();
extern int fn_827D5070();


void fn_825FD970(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)fn_827D5070(*param_1);
  if (*piVar3 != 0) {
    *piVar3 = *piVar3 + (int)piVar3;
  }
  if (piVar3[1] != 0) {
    piVar3[1] = piVar3[1] + (int)piVar3;
  }
  iVar5 = 0;
  if (*(short *)(piVar3 + 2) != 0) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(iVar6 + piVar3[1]);
      iVar6 = iVar6 + 8;
      *piVar4 = *piVar4 + (int)piVar3;
    } while (iVar5 < (int)(unsigned int)*(unsigned short *)(piVar3 + 2));
  }
  puVar1 = (unsigned int *)*piVar3;
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
              ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
    uVar2 = puVar1[1];
    puVar1[1] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
    uVar2 = puVar1[2];
    puVar1[2] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 |
                ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

