extern int fn_82A29A38();


__int64 fn_82ABAA50(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  
  puVar1 = *(unsigned int **)(param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 0x18);
  if (puVar1 == (unsigned int *)0x0) {
    fn_82A29A38();
  }
  if (iVar2 == 0) {
    fn_82A29A38();
  }
  lVar5 = 2;
  *puVar1 = 0x100;
  uVar7 = 0;
  puVar8 = puVar1 + 1;
  *puVar8 = 0x100;
  if (*(int *)(param_2 + 0x134) != 0) {
    pbVar6 = (unsigned char *)(param_2 + 0x32);
    do {
      if (0xf < pbVar6[4]) {
        fn_82A29A38();
      }
      puVar8[1] = uVar7 << 0x10 | 0x8000001a;
      uVar3 = *(unsigned int *)(pbVar6 + 2);
      if ((uVar3 & 0xf0) == 0xf0) {
        puVar8[2] = 0x55;
      }
      else {
        uVar4 = (unsigned int)((uVar3 & 0x10) != 0);
        if ((uVar3 & 0x20) != 0) {
          uVar4 = uVar4 | 4;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar4 = uVar4 | 0x10;
        }
        if ((uVar3 & 0x80) != 0) {
          uVar4 = uVar4 | 0x40;
        }
        puVar8[2] = uVar4;
      }
      pbVar6 = pbVar6 + 4;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 3;
      puVar8 = puVar8 + 3;
      *puVar8 = *pbVar6 | 0x50000;
    } while (uVar7 < *(unsigned int *)(param_2 + 0x134));
  }
  return lVar5;
}

