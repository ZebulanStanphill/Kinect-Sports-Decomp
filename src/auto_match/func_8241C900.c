extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82F64988();
extern unsigned int ltcg_pool_0_0f;


void fn_8241C900(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  double dVar12;
  
  iVar2 = param_1[2];
  uVar10 = 0;
  uVar7 = 0;
  if ((param_1[3] - iVar2) / 0x1ac != 0) {
    iVar11 = 0;
    iVar9 = 0;
    dVar12 = (double)ltcg_pool_0_0f;
    do {
      piVar4 = (int *)param_1[1];
      if (piVar4 != (int *)0x0) {
        (**(int (***)())(*piVar4 + 0x38))(piVar4,iVar9 + iVar2,uVar10,param_2);
      }
      piVar4 = (int *)(iVar9 + param_1[2]);
      iVar2 = **(int **)(*param_1 + 8);
      if (*piVar4 < (*(int **)(*param_1 + 8))[1] - iVar2 >> 2) {
        piVar1 = *(int **)(*piVar4 * 4 + iVar2);
        iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
        if (*(int *)(iVar2 + 8) == 0) goto LAB_8241c9e4;
        iVar2 = fn_822ABA88(iVar2,0);
      }
      else {
LAB_8241c9e4:
        iVar2 = 0;
      }
      iVar8 = 0;
      if (*(int *)(iVar2 + 0x74) != 0) {
        iVar8 = ((unsigned int)LZCOUNT((unsigned int)*(unsigned char *)(*(int *)(iVar2 + 0x74) + 0xd8)) >> 5) + 1;
      }
      uVar7 = piVar4[0xc];
      iVar6 = iVar11 + *param_2;
      *(unsigned int *)(*param_2 + 0xa78) = 1;
      *(float *)(iVar6 + 0xa94) = (float)uVar7;
      *(float *)(iVar6 + 0xa90) = (float)dVar12;
      *(unsigned int *)(iVar6 + 0xa88) = 1;
      *(unsigned int *)(iVar6 + 0xa8c) = 0;
      *(unsigned int *)(iVar6 + 0xa98) = 0;
      iVar6 = *param_2;
      fn_822B67F8(iVar2);
      uVar3 = fn_822B98A8();
      *(unsigned int *)(iVar6 + 0xa78) = 1;
      iVar6 = iVar11 + iVar6;
      fn_82F64988(iVar6 + 0xaa8,0x20,iVar2 + 0x30);
      *(float *)(iVar6 + 0xae8) = (float)dVar12;
      *(float *)(iVar6 + 0xaf4) = (float)dVar12;
      *(unsigned int *)(iVar6 + 0xaa0) = uVar3;
      *(int *)(iVar6 + 0xaa4) = iVar8;
      uVar10 = uVar10 + 1;
      *(unsigned int *)(iVar6 + 0xaec) = 0;
      iVar9 = iVar9 + 0x1ac;
      *(unsigned int *)(iVar6 + 0xaf0) = 0;
      iVar11 = iVar11 + 0xdc;
      *(unsigned int *)(iVar6 + 0xaf8) = 0;
      *(unsigned int *)(iVar6 + 0xafc) = 0;
      *(unsigned int *)(iVar6 + 0xa9c) = 1;
      iVar2 = param_1[2];
      uVar7 = (param_1[3] - iVar2) / 0x1ac;
    } while ((uVar10 & 0xffffffff) < (unsigned __int64)uVar7);
  }
  if (param_3 != 0) {
    iVar2 = *param_2;
    uVar5 = param_1[6] + 1;
    *(int *)(iVar2 + 0xa7c) = param_1[6];
    *(unsigned int *)(iVar2 + 0xa80) = uVar5 - (uVar5 / uVar7) * uVar7;
  }
  return;
}

