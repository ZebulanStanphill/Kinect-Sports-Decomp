extern unsigned int iStack_d4;
extern unsigned int lbl_82111130;
extern unsigned int lbl_82111132;


void fn_82CDB2B8(unsigned __int64 param_1, int param_2, int param_3, int param_4, int param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 unused_arg_8, int in_stack_00000054, unsigned int in_stack_0000005c)

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
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;


  int iStack_d4;
  int aiStack_d0 [52];
  
  iVar5 = (param_6 & 3) * 4;
  iVar6 = (param_7 & 3) * 4;
  uVar12 = (unsigned __int64)in_stack_0000005c + 1;
  if ((uVar12 & 0xffffffff) < 0x22) {
    param_2 = param_2 - param_4;
    lVar11 = 4;
    do {
      if (0 < (int)uVar12) {
        sVar2 = *(short *)(&lbl_82111132 + iVar5);
        sVar3 = *(short *)(&lbl_82111130 + iVar5);
        piVar8 = &iStack_d4;
        pbVar9 = (unsigned char *)(param_2 + param_4);
        uVar13 = uVar12;
        do {
          pbVar4 = pbVar9 + 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + param_3;
          piVar8 = piVar8 + 1;
          *piVar8 = (unsigned int)*pbVar4 * (int)sVar2 + (unsigned int)bVar1 * (int)sVar3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (0 < (int)in_stack_0000005c) {
        puVar7 = (unsigned char *)(param_4 - param_5);
        piVar8 = aiStack_d0;
        uVar13 = (unsigned __int64)in_stack_0000005c;
        do {
          iVar10 = (((int)*(short *)(&lbl_82111132 + iVar6) * piVar8[1] +
                    (int)*(short *)(&lbl_82111130 + iVar6) * *piVar8) - in_stack_00000054) + 8 >> 4;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          piVar8 = piVar8 + 1;
          puVar7 = puVar7 + param_5;
          *puVar7 = (char)iVar10;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar11 = lVar11 + -1;
      param_4 = param_4 + 1;
    } while (lVar11 != 0);
  }
  return;
}

