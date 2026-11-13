extern int fn_82A75390();
extern int fn_82A753E8();
extern int fn_82C2B878();
extern int fn_82E34A88();
extern int fn_82E34D10();
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82E36D28(int *param_1,int *param_2,int param_3,unsigned short *param_4,int *param_5,int *param_6)

{
  unsigned short uVar1;
  unsigned short uVar2;
  short sVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar9;
  int *piVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  int iVar13;
  unsigned __int64 uVar14;
  int *piVar15;
  unsigned __int64 uVar16;
  int *piStack00000034;
  int *piStack0000003c;
  
  iVar13 = *(int *)(param_4 + 0xe);
  uVar5 = *(unsigned int *)(param_4 + 2);
  iVar6 = *param_1;
  uVar1 = param_4[7];
  uVar7 = *(unsigned int *)(param_3 + 0x10);
  uVar2 = param_4[1];
  trapWord(6,(unsigned __int64)uVar5,0);
  uVar16 = (((((__int64)*(int *)(param_4 + 4) * (__int64)iVar13 & 0x1fffffffU) * 8 +
             (unsigned __int64)uVar5) - 1 & 0x7fffffff) << 1) / (unsigned __int64)uVar5;
  piStack00000034 = param_5;
  piStack0000003c = param_6;
  uVar12 = fn_82A753E8(*param_4);
  uVar11 = fn_82A75390(*param_4);
  uVar11 = fn_82C2B878(iVar6,uVar11,uVar12,iVar13,uVar5,uVar2,uVar7,uVar1);
  piVar10 = piStack00000034;
  if (-1 < (int)uVar11) {
    *(int *)(iVar6 + 0x7c) = param_2[0xe];
    if (*(unsigned short *)(iVar6 + 0x22) < 9) {
      *(char *)(param_1 + 0x1d70) = (char)*(unsigned int *)(param_4 + 0x12);
      iVar13 = *param_2;
      param_1[5] = (unsigned int)(iVar13 != 0);
      if ((iVar13 != 0) || (iVar13 = 1, param_2[9] == 0)) {
        iVar13 = 0;
      }
      param_1[6] = iVar13;
      param_1[0x1d6d] = *piStack00000034;
      if (param_1[5] != 0) {
        param_1[9] = (unsigned int)(param_2[4] != 0);
        param_1[0x421a] = param_2[0xc];
        uVar14 = ((__int64)param_2[0xd] * (__int64)param_2[0xc] & 0xffffffffU) / 1000;
        param_1[0x4212] = (int)uVar14;
        uVar5 = *(unsigned int *)(iVar6 + 0x50);
        param_1[0x4218] = uVar5;
        param_1[0x4219] = param_1[0x421a];
        lVar9 = uVar14 * uVar5;
        *(__int64 *)(param_1 + 0x4216) = lVar9;
        *(__int64 *)(param_1 + 0x4214) = lVar9;
      }
      sVar3 = *(short *)(param_2 + 0xf);
      if ((((sVar3 == 0x160) || (sVar3 == 0x161)) || (sVar3 == 0x162)) ||
         ((sVar3 == 0x165 || (sVar3 == 0x166)))) {
        if ((param_2[0x11] == 0) ||
           (uVar14 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0x3e), uVar14 == 0)) {
          iVar13 = *(int *)(param_3 + 4);
          iVar8 = *(int *)(param_3 + 0x10);
          param_1[0x1dd3] = 1;
          param_1[0x1dd1] = iVar13 * iVar8 * 8;
          uVar5 = *(unsigned int *)(iVar6 + 0x54);
          uVar4 = *(unsigned short *)(*param_1 + 0x22);
          trapWord(6,(unsigned __int64)uVar4,0);
          trapWord(5,(unsigned __int64)uVar4 &
                     ~((((unsigned __int64)uVar5 & 0x7ffffff) << 5 | ((unsigned __int64)uVar5 & 0xfffffff) >> 0x1b
                       ) - 1),0xffff);
          param_1[0x1dd4] =
               ((int)(((unsigned __int64)uVar5 & 0xfffffff) << 4) / (int)(unsigned int)uVar4 + 500) / 1000;
        }
        else {
          trapWord(6,uVar14,0);
          if ((((unsigned __int64)(unsigned int)param_2[0x11] & 0xfffffff) << 4) / uVar14 < 0x2ee00) {
            iVar13 = *(int *)(param_3 + 4);
            iVar8 = *(int *)(param_3 + 0x10);
            param_1[0x1dd3] = 1;
            param_1[0x1dd1] = iVar13 * iVar8 * 8;
            trapWord(6,(unsigned __int64)*(unsigned short *)((int)param_2 + 0x3e),0);
            param_1[0x1dd4] =
                 (int)(((((unsigned __int64)(unsigned int)param_2[0x11] & 0xfffffff) << 4) /
                        (unsigned __int64)*(unsigned short *)((int)param_2 + 0x3e) + 500 & 0xffffffff) / 1000);
          }
          else {
            param_1[0x1dd3] = 0;
            param_1[0x1dd1] = 0;
            trapWord(6,(unsigned __int64)*(unsigned short *)((int)param_2 + 0x3e),0);
            param_1[0x1dd4] =
                 (int)(((((unsigned __int64)(unsigned int)param_2[0x11] & 0xfffffff) << 4) /
                        (unsigned __int64)*(unsigned short *)((int)param_2 + 0x3e) + 500 & 0xffffffff) / 1000);
          }
        }
      }
      else {
        param_1[0x1dd1] = 0;
        param_1[0x1dd3] = 0;
        uVar4 = *(unsigned short *)(*param_1 + 0x22);
        trapWord(6,(unsigned __int64)uVar4,0);
        uVar5 = *(unsigned int *)(iVar6 + 0x54);
        param_1[0x1dd4] =
             ((int)(((unsigned __int64)uVar5 & 0xfffffff) << 4) / (int)(unsigned int)uVar4 + 500) / 1000;
        trapWord(5,(unsigned __int64)uVar4 &
                   ~((((unsigned __int64)uVar5 & 0x7ffffff) << 5 | ((unsigned __int64)uVar5 & 0xfffffff) >> 0x1b)
                    - 1),0xffff);
      }
      param_1[0x1dd2] = param_1[0x1dd1];
      iVar13 = fn_82E34D10(param_4,param_2);
      param_1[0x1d50] = iVar13;
      param_1[0x1d89] = *(int *)(param_4 + 0x10);
      iVar13 = *(int *)(param_4 + 0x16);
      param_1[0x1d9a] = iVar13 + 1;
      param_1[0x1d8a] = iVar13;
      uVar14 = fn_82E34A88(param_4);
      piVar15 = param_1 + 0x4232;
      *piVar15 = (int)uVar14;
      if (uVar16 < (uVar14 & 0xffffffff)) {
        *piVar15 = (int)uVar14 - (int)uVar16;
      }
      else {
        *piVar15 = 0;
      }
      if (param_1[5] == 1) {
        if (piVar10[1] < 1) {
          uVar16 = ((unsigned __int64)*(unsigned int *)(param_4 + 4) & 0x1fffffff) << 3;
          trapWord(6,uVar16,0);
          param_1[0x4229] = (int)((unsigned int)(*piVar15 * 1000) / uVar16);
        }
        else {
          param_1[0x4229] = piVar10[1];
        }
      }
      param_1[0x4270] = 0;
      if ((param_2[1] == 0) || (iVar13 = 1, *param_2 == 0)) {
        iVar13 = 0;
      }
      param_1[7] = iVar13;
      if (piStack0000003c == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piStack0000003c;
      }
      param_1[4] = iVar13;
      param_1[2] = *(int *)(param_4 + 0x16) * *(int *)(param_4 + 0xe);
      param_1[0x1d74] = (*(int *)(*param_1 + 0x54) * 8 + 500) / 1000;
      *(unsigned int *)(iVar6 + 0x310) = (unsigned int)((unsigned short)param_4[0xb] >> 0xf);
      if ((2 < *(int *)(iVar6 + 0x3c)) && (*(int *)(iVar6 + 0xb0) != 0)) {
        *(unsigned int *)(iVar6 + 0x310) = 0;
      }
      if (*(int *)(iVar6 + 0x3c) < 3) {
        *(unsigned int *)(iVar6 + 0x310) = 0;
      }
      param_1[0x42c7] = 0;
      iVar13 = lbl_821AAD20;
      param_1[0x42c8] = 0;
      param_1[0x42c9] = iVar13;
      param_1[0x41d0] = 0;
    }
    else {
      uVar11 = 0xffffffff80040000;
    }
  }
  return uVar11;
}

