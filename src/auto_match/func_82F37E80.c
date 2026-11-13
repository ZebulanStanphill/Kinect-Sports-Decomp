extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


unsigned __int64 fn_82F37E80(int param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int *apiStack_60 [4];
  unsigned char abStack_50 [16];
  unsigned char abStack_40 [64];
  
  if (param_3 == (unsigned int *)0x0) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x70);
    pbVar7 = (unsigned char *)&lbl_8202E618;
    pbVar6 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_8202E628);
    uVar5 = 0;
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      *param_3 = uVar3;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          fn_82F377E8(param_1 + 8,uVar9,apiStack_60);
          piVar4 = (int *)*apiStack_60[0];
          if (piVar4 == (int *)0x0) {
            uVar5 = 0xffffffff8000ffff;
            break;
          }
          uVar5 = (**(int (***)())(*piVar4 + 0xc))(piVar4,abStack_50);
          if ((int)uVar5 < 0) break;
          pbVar7 = abStack_50;
          pbVar6 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar6;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar7 != abStack_40);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            uVar8 = uVar8 + 1;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (unsigned __int64)uVar3);
      }
      *param_3 = uVar8;
    }
  }
  return uVar5;
}

