extern unsigned int *auStack_30;
extern int fn_82A2DDC0();


unsigned __int64 fn_82A2EEB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  unsigned int auStack_30 [12];
  unsigned int uVar11;
  
  uVar2 = fn_82A2DDC0(param_1,param_2,0,param_3,auStack_30);
  if (-1 < (int)uVar2) {
    uVar8 = *(unsigned int *)(param_1 + 0x9c) - param_2;
    if (0xaa < (uVar8 & 0xffffffff)) {
      uVar8 = 0xaa;
    }
    uVar8 = uVar8 + param_2;
    uVar6 = (unsigned __int64)*param_4;
    uVar10 = 0xffffffffffffffff;
    uVar11 = 0xffffffff;
    puVar9 = (unsigned int *)param_4[3];
    uVar7 = param_4[4];
    uVar3 = 0xffffffffffffffff;
    iVar4 = *(int *)(param_1 + 0xa0);
    if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
      puVar5 = (unsigned int *)(auStack_30[0] + 0x14);
      do {
        uVar11 = (unsigned int)param_2;
        if ((*puVar5 & 0xc0000000) == 0) {
          if ((puVar9 != (unsigned int *)0x0) &&
             (puVar9[5] = puVar9[5] & 0xff000000 | uVar11 & 0xffffff, uVar7 != 0)) {
            uVar12 = uVar7 - *(int *)(param_1 + 0x34);
            uVar7 = 0;
            iVar1 = (((int)uVar12 >> 0xc) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 0xfff) != 0)) * 8 +
                    *(int *)(param_1 + 0x30);
            *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
            param_4[4] = 0;
          }
          *puVar5 = *puVar5 | 0xc0000000;
          if ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
            uVar3 = param_2;
          }
          uVar6 = uVar6 - 1;
          puVar9 = puVar5 + -5;
          iVar4 = iVar4 + -1;
          uVar10 = param_2;
          if (uVar6 == 0) break;
        }
        uVar11 = (unsigned int)uVar10;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 6;
      } while ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *param_4 = (unsigned int)uVar6;
    *(int *)(param_1 + 0xa0) = iVar4;
    if ((uVar3 & 0xffffffff) < (unsigned __int64)param_4[1]) {
      param_4[1] = (unsigned int)uVar3;
    }
    param_4[2] = uVar11;
    uVar2 = 0;
    param_4[3] = (unsigned int)puVar9;
    param_4[4] = auStack_30[0];
  }
  return uVar2;
}

