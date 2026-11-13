void fn_8270A380(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3,unsigned char *param_4,unsigned char *param_5,
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
  int iVar9;
  int iVar10;
  int iVar11;
  
  bVar1 = param_2[1];
  bVar2 = param_5[2];
  bVar3 = param_5[1];
  iVar10 = (0x100 - param_7) * (0x100 - param_6);
  bVar4 = param_2[2];
  bVar5 = param_4[1];
  bVar6 = param_4[2];
  bVar7 = param_3[1];
  bVar8 = param_3[2];
  iVar9 = (0x100 - param_7) * param_6;
  iVar11 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  *param_1 = (char)((unsigned int)*param_5 * param_6 +
                    (unsigned int)*param_4 * iVar11 +
                    (unsigned int)*param_3 * iVar9 + (unsigned int)*param_2 * iVar10 + 0x8000 >> 0x10);
  param_1[1] = (char)((unsigned int)bVar3 * param_6 +
                      (unsigned int)bVar5 * iVar11 + (unsigned int)bVar7 * iVar9 + (unsigned int)bVar1 * iVar10 + 0x8000 >>
                     0x10);
  param_1[2] = (char)((unsigned int)bVar2 * param_6 +
                      (unsigned int)bVar6 * iVar11 + (unsigned int)bVar8 * iVar9 + (unsigned int)bVar4 * iVar10 + 0x8000 >>
                     0x10);
  return;
}

