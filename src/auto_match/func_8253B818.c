extern unsigned int stack0x00000000;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int stack0x00000060;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_8253B818(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_r0;
  float *pfVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  uStack00000010 = param_1;
  uStack00000020 = param_3;
  uStack00000030 = param_5;
  uStack00000040 = param_7;
  uStack00000028 = param_4;
  uStack00000038 = param_6;
  uStack00000048 = param_8;
  iVar6 = 0;
  uStack00000018 = param_2;
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000040 + in_r0) & 0xfffffff0);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  puVar1 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar1 = (unsigned int *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  do {
    iVar7 = 0;
    pfVar5 = (float *)(&stack0x00000000 + iVar6);
    lVar8 = 3;
    do {
      pfVar5 = pfVar5 + 4;
      fVar2 = *(float *)(&stack0x00000050 + iVar7) * *pfVar5;
      fVar3 = *(float *)(&stack0x00000060 + iVar7) * *pfVar5;
      iVar7 = iVar7 + 4;
      fVar4 = fVar2;
      if (fVar2 - fVar3 < 0.0) {
        fVar4 = fVar3;
        fVar3 = fVar2;
      }
      *(float *)(iVar6 + in_stack_00000074) = fVar3 + *(float *)(iVar6 + in_stack_00000074);
      *(float *)((int)&stack0x00000010 +
                (in_stack_0000007c - (int)&stack0x00000010) + iVar6 + 0x10 + -0x10) =
           fVar4 + *(float *)((int)&stack0x00000010 +
                             (in_stack_0000007c - (int)&stack0x00000010) + iVar6 + 0x10 + -0x10);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xc);
  return;
}

