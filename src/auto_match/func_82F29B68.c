extern unsigned int iStack_d4;


void fn_82F29B68(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6,
                  unsigned __int64 param_7,int param_8)

{
  unsigned char bVar1;
  short sVar2;
  short sVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  unsigned char *puVar7;
  int *piVar8;
  unsigned char *pbVar9;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int in_stack_00000054;
  int iStack_d4;
  int aiStack_d0 [52];
  
  iVar5 = (param_5 & 3) * 4;
  iVar6 = (param_6 & 3) * 4;
  lVar12 = (unsigned __int64)in_stack_00000054 + 1;
  param_1 = param_1 - param_3;
  lVar11 = 8;
  do {
    if (0 < (int)lVar12) {
      sVar2 = *(short *)(iVar5 + -0x7ce46626);
      sVar3 = *(short *)(iVar5 + -0x7ce46628);
      piVar8 = &iStack_d4;
      pbVar9 = (unsigned char *)(param_1 + param_3);
      lVar13 = lVar12;
      do {
        pbVar4 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + param_2;
        piVar8 = piVar8 + 1;
        *piVar8 = (unsigned int)*pbVar4 * (int)sVar2 + (unsigned int)bVar1 * (int)sVar3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (0 < (int)in_stack_00000054) {
      puVar7 = (unsigned char *)(param_3 - param_4);
      piVar8 = aiStack_d0;
      uVar14 = (unsigned __int64)in_stack_00000054;
      do {
        iVar10 = (((int)*(short *)(iVar6 + -0x7ce46626) * piVar8[1] +
                  (int)*(short *)(iVar6 + -0x7ce46628) * *piVar8) - param_8) + 8 >> 4;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        piVar8 = piVar8 + 1;
        puVar7 = puVar7 + param_4;
        *puVar7 = (char)iVar10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    lVar11 = lVar11 + -1;
    param_3 = param_3 + 1;
  } while (lVar11 != 0);
  return;
}

