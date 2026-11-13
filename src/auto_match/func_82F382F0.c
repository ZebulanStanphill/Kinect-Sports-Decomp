extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


unsigned __int64 fn_82F382F0(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int *apiStack_70 [4];
  unsigned char abStack_60 [16];
  unsigned char abStack_50 [80];
  
  uVar3 = *(unsigned int *)(param_1 + 0x70);
  pbVar8 = (unsigned char *)&lbl_8202E618;
  pbVar7 = param_2;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar7;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 != &lbl_8202E628);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    if (param_3 < uVar3) {
      *param_4 = param_3;
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffffc00d36d5;
    }
  }
  else {
    uVar9 = 0;
    uVar5 = 0xffffffffc00d36d5;
    uVar10 = 0;
    if (uVar3 != 0) {
      do {
        fn_82F377E8(param_1 + 8,uVar10,apiStack_70);
        piVar4 = (int *)*apiStack_70[0];
        if (piVar4 == (int *)0x0) {
          return 0xffffffff8000ffff;
        }
        iVar6 = (**(int (***)())(*piVar4 + 0xc))(piVar4,abStack_60);
        if (iVar6 < 0) {
          return 0xffffffffc00d36d5;
        }
        pbVar8 = abStack_60;
        pbVar7 = param_2;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar7;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (pbVar8 != abStack_50);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          if (uVar9 == param_3) {
            *param_4 = (unsigned int)uVar10;
            return 0;
          }
          uVar9 = uVar9 + 1;
        }
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (unsigned __int64)uVar3);
    }
  }
  return uVar5;
}

