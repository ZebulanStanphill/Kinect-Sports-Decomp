typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE190();
extern int fn_82AD1A40();


void fn_82ACB660(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  char cVar8;
  unsigned int *puVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  int *piVar12;
  unsigned int uVar13;
  
  puVar11 = *(unsigned int **)(param_2 + 4);
  for (puVar9 = puVar11; puVar9 != (unsigned int *)0x0; puVar9 = (unsigned int *)puVar9[2]) {
    if ((*puVar9 & 0xe000000) != 0) {
      bVar6 = true;
      if ((*puVar9 >> 0x1e & 1) != 0) goto LAB_82acb6a8;
      break;
    }
  }
  bVar6 = false;
LAB_82acb6a8:
  if (bVar6) {
    iVar1 = *(int *)(param_2 + 0x1c);
    for (; (puVar11 != (unsigned int *)0x0 && ((*puVar11 & 0xe000000) == 0)); puVar11 = (unsigned int *)puVar11[2])
    {
    }
    uVar7 = (unsigned __int64)(*puVar11 >> 0xc) & 0x1fe0 | (unsigned __int64)*(unsigned int *)(param_2 + 8) & 0x1e;
    uVar13 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24);
    while ((uVar13 & 1) == 0) {
      piVar5 = (int *)(uVar13 & 0xfffffffe);
      if (piVar5 + -10 == (int *)0x0) break;
      if ((piVar5[-8] & 0x3f80U) != 0x3700) {
        piVar12 = piVar5;
        for (uVar13 = 0; piVar12 = piVar12 + 1, uVar13 < ((unsigned int)piVar5[-8] >> 0x13 & 7);
            uVar13 = uVar13 + 1) {
          puVar11 = (unsigned int *)*piVar12;
          cVar8 = fn_82ABE190(puVar11);
          if ((((cVar8 != '\0') && ((*(unsigned int *)(puVar11[3] + 8) >> 0x17 & 1) != 0)) &&
              (uVar10 = (unsigned __int64)(*puVar11 >> 0xd) & 0xfff,
              ((uVar10 ^ uVar7 >> 1) & 0xfffffff0) == 0)) && ((uVar10 & uVar7 >> 1 & 0xf) != 0)) {
            fn_82AD1A40(param_2,piVar5 + -10,param_1);
          }
        }
      }
      uVar13 = piVar5[-1];
    }
    for (iVar2 = *(int *)(param_2 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      uVar13 = *(unsigned int *)(iVar2 + 0x10);
      if ((((uVar13 != 0) && (cVar8 = fn_82ABE190(iVar2), cVar8 != '\0')) &&
          (*(int *)(uVar13 + 0x1c) == iVar1)) &&
         ((uVar3 = *(unsigned int *)(uVar13 + 8) >> 7 & 0x7f, uVar3 != 0x70 &&
          (uVar4 = uVar13, uVar3 != 0x6e)))) {
        while ((uVar4 = *(unsigned int *)((uVar4 & 0xfffffffe) + 0x28), (uVar4 & 1) == 0 && (uVar4 != 0))) {
          uVar3 = *(unsigned int *)(uVar4 + 8);
          if (((uVar3 >> 0x17 & 1) != 0) && ((uVar3 & 0x3f80) != 0x3700)) {
            puVar11 = *(unsigned int **)(uVar4 + 4);
            for (puVar9 = puVar11; puVar9 != (unsigned int *)0x0; puVar9 = (unsigned int *)puVar9[2]) {
              if ((*puVar9 & 0xe000000) != 0) {
                bVar6 = true;
                if ((*puVar9 >> 0x1e & 1) != 0) goto LAB_82acb830;
                break;
              }
            }
            bVar6 = false;
LAB_82acb830:
            if (bVar6) {
              for (; (puVar11 != (unsigned int *)0x0 && ((*puVar11 & 0xe000000) == 0));
                  puVar11 = (unsigned int *)puVar11[2]) {
              }
              uVar10 = (unsigned __int64)(*puVar11 >> 0xc) & 0x1fe0 | (unsigned __int64)uVar3 & 0x1e;
              if ((((uVar10 ^ uVar7) >> 1 & 0xfffffff0) == 0) &&
                 (((uVar10 & uVar7) >> 1 & 0xf) != 0)) {
                fn_82AD1A40(uVar4,uVar13,param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

