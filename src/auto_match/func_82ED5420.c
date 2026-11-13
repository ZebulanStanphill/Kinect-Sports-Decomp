void fn_82ED5420(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  short *psVar5;
  short *psVar6;
  unsigned char *pbVar7;
  short *psVar8;
  unsigned char *pbVar9;
  __int64 lVar10;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  psVar8 = (short *)(in_stack_0000005c + -2);
  pbVar1 = (unsigned char *)(param_7 + -1);
  lVar10 = 8;
  psVar5 = (short *)(in_stack_00000054 + 4);
  pbVar9 = (unsigned char *)(param_4 + -1);
  pbVar2 = (unsigned char *)(param_6 + -1);
  psVar6 = (short *)(param_8 + -2);
  pbVar3 = (unsigned char *)(param_5 + -1);
  pbVar4 = (unsigned char *)(param_3 + 2);
  pbVar7 = (unsigned char *)(param_2 + 2);
  do {
    psVar6[1] = (unsigned short)pbVar7[-2] - (unsigned short)pbVar7[(param_5 - param_2) + -2];
    psVar6[2] = (unsigned short)pbVar7[-1] - (unsigned short)pbVar3[2];
    psVar6[3] = (unsigned short)*pbVar7 - (unsigned short)pbVar3[3];
    psVar6[4] = (unsigned short)pbVar7[1] - (unsigned short)pbVar3[4];
    psVar6[5] = (unsigned short)pbVar7[2] - (unsigned short)pbVar3[5];
    psVar6[6] = (unsigned short)pbVar7[3] - (unsigned short)pbVar3[6];
    psVar6[7] = (unsigned short)pbVar7[4] - (unsigned short)pbVar3[7];
    psVar6[8] = (unsigned short)pbVar7[5] - (unsigned short)pbVar3[8];
    psVar6[9] = (unsigned short)pbVar7[6] - (unsigned short)pbVar3[9];
    psVar6[10] = (unsigned short)pbVar7[7] - (unsigned short)pbVar3[10];
    psVar6[0xb] = (unsigned short)pbVar7[8] - (unsigned short)pbVar3[0xb];
    psVar6[0xc] = (unsigned short)pbVar7[9] - (unsigned short)pbVar3[0xc];
    psVar6[0xd] = (unsigned short)pbVar7[10] - (unsigned short)pbVar3[0xd];
    psVar6[0xe] = (unsigned short)pbVar7[0xb] - (unsigned short)pbVar3[0xe];
    psVar6[0xf] = (unsigned short)pbVar7[0xc] - (unsigned short)pbVar3[0xf];
    psVar6[0x10] = (unsigned short)pbVar7[0xd] - (unsigned short)pbVar3[0x10];
    psVar6[0x11] = (unsigned short)pbVar7[0xe] - (unsigned short)pbVar3[0x11];
    psVar6[0x12] = (unsigned short)pbVar7[0xf] - (unsigned short)pbVar3[0x12];
    psVar6[0x13] = (unsigned short)pbVar7[0x10] - (unsigned short)pbVar3[0x13];
    psVar6[0x14] = (unsigned short)pbVar7[0x11] - (unsigned short)pbVar3[0x14];
    psVar6[0x15] = (unsigned short)pbVar7[0x12] - (unsigned short)pbVar3[0x15];
    psVar6[0x16] = (unsigned short)pbVar7[0x13] - (unsigned short)pbVar3[0x16];
    psVar6[0x17] = (unsigned short)pbVar7[0x14] - (unsigned short)pbVar3[0x17];
    psVar6[0x18] = (unsigned short)pbVar7[0x15] - (unsigned short)pbVar3[0x18];
    psVar6[0x19] = (unsigned short)pbVar7[0x16] - (unsigned short)pbVar3[0x19];
    psVar6[0x1a] = (unsigned short)pbVar7[0x17] - (unsigned short)pbVar3[0x1a];
    psVar6[0x1b] = (unsigned short)pbVar7[0x18] - (unsigned short)pbVar3[0x1b];
    psVar6[0x1c] = (unsigned short)pbVar7[0x19] - (unsigned short)pbVar3[0x1c];
    psVar6[0x1d] = (unsigned short)pbVar7[0x1a] - (unsigned short)pbVar3[0x1d];
    psVar6[0x1e] = (unsigned short)pbVar7[0x1b] - (unsigned short)pbVar3[0x1e];
    psVar6[0x1f] = (unsigned short)pbVar7[0x1c] - (unsigned short)pbVar3[0x1f];
    pbVar3 = pbVar3 + 0x20;
    psVar6 = psVar6 + 0x20;
    *psVar6 = (unsigned short)pbVar7[0x1d] - (unsigned short)*pbVar3;
    psVar5[-2] = (unsigned short)pbVar4[-2] - (unsigned short)pbVar2[1];
    psVar5[-1] = (unsigned short)pbVar4[-1] - (unsigned short)pbVar2[2];
    *psVar5 = (unsigned short)*pbVar4 - (unsigned short)pbVar2[3];
    psVar5[1] = (unsigned short)pbVar4[1] - (unsigned short)pbVar2[4];
    psVar5[2] = (unsigned short)pbVar4[2] - (unsigned short)pbVar2[5];
    psVar5[3] = (unsigned short)pbVar4[3] - (unsigned short)pbVar2[6];
    psVar5[4] = (unsigned short)pbVar4[4] - (unsigned short)pbVar2[7];
    pbVar2 = pbVar2 + 8;
    psVar5[5] = (unsigned short)pbVar4[5] - (unsigned short)*pbVar2;
    pbVar7 = pbVar7 + 0x20;
    *(unsigned short *)((in_stack_0000005c - in_stack_00000054) + -4 + (int)psVar5) =
         (unsigned short)pbVar4[(param_4 - param_3) + -2] - (unsigned short)pbVar1[1];
    psVar5 = psVar5 + 8;
    pbVar4 = pbVar4 + 8;
    psVar8[2] = (unsigned short)pbVar9[2] - (unsigned short)pbVar1[2];
    psVar8[3] = (unsigned short)pbVar9[3] - (unsigned short)pbVar1[3];
    psVar8[4] = (unsigned short)pbVar9[4] - (unsigned short)pbVar1[4];
    psVar8[5] = (unsigned short)pbVar9[5] - (unsigned short)pbVar1[5];
    psVar8[6] = (unsigned short)pbVar9[6] - (unsigned short)pbVar1[6];
    psVar8[7] = (unsigned short)pbVar9[7] - (unsigned short)pbVar1[7];
    pbVar1 = pbVar1 + 8;
    pbVar9 = pbVar9 + 8;
    psVar8 = psVar8 + 8;
    *psVar8 = (unsigned short)*pbVar9 - (unsigned short)*pbVar1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

