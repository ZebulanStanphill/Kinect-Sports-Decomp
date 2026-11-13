extern int fn_8251E370();
extern int fn_82526A20();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831d45a8;


void fn_825711A0(double param_1,__int64 param_2,unsigned __int64 param_3,char *param_4,
                  unsigned __int64 param_5,int param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned int uVar8;
  char *pcVar9;
  int *piVar10;
  
  fn_8251E370(param_2 + 0x14,0xc,0);
  fn_8251E370(param_2,0xd0,0);
  iVar3 = (int)param_2;
  uVar8 = *(unsigned int *)(iVar3 + 0x108) | 0xc;
  *(unsigned int *)(iVar3 + 0x108) = uVar8;
  if (((param_3 & 0xffffffff) != 0) &&
     (iVar5 = fn_82526A20(param_3,0xffffffff821c53b8), iVar5 == 0)) {
    *(unsigned int *)(iVar3 + 0x108) = uVar8 | 0x13;
    *(unsigned int *)(iVar3 + 100) = 0xffffffff;
    *(unsigned int *)(iVar3 + 0x60) = 0xfffffffe;
    *(unsigned int *)(iVar3 + 0x3c) = 0;
    *(unsigned int *)(iVar3 + 0x44) = 0xffffffff;
    uVar4 = ltcg_pool_0_0f;
    *(unsigned int *)(iVar3 + 0x40) = 0;
    *(unsigned int *)(iVar3 + 0x48) = 0;
    *(unsigned int *)(iVar3 + 0x50) = 0xffffffff;
    *(unsigned int *)(iVar3 + 0x4c) = 0;
    *(unsigned int *)(iVar3 + 0x8c) = uVar4;
    *(unsigned int *)(iVar3 + 0x88) = uRam831d45a8;
    if ((param_2 != -0x2c) && (-1 < *(int *)(iVar3 + 100))) {
      *(unsigned int *)(iVar3 + 0x108) = *(unsigned int *)(iVar3 + 0x108) | 0x10;
    }
    *(unsigned int *)(iVar3 + 0x98) = 1;
    *(unsigned int *)(iVar3 + 0x9c) = 2;
  }
  *(unsigned int *)(iVar3 + 0xc4) = 0xffffffff;
  if (param_4 != (char *)0x0) {
    iVar5 = fn_82526A20(param_4);
    if (iVar5 == 0) {
      iVar5 = -3;
    }
    else {
      piVar6 = *(int **)(param_6 + 0xbbc);
      iVar5 = 0;
      piVar10 = piVar6 + (piVar6[1] + 8) * *piVar6 * 2 + 5;
      piVar6 = piVar10 + piVar6[1] * 0x10;
      if (piVar10 < piVar6) {
        iVar7 = (int)piVar10 - (int)param_4;
        do {
          cVar1 = *(char *)piVar10;
          cVar2 = *param_4;
          pcVar9 = param_4;
          while (cVar2 == cVar1) {
            pcVar9 = pcVar9 + 1;
            if (cVar2 == '\0') goto LAB_8257133c;
            cVar1 = pcVar9[iVar7];
            cVar2 = *pcVar9;
          }
          if (cVar2 == cVar1) goto LAB_8257133c;
          piVar10 = piVar10 + 0x10;
          iVar7 = iVar7 + 0x40;
          iVar5 = iVar5 + 1;
        } while (piVar10 < piVar6);
      }
      iVar5 = -1;
    }
LAB_8257133c:
    *(int *)(iVar3 + 0xc4) = iVar5;
  }
  if (*(int *)(iVar3 + 0xc4) == -1) {
    *(unsigned int *)(iVar3 + 0xc4) = 0;
  }
  *(float *)(iVar3 + 200) = (float)param_1;
  return;
}

