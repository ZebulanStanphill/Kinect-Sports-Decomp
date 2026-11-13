extern int memcpy();
extern unsigned int lbl_820A8C18;
extern unsigned int lbl_820A8D18;


unsigned __int64
fn_82A6C470(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  
  if (1 < (int)param_3) {
    iVar9 = 0;
    if (0 < (__int64)(param_3 - 1)) {
      iVar7 = (int)(param_3 - 1);
      iVar11 = iVar7 * param_4;
      lVar8 = (param_3 & 0x3fffffff) << 2;
      iVar12 = 0;
      iVar10 = param_2;
      do {
        iVar2 = *(char *)(iVar9 + param_1) * 4;
        iVar1 = *(int *)(&lbl_820A8C18 + iVar2);
        iVar2 = *(int *)(&lbl_820A8D18 + iVar2);
        memcpy(param_5,iVar10,lVar8);
        memcpy(param_6,iVar11 * 4 + param_2,lVar8);
        iVar5 = 0;
        if (0 < (int)param_3) {
          uVar14 = param_3;
          piVar6 = param_6;
          do {
            iVar4 = iVar12 + iVar5;
            iVar13 = iVar11 + iVar5;
            iVar5 = iVar5 + 1;
            *(int *)(iVar4 * 4 + param_2) =
                 (int)((__int64)*(int *)((param_5 - (int)param_6) + (int)piVar6) * (__int64)iVar1
                      >> 0x1e) + (int)((__int64)*piVar6 * (__int64)iVar2 >> 0x1e);
            piVar3 = (int *)((param_5 - (int)param_6) + (int)piVar6);
            iVar4 = *piVar6;
            piVar6 = piVar6 + 1;
            *(int *)(iVar13 * 4 + param_2) =
                 (int)((__int64)iVar4 * (__int64)iVar1 >> 0x1e) +
                 (int)((__int64)*piVar3 * (__int64)-iVar2 >> 0x1e);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        iVar9 = iVar9 + 1;
        iVar12 = iVar12 + param_4;
        iVar10 = param_4 * 4 + iVar10;
      } while (iVar9 < iVar7);
    }
  }
  return 0;
}

