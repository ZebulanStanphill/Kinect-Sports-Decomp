typedef unsigned char bool;
extern int fn_82A2BBD8();
extern int fn_82A2E260();
extern int fn_82A31620();
extern int fn_82F68CC0();


unsigned __int64 fn_82A31678(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  unsigned char *pbVar7;
  int iVar9;
  unsigned __int64 uVar8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar9 = (int)param_2;
  if (((iVar9 == 0) || (iVar9 == 1)) ||
     (uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x88), *(unsigned int *)(iVar2 + 0x88) == 0)) {
    uVar6 = 0;
    if ((param_2 & 0xffffffff) < 9) {
      bVar1 = iVar9 != 0;
      if (param_2 == 1 && bVar1) {
        RtlLeaveCriticalSection(iVar2);
      }
      else if (param_2 == 2 && bVar1) {
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x88);
        if ((*(unsigned int *)(iVar2 + 0x88) == 0) && (uVar6 = fn_82A31620(iVar2), -1 < (__int64)uVar6))
        {
          uVar6 = fn_82A2E260(iVar2,0,0xffffffffffffffff);
        }
      }
      else if (param_2 == 3 && bVar1) {
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x88);
        fn_82A2BBD8(iVar2);
      }
      else if (param_2 == 4 && bVar1) {
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x88);
        if (*(unsigned int *)(iVar2 + 0x88) == 0) {
          puVar3 = *(unsigned int **)(iVar2 + 0x80);
          *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + *(int *)(iVar2 + 0xa4);
          *(unsigned int *)(iVar2 + 0xc4) = *(unsigned int *)(iVar2 + 0xc4) & 0x7fffffff;
          *(unsigned int *)(iVar2 + 0xa8) = *(unsigned int *)(iVar2 + 0x4c) >> 0xc;
          *(unsigned int *)(iVar2 + 0xa4) = 0;
          while (puVar3 != (unsigned int *)(iVar2 + 0x80)) {
            piVar4 = puVar3 + -0x12;
            puVar3 = (unsigned int *)*puVar3;
            *(unsigned char *)(*piVar4 + 0x35) = *(unsigned char *)(*piVar4 + 0x35) & 0xdf;
          }
          uVar8 = (unsigned __int64)*(unsigned char *)(iVar2 + 200);
          if (uVar8 != 0) {
            pbVar7 = (unsigned char *)(*(int *)(iVar2 + 0x30) + -1);
            do {
              pbVar5 = pbVar7 + 8;
              pbVar7 = pbVar7 + 8;
              *pbVar7 = *pbVar5 & 0xfb;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
      }
      else if (param_2 == 5 && bVar1) {
        *param_3 = *(unsigned int *)(iVar2 + 0x8c);
      }
      else if (param_2 == 6 && bVar1) {
        *(unsigned int *)(iVar2 + 0x8c) = *param_3;
      }
      else if (param_2 == 7 && bVar1) {
        fn_82F68CC0(param_3,0xffffffff83219d04,0x28);
      }
      else if (bVar1) {
        *(unsigned int *)(iVar2 + 0xd0) = *param_3;
        *(unsigned int *)(iVar2 + 0xd4) = param_3[1];
      }
      else {
        RtlEnterCriticalSection(iVar2);
      }
    }
    else {
      uVar6 = 0xffffffffc0000010;
    }
  }
  return uVar6;
}

