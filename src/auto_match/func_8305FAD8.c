typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265CA60();
extern int fn_8265CAA0();


void fn_8305FAD8(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  bool bVar1;
  __int64 lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar11;
  
  piVar11 = (int *)*param_2;
  while( true ) {
    uVar8 = *param_3;
    bVar1 = false;
    uVar10 = 0;
    if (0 < (int)uVar8) break;
LAB_8305fbfc:
    if (!bVar1) {
      *param_2 = piVar11;
      return;
    }
  }
LAB_8305fb04:
  if (uVar10 == 0) {
    iVar7 = piVar11[1];
    uVar9 = uVar8;
LAB_8305fb2c:
    iVar5 = (piVar11 + uVar9)[-1];
  }
  else {
    if (uVar10 == uVar8 - 1) {
      iVar7 = *piVar11;
      uVar9 = uVar10;
      goto LAB_8305fb2c;
    }
    iVar5 = (piVar11 + uVar10)[-1];
    iVar7 = (piVar11 + uVar10)[1];
  }
  if (iVar5 != iVar7) goto code_r0x8305fb50;
  uVar9 = uVar10 + 1;
  if ((int)(uVar8 - 1) <= (int)uVar10) {
    uVar9 = 0;
  }
  lVar2 = ((unsigned __int64)uVar8 - 2 & 0x3fffffff) << 2;
  if (0x3fffffff < ((unsigned __int64)uVar8 - 2 & 0xffffffff)) {
    lVar2 = -1;
  }
  piVar3 = (int *)fn_8265CA60(lVar2);
  uVar8 = 0;
  if (0 < (int)*param_3) {
    piVar4 = piVar3 + -1;
    piVar6 = piVar11;
    do {
      if ((uVar8 != uVar10) && (uVar8 != uVar9)) {
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar6;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar8 < (int)*param_3);
  }
  *param_3 = *param_3 - 2;
  fn_8265CAA0(piVar11);
  bVar1 = true;
  piVar11 = piVar3;
  goto LAB_8305fbfc;
code_r0x8305fb50:
  uVar10 = uVar10 + 1;
  if ((int)*param_3 <= (int)uVar10) goto LAB_8305fbfc;
  goto LAB_8305fb04;
}

