void fn_8270A258(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3,unsigned char *param_4,unsigned char *param_5,
                  int param_6,int param_7)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  bVar1 = param_2[2];
  bVar2 = param_4[2];
  bVar3 = param_4[3];
  iVar14 = (0x100 - param_7) * (0x100 - param_6);
  bVar4 = param_4[1];
  bVar5 = param_5[1];
  bVar6 = param_5[2];
  bVar7 = param_3[1];
  bVar8 = param_3[3];
  bVar9 = param_5[3];
  bVar10 = param_3[2];
  bVar11 = param_2[1];
  bVar12 = param_2[3];
  iVar13 = (0x100 - param_7) * param_6;
  iVar15 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  *param_1 = (char)((unsigned int)*param_5 * param_6 +
                    (unsigned int)*param_4 * iVar15 +
                    (unsigned int)*param_3 * iVar13 + (unsigned int)*param_2 * iVar14 + 0x8000 >> 0x10);
  param_1[1] = (char)((unsigned int)bVar5 * param_6 +
                      (unsigned int)bVar4 * iVar15 + (unsigned int)bVar7 * iVar13 + (unsigned int)bVar11 * iVar14 + 0x8000
                     >> 0x10);
  param_1[2] = (char)((unsigned int)bVar6 * param_6 +
                      (unsigned int)bVar2 * iVar15 + (unsigned int)bVar10 * iVar13 + (unsigned int)bVar1 * iVar14 + 0x8000
                     >> 0x10);
  param_1[3] = (char)((unsigned int)bVar9 * param_6 +
                      (unsigned int)bVar3 * iVar15 + (unsigned int)bVar8 * iVar13 + (unsigned int)bVar12 * iVar14 + 0x8000
                     >> 0x10);
  return;
}

