extern unsigned int uStack_50;


void fn_82CA60E0(int param_1,unsigned char *param_2,int param_3,unsigned int *param_4,int param_5,int param_6,
                  int param_7)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  unsigned short *puVar8;
  unsigned short uStack_50;
  unsigned char bStack_4e;
  unsigned char bStack_4d;
  unsigned char bStack_4c;
  unsigned char bStack_4b;
  
  bStack_4e = 0;
  if (param_5 == 0) {
    uStack_50 = *(unsigned short *)(param_3 + -2);
  }
  else {
    uStack_50 = 0;
  }
  if (param_7 == 0) {
    puVar8 = (unsigned short *)(param_3 + *(int *)(param_1 + 0x158) * -2);
    uVar1 = *puVar8;
    if (param_6 == 0) {
      uVar2 = puVar8[1];
      bStack_4d = (unsigned char)uVar2;
      bStack_4e = (unsigned char)((unsigned short)uVar2 >> 8);
    }
    else {
      bStack_4d = 0;
    }
    bStack_4c = (unsigned char)((unsigned short)uVar1 >> 8);
    bStack_4b = (unsigned char)uVar1;
    bVar4 = (unsigned char)((unsigned int)((int)(char)bStack_4c - (int)(char)(((unsigned __int64)(uStack_50) >> 0) & 0xFF)) >> 0x18);
    bVar3 = (unsigned char)((unsigned int)((int)(char)bStack_4c - (int)(char)bStack_4e) >> 0x18) ^ bVar4;
    bVar4 = (unsigned char)((unsigned int)((int)(char)bStack_4e - (int)(char)(((unsigned __int64)(uStack_50) >> 0) & 0xFF)) >> 0x18) ^ bVar4;
    bVar6 = (unsigned char)((unsigned int)((int)(char)bStack_4b - (int)(char)(unsigned char)uStack_50) >> 0x18);
    bVar5 = (unsigned char)((unsigned int)((int)(char)bStack_4b - (int)(char)bStack_4d) >> 0x18) ^ bVar6;
    bVar6 = (unsigned char)((unsigned int)((int)(char)bStack_4d - (int)(char)(unsigned char)uStack_50) >> 0x18) ^ bVar6;
    *param_2 = bStack_4e & ~((char)(bVar3 | bVar4) >> 7) | (char)bVar4 >> 7 & (((unsigned __int64)(uStack_50) >> 0) & 0xFF) |
               (char)bVar3 >> 7 & bStack_4c;
    param_2[1] = bStack_4d & ~((char)(bVar5 | bVar6) >> 7) | (char)bVar5 >> 7 & bStack_4b |
                 (char)bVar6 >> 7 & (unsigned char)uStack_50;
    uVar7 = *param_4 >> 0x12 & 3;
    if (uVar7 != 2) {
      if (uVar7 != 0) {
        uStack_50 = uVar1;
      }
      *(unsigned short *)param_2 = uStack_50;
    }
  }
  else {
    *(unsigned short *)param_2 = uStack_50;
  }
  return;
}

