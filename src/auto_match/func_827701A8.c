extern int fn_827700E8();
extern int fn_827B5330();
extern int fn_82F68918();
extern int fn_82F6B2A8();


__int64 fn_827701A8(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,__int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  if (param_3 < param_4) {
    iVar4 = param_3 * 0x28;
    do {
      iVar7 = *param_2 + iVar4;
      if (*(int *)(iVar7 + 8) == -1) {
        dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
        dVar11 = (double)(float)dVar9;
        dVar9 = (double)fn_82F68918((double)*(float *)(iVar7 + 0x10));
        dVar10 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
        dVar12 = (double)(float)dVar10;
        dVar10 = (double)fn_82F68918((double)*(float *)(iVar7 + 0x14));
        fn_827700E8(param_1 + 0x30,(int)(dVar11 - (double)(float)dVar9),
                      (int)(dVar12 - (double)(float)dVar10),param_3);
      }
      param_3 = param_3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (param_3 < param_4);
  }
  fn_827B5330(param_1 + 0x30);
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    do {
      uVar6 = 0;
      piVar5 = (int *)(*(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x70)) +
                      (uVar3 & 0xf) * 8);
      if (piVar5[1] != 0) {
        do {
          puVar8 = (unsigned int *)(*(int *)((*piVar5 + uVar6 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x60))
                           + (*piVar5 + uVar6 & 0xff) * 0xc);
          iVar4 = puVar8[2] * 0x28 + *param_2;
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar4 + 0x18));
          dVar11 = (double)(float)dVar9;
          dVar9 = (double)fn_82F68918((double)*(float *)(iVar4 + 0x10));
          dVar10 = (double)fn_82F6B2A8((double)*(float *)(iVar4 + 0x1c));
          dVar12 = (double)(float)dVar10;
          dVar10 = (double)fn_82F68918((double)*(float *)(iVar4 + 0x14));
          uVar6 = uVar6 + 1;
          *(float *)(iVar4 + 0x20) = (float)*puVar8 - *(float *)(iVar4 + 0x10);
          *(float *)(iVar4 + 0x24) = (float)puVar8[1] - *(float *)(iVar4 + 0x14);
          *(float *)(iVar4 + 0x10) = (float)*puVar8;
          *(float *)(iVar4 + 0x14) = (float)puVar8[1];
          *(float *)(iVar4 + 0x18) =
               (float)((unsigned __int64)*puVar8 +
                       ((__int64)(dVar11 - (double)(float)dVar9) & 0xffffffffU) & 0xffffffff);
          uVar1 = puVar8[1];
          *(unsigned int *)(iVar4 + 0xc) = uVar3 + (int)param_5;
          *(float *)(iVar4 + 0x1c) =
               (float)((unsigned __int64)uVar1 + ((__int64)(dVar12 - (double)(float)dVar10) & 0xffffffffU)
                      & 0xffffffff);
        } while (uVar6 < (unsigned int)piVar5[1]);
      }
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 100);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return uVar2 + param_5;
}

