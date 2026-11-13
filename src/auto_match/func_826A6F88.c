extern int fn_8268B610();


void fn_826A6F88(int param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned char *pbVar3;
  unsigned char *pbVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned char abStack_140 [175];
  unsigned char abStack_41 [65];
  
  pbVar5 = abStack_140;
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = *(unsigned char *)(uVar7 + param_1);
      if (abStack_41 <= pbVar5 + 4) {
        *pbVar5 = 0;
        fn_8268B610(param_3,abStack_140,0xffffffffffffffff);
        pbVar5 = abStack_140;
      }
      if (bVar1 < 0x80) {
        if ((1 << ((unsigned int)bVar1 + ((int)(unsigned int)bVar1 >> 5) * -0x20 & 0x3f) &
            *(unsigned int *)(((int)(unsigned int)bVar1 >> 5) * 4 + param_4)) == 0) goto LAB_826a7028;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
      else {
LAB_826a7028:
        uVar2 = (int)(unsigned int)bVar1 >> 4;
        *pbVar5 = 0x25;
        cVar4 = '0';
        if (9 < uVar2) {
          cVar4 = '7';
        }
        pbVar5[1] = (char)uVar2 + cVar4;
        pbVar3 = pbVar5 + 2;
        iVar6 = (unsigned int)bVar1 + ((int)(unsigned int)bVar1 >> 4) * -0x10;
        cVar4 = '0';
        if (9 < iVar6) {
          cVar4 = '7';
        }
        pbVar5 = pbVar5 + 3;
        *pbVar3 = (char)iVar6 + cVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  *pbVar5 = 0;
  fn_8268B610(param_3,abStack_140,0xffffffffffffffff);
  return;
}

