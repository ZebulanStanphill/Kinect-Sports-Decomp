extern unsigned int lbl_8324DBB0;


__int64 fn_82F07F68(int param_1,short *param_2,short *param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  __int64 lVar7;
  
  uVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x5b4);
  if (*(int *)(param_1 + 0x594) == 0) {
    param_4 = param_4 - (int)param_2;
    sVar4 = 1;
    lVar7 = 0x3f;
    do {
      param_2 = param_2 + 1;
      sVar6 = *(short *)(param_4 + (int)param_2);
      *param_2 = 0;
      uVar3 = (int)sVar6 >> 0x1f;
      iVar5 = ((int)sVar6 ^ uVar3) - uVar3;
      if (iVar1 << 4 <= iVar5) {
        sVar4 = sVar4 + 1;
        if (*(unsigned short *)(param_4 + (int)param_2) < 0x8000) {
          *param_2 = 1;
          if (iVar1 << 5 <= iVar5) {
            sVar6 = (short)(*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12);
            *param_2 = sVar6;
            iVar5 = *(int *)(param_1 + 0x6f84);
            if (iVar5 <= sVar6) {
LAB_82f080f0:
              *param_2 = (short)iVar5;
            }
          }
        }
        else {
          *param_2 = -1;
          if (iVar1 << 5 <= iVar5) {
            sVar6 = -(short)(*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12);
            *param_2 = sVar6;
            iVar5 = -*(int *)(param_1 + 0x6f84);
            if (sVar6 <= iVar5) goto LAB_82f080f0;
          }
        }
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *param_3 = sVar4;
  }
  else {
    *param_3 = 1;
    do {
      sVar4 = *(short *)(uVar3 * 2 + param_4);
      uVar2 = (int)sVar4 >> 0x1f;
      iVar5 = (((int)sVar4 ^ uVar2) - uVar2) + iVar1 * 8;
      if (iVar5 < iVar1 << 4) {
        param_2[uVar3] = 0;
      }
      else {
        sVar6 = *(short *)(&lbl_8324DBB0 + (*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12) * 2);
        if (sVar4 < 0) {
          sVar6 = -sVar6;
        }
        param_2[uVar3] = sVar6;
        if (sVar6 != 0) {
          *param_3 = *param_3 + 1;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x40);
    sVar4 = *param_3;
  }
  return (__int64)sVar4 + -1;
}

