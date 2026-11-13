extern unsigned int RtlCompareMemoryUlong(void *, unsigned int, unsigned int);

unsigned short * fn_82A26C08(int param_1,unsigned short *param_2,int *param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned short *puVar7;
  
  puVar7 = param_2 + (unsigned int)param_2[1] * -8;
  if (puVar7 != param_2) {
    if (((*(unsigned char *)((int)puVar7 + 5) & 1) == 0) && ((unsigned int)*puVar7 + *param_3 <= 0xf000)) {
      if (param_4 != 0) {
        puVar3 = *(unsigned int **)(param_2 + 6);
        puVar4 = *(unsigned int **)(param_2 + 4);
        if (((unsigned short *)*puVar3 == (unsigned short *)puVar4[1]) && ((unsigned short *)*puVar3 == param_2 + 4)) {
          *puVar3 = puVar4;
          puVar4[1] = puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *param_2;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(unsigned int *)(iVar5 + param_1);
            }
          }
        }
        if ((*(unsigned char *)((int)param_2 + 5) & 4) != 0) {
          uVar6 = (unsigned int)*param_2 * 0x10 - 0x18;
          if (((*(unsigned char *)((int)param_2 + 5) & 2) != 0) && (uVar6 > 4)) {
            uVar6 = uVar6 - 4;
          }
          RtlCompareMemoryUlong(param_2 + 0xc,uVar6,0xfeeefeee);
        }
        param_4 = 0;
        *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*param_2;
      }
      puVar3 = *(unsigned int **)(puVar7 + 6);
      puVar4 = *(unsigned int **)(puVar7 + 4);
      if (((unsigned short *)*puVar3 == (unsigned short *)puVar4[1]) && ((unsigned short *)*puVar3 == puVar7 + 4)) {
        *puVar3 = puVar4;
        puVar4[1] = puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(unsigned int *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(unsigned int *)(iVar5 + param_1);
          }
        }
      }
      if ((*(unsigned char *)((int)puVar7 + 5) & 4) != 0) {
        uVar6 = (unsigned int)*puVar7 * 0x10 - 0x18;
        if (((*(unsigned char *)((int)puVar7 + 5) & 2) != 0) && (uVar6 > 4)) {
          uVar6 = uVar6 - 4;
        }
        RtlCompareMemoryUlong(puVar7 + 0xc,uVar6,0xfeeefeee);
      }
      bVar1 = *(unsigned char *)((int)param_2 + 5);
      *(unsigned char *)((int)puVar7 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(unsigned short **)(*(int *)((*(unsigned char *)(puVar7 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar7;
      }
      *param_3 = (unsigned int)*puVar7 + *param_3;
      *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*puVar7;
      *puVar7 = (unsigned short)*param_3;
      param_2 = puVar7;
      if ((*(unsigned char *)((int)puVar7 + 5) & 0x10) == 0) {
        puVar7[*param_3 * 8 + 1] = (unsigned short)*param_3;
      }
    }
  }
  if ((*(unsigned char *)((int)param_2 + 5) & 0x10) == 0) {
    puVar7 = param_2 + *param_3 * 8;
    if (((*(unsigned char *)((int)puVar7 + 5) & 1) == 0) && ((unsigned int)*puVar7 + *param_3 <= 0xf000)) {
      if (param_4 != 0) {
        puVar3 = *(unsigned int **)(param_2 + 6);
        puVar4 = *(unsigned int **)(param_2 + 4);
        if (((unsigned short *)*puVar3 == (unsigned short *)puVar4[1]) && ((unsigned short *)*puVar3 == param_2 + 4)) {
          *puVar3 = puVar4;
          puVar4[1] = puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *param_2;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(unsigned int *)(iVar5 + param_1);
            }
          }
        }
        if ((*(unsigned char *)((int)param_2 + 5) & 4) != 0) {
          uVar6 = (unsigned int)*param_2 * 0x10 - 0x18;
          if (((*(unsigned char *)((int)param_2 + 5) & 2) != 0) && (uVar6 > 4)) {
            uVar6 = uVar6 - 4;
          }
          RtlCompareMemoryUlong(param_2 + 0xc,uVar6,0xfeeefeee);
        }
        *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*param_2;
      }
      bVar1 = *(unsigned char *)((int)puVar7 + 5);
      *(unsigned char *)((int)param_2 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(unsigned short **)(*(int *)((*(unsigned char *)(param_2 + 2) + 0x18) * 4 + param_1) + 0x40) = param_2;
      }
      puVar3 = *(unsigned int **)(puVar7 + 6);
      puVar4 = *(unsigned int **)(puVar7 + 4);
      if (((unsigned short *)*puVar3 == (unsigned short *)puVar4[1]) && ((unsigned short *)*puVar3 == puVar7 + 4)) {
        *puVar3 = puVar4;
        puVar4[1] = puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(unsigned int *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(unsigned int *)(iVar5 + param_1);
          }
        }
      }
      if ((*(unsigned char *)((int)puVar7 + 5) & 4) != 0) {
        uVar6 = (unsigned int)*puVar7 * 0x10 - 0x18;
        if (((*(unsigned char *)((int)puVar7 + 5) & 2) != 0) && (uVar6 > 4)) {
          uVar6 = uVar6 - 4;
        }
        RtlCompareMemoryUlong(puVar7 + 0xc,uVar6,0xfeeefeee);
      }
      *param_3 = (unsigned int)*puVar7 + *param_3;
      *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*puVar7;
      *param_2 = (unsigned short)*param_3;
      if ((*(unsigned char *)((int)param_2 + 5) & 0x10) == 0) {
        param_2[*param_3 * 8 + 1] = (unsigned short)*param_3;
      }
    }
  }
  return param_2;
}

