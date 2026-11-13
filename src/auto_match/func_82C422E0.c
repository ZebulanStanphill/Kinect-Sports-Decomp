extern int fn_82C421D8();


void fn_82C422E0(unsigned __int64 param_1,int *param_2,int param_3,unsigned __int64 param_4,int param_5,
                  int param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar2 = (__int64)param_5;
  lVar3 = (__int64)param_6;
  iVar8 = (int)((lVar3 * lVar2 >> 0x1e & 0xffffffffU) << 1);
  iVar6 = 0x3fffffff - (int)((lVar2 * lVar2 >> 0x1e & 0xffffffffU) << 1);
  iVar4 = (int)(iVar8 * lVar3 >> 0x1e) + (int)(iVar6 * lVar2 >> 0x1e);
  iVar7 = (int)(iVar6 * lVar3 >> 0x1e) - (int)(iVar8 * lVar2 >> 0x1e);
  lVar3 = (__int64)(iVar7 - iVar4);
  iVar11 = (int)((__int64)(param_6 - param_5) * (__int64)param_2[2] >> 0x1e) +
           (int)((__int64)(param_5 + param_6) * (__int64)param_2[3] >> 0x1e);
  iVar5 = (int)((__int64)param_2[2] * (__int64)(param_5 + param_6) >> 0x1e) -
          (int)((__int64)(param_6 - param_5) * (__int64)param_2[3] >> 0x1e);
  iVar10 = (int)((__int64)*param_2 * (__int64)(iVar6 - iVar8) >> 0x1e) +
           (int)((__int64)param_2[1] * (__int64)(iVar6 + iVar8) >> 0x1e);
  lVar2 = (__int64)(iVar7 + iVar4);
  iVar6 = (int)((__int64)*param_2 * (__int64)(iVar6 + iVar8) >> 0x1e) -
          (int)((__int64)param_2[1] * (__int64)(iVar6 - iVar8) >> 0x1e);
  iVar7 = param_2[6] - param_2[7];
  iVar8 = (int)(param_2[4] * lVar2 >> 0x1e) - (int)(param_2[5] * lVar3 >> 0x1e);
  iVar4 = param_2[6] + param_2[7];
  iVar9 = (int)(param_2[4] * lVar3 >> 0x1e) + (int)(param_2[5] * lVar2 >> 0x1e);
  uVar1 = fn_82C421D8(iVar4 + iVar9 + iVar10 + iVar11 >> 1,iVar7 + iVar8 + iVar6 + iVar5 >> 1);
  *(unsigned int *)((int)((param_1 & 0xffffffff) << 2) + param_3) = uVar1;
  uVar1 = fn_82C421D8(((iVar4 - iVar8) - iVar10) + iVar5 >> 1,
                        ((iVar6 - iVar7) - iVar9) + iVar11 >> 1);
  *(unsigned int *)((int)((param_4 - param_1 & 0xffffffff) << 2) + param_3) = uVar1;
  uVar1 = fn_82C421D8(((iVar4 - iVar10) - iVar5) + iVar8 >> 1,
                        ((iVar7 - iVar9) - iVar6) + iVar11 >> 1);
  *(unsigned int *)((int)((param_1 + param_4 & 0xffffffff) << 2) + param_3) = uVar1;
  uVar1 = fn_82C421D8(((iVar8 - iVar7) - iVar6) + iVar5 >> 1,
                        ((iVar4 - iVar9) - iVar11) + iVar10 >> 1);
  *(unsigned int *)((int)(((param_4 & 0x7fffffff) * 2 - param_1 & 0xffffffff) << 2) + param_3) = uVar1
  ;
  return;
}

