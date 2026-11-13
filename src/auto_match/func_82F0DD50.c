typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82E86DF0();
extern unsigned int lbl_831A9CD0;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82F0DD50(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar16 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar13 = 0;
  uVar10 = 0;
  if (*(unsigned int *)(param_1 + 0x658) == 0) {
LAB_82f0de1c:
    *(unsigned int *)(param_1 + 0x4e4c) = 0;
    *(unsigned char **)(param_1 + 0x4e50) = &lbl_831A9CD0;
    *(unsigned int *)(param_1 + 0x4e54) = 0x831aa090;
  }
  else {
    piVar11 = (int *)(param_1 + 0xa04);
    do {
      uVar10 = uVar10 + 1;
      uVar4 = piVar11[0xef] + uVar4;
      uVar5 = piVar11[0xf0] + uVar5;
      uVar6 = piVar11[0xf1] + uVar6;
      uVar14 = piVar11[0xf3] + uVar14;
      piVar2 = piVar11 + 0xfb;
      uVar16 = piVar11[0xf5] + uVar16;
      piVar3 = piVar11 + 0xfa;
      uVar15 = piVar11[0xf4] + uVar15;
      piVar11 = piVar11 + 0xf2;
      uVar9 = *piVar2 + uVar9;
      uVar7 = *piVar3 + uVar7;
      uVar13 = *piVar11 + uVar13;
    } while (uVar10 < *(unsigned int *)(param_1 + 0x658));
    if (uVar9 <= uVar7) goto LAB_82f0de1c;
    *(unsigned int *)(param_1 + 0x4e4c) = 1;
    *(unsigned int *)(param_1 + 0x4e50) = 0x831aa450;
    *(unsigned int *)(param_1 + 0x4e54) = 0x831aa810;
  }
  if (*(int *)(param_1 + 0x7944) != 2) {
    if (*(int *)(param_1 + 0x7944) == 0) {
      *(unsigned char **)(param_1 + 0x4e50) = &lbl_831A9CD0;
      *(unsigned int *)(param_1 + 0x4e54) = 0x831aa090;
      *(unsigned int *)(param_1 + 0x4e4c) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0x4e50) = 0x831aa450;
      *(unsigned int *)(param_1 + 0x4e54) = 0x831aa810;
      *(unsigned int *)(param_1 + 0x4e4c) = 1;
    }
  }
  iVar12 = *(int *)(param_1 + 0xaf0);
  if ((iVar12 == 1) || (iVar12 == 2)) {
    uVar5 = uVar15 + uVar5;
    uVar4 = uVar14 + uVar4;
    uVar6 = uVar16 + uVar6;
  }
  if (uVar4 < uVar5) {
    if (uVar6 < uVar4) goto LAB_82f0dec4;
    uVar7 = uVar4 + 2;
    *(unsigned int *)(param_1 + 0x4e44) = 1;
    *(unsigned int *)(param_1 + 0x4e48) = 1;
  }
  else if (uVar6 < uVar5) {
LAB_82f0dec4:
    *(unsigned int *)(param_1 + 0x4e48) = 2;
    uVar7 = uVar6 + 2;
    *(unsigned int *)(param_1 + 0x4e44) = 2;
  }
  else {
    uVar7 = uVar5 + 1;
    *(unsigned int *)(param_1 + 0x4e44) = 0;
    *(unsigned int *)(param_1 + 0x4e48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x794c);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x4e44) = 0;
      uVar7 = uVar5 + 1;
      *(unsigned int *)(param_1 + 0x4e48) = 0;
    }
    else if (iVar1 == 1) {
      *(unsigned int *)(param_1 + 0x4e44) = 1;
      uVar7 = uVar4 + 2;
      *(unsigned int *)(param_1 + 0x4e48) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x4e44) = 2;
      uVar7 = uVar6 + 2;
      *(unsigned int *)(param_1 + 0x4e48) = 2;
    }
  }
  if ((iVar12 != 0) && (iVar12 != 4)) goto LAB_82f0dfac;
  if (uVar14 < uVar15) {
    if (uVar16 < uVar14) goto LAB_82f0df5c;
    *(unsigned int *)(param_1 + 0x4e48) = 1;
    uVar4 = uVar14;
LAB_82f0df64:
    uVar7 = uVar7 + uVar4 + 2;
  }
  else {
    if (uVar16 < uVar15) {
LAB_82f0df5c:
      *(unsigned int *)(param_1 + 0x4e48) = 2;
      uVar4 = uVar16;
      goto LAB_82f0df64;
    }
    *(unsigned int *)(param_1 + 0x4e48) = 0;
    uVar7 = uVar7 + uVar15 + 1;
  }
  iVar12 = *(int *)(param_1 + 0x7948);
  if (iVar12 != -1) {
    if (iVar12 == 0) {
      *(unsigned int *)(param_1 + 0x4e48) = 0;
      uVar7 = uVar7 + uVar15 + 1;
    }
    else {
      if (iVar12 == 1) {
        *(unsigned int *)(param_1 + 0x4e48) = 1;
        uVar16 = uVar14;
      }
      else {
        *(unsigned int *)(param_1 + 0x4e48) = 2;
      }
      uVar7 = uVar7 + uVar16 + 2;
    }
  }
LAB_82f0dfac:
  if ((*(int *)(param_1 + 0x604) == 0) || (iVar12 = 1, uVar7 <= uVar13)) {
    iVar12 = 0;
  }
  *(int *)(param_1 + 0x600) = iVar12;
  fn_82E86DF0(param_1,*(unsigned int *)(param_1 + 0x4e44),*(unsigned int *)(param_1 + 0x4e48),
                  iVar12 == 0);
  do {
    puVar8 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
    if (in_RESERVE != '\0') {
      uVar16 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,ZEXT48(&stack0x00000000) - 0x80)
      ;
      *puVar8 = uVar16;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

