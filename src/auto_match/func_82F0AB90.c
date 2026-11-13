extern unsigned int *auStack_220;
extern unsigned int *auStack_2a0;
extern int fn_82F09EE0();
extern int _blkmov();
extern unsigned int uStack_2a2;


void fn_82F0AB90(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char *pbVar8;
  unsigned short *puVar9;
  unsigned char *pbVar10;
  __int64 lVar11;
  unsigned short uStack_2a2;
  unsigned char auStack_2a0 [128];
  unsigned char auStack_220 [496];
  
  puVar9 = &uStack_2a2;
  pbVar10 = (unsigned char *)(param_1 + 2);
  lVar11 = 8;
  do {
    pbVar8 = pbVar10 + -2;
    bVar1 = pbVar10[-1];
    bVar2 = *pbVar10;
    bVar3 = pbVar10[1];
    bVar4 = pbVar10[2];
    bVar5 = pbVar10[3];
    bVar6 = pbVar10[4];
    bVar7 = pbVar10[5];
    pbVar10 = pbVar10 + param_2;
    puVar9[1] = (unsigned short)*pbVar8;
    puVar9[2] = (unsigned short)bVar1;
    puVar9[3] = (unsigned short)bVar2;
    puVar9[4] = (unsigned short)bVar3;
    puVar9[5] = (unsigned short)bVar4;
    puVar9[6] = (unsigned short)bVar5;
    puVar9[7] = (unsigned short)bVar6;
    puVar9 = puVar9 + 8;
    *puVar9 = (unsigned short)bVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  fn_82F09EE0(auStack_2a0,8,auStack_220,0);
  _blkmov(param_3,auStack_220,0x80);
  return;
}

