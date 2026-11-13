extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8248D2B8();
extern int fn_8248D360();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;


/* WARNING: Removing unreachable block (ram,0x8248ce24) */
/* WARNING: Removing unreachable block (ram,0x8248ce28) */
/* WARNING: Removing unreachable block (ram,0x8248ce60) */
/* WARNING: Removing unreachable block (ram,0x8248ce64) */

int * fn_8248CDD8(int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  uVar2 = (iVar7 - iVar6) / 0xc;
  if (uVar2 == 0) {
    iVar6 = *param_1;
    if (iVar6 == param_1[1]) {
      return param_1;
    }
    fn_8248D360(iVar6,param_1[1]);
  }
  else {
    puVar9 = (unsigned int *)*param_1;
    uVar1 = (param_1[1] - (int)puVar9) / 0xc;
    if (uVar2 <= uVar1) {
      for (; iVar6 != iVar7; iVar6 = iVar6 + 0xc) {
        puVar4 = (unsigned int *)fn_82365BD8(auStack_48,iVar6);
        uVar3 = puVar4[1];
        puVar4[1] = puVar9[1];
        puVar9[1] = uVar3;
        uVar3 = *puVar4;
        *puVar4 = *puVar9;
        *puVar9 = uVar3;
        if (iStack_44 != 0) {
          fn_822315A0();
        }
        puVar9[2] = *(unsigned int *)(iVar6 + 8);
        puVar9 = puVar9 + 3;
      }
      fn_8248D360(puVar9,param_1[1]);
      param_1[1] = ((param_2[1] - *param_2) / 0xc) * 0xc + *param_1;
      return param_1;
    }
    if ((unsigned int)((param_1[2] - (int)puVar9) / 0xc) < uVar2) {
      if (puVar9 != (unsigned int *)0x0) {
        fn_8248D360();
        fn_8265CA20(*param_1);
      }
      cVar5 = fn_8248D2B8(param_1,(param_2[1] - *param_2) / 0xc);
      if (cVar5 == '\0') {
        return param_1;
      }
      iVar6 = param_2[1];
      iVar8 = *param_1;
      for (iVar7 = *param_2; iVar7 != iVar6; iVar7 = iVar7 + 0xc) {
        if (iVar8 != 0) {
          fn_82365BD8(iVar8,iVar7);
          *(unsigned int *)(iVar8 + 8) = *(unsigned int *)(iVar7 + 8);
        }
        iVar8 = iVar8 + 0xc;
      }
      param_1[1] = iVar8;
      return param_1;
    }
    iVar7 = uVar1 * 0xc + iVar6;
    if (iVar6 != iVar7) {
      puVar9 = puVar9 + -1;
      do {
        puVar4 = (unsigned int *)fn_82365BD8(auStack_40,iVar6);
        uVar3 = puVar4[1];
        puVar4[1] = puVar9[2];
        puVar9[2] = uVar3;
        uVar3 = *puVar4;
        *puVar4 = puVar9[1];
        puVar9[1] = uVar3;
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        puVar4 = (unsigned int *)(iVar6 + 8);
        iVar6 = iVar6 + 0xc;
        puVar9 = puVar9 + 3;
        *puVar9 = *puVar4;
      } while (iVar6 != iVar7);
    }
    iVar8 = param_2[1];
    iVar6 = param_1[1];
    for (; iVar7 != iVar8; iVar7 = iVar7 + 0xc) {
      if (iVar6 != 0) {
        fn_82365BD8(iVar6,iVar7);
        *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar7 + 8);
      }
      iVar6 = iVar6 + 0xc;
    }
  }
  param_1[1] = iVar6;
  return param_1;
}

