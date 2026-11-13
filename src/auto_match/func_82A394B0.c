extern int fn_82A3B830();
extern int fn_82A3B8B8();
extern unsigned int lbl_8208949C;


void fn_82A394B0(int param_1,int *param_2,unsigned int param_3,int param_4,int param_5,unsigned __int64 param_6)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned int *puVar12;
  
  uVar2 = (param_6 & 0xffffffff) >> 0x1f;
  param_6 = param_6 & 1;
  iVar7 = param_3 + param_4 + 0x1101;
  uVar6 = param_3 + param_4 + 0x1104 & 0xfffffffc;
  uVar5 = -(unsigned int)(param_6 != 0) & 0x26028;
  uVar4 = uVar6 + iVar7 * 8 + 0x97d30;
  uVar3 = -(unsigned int)(uVar2 != 0) & 0x9d89c;
  *param_2 = (-(unsigned int)(param_6 != 0) & 0x8000) + uVar5 + uVar3 + (-(unsigned int)(uVar2 != 0) & uVar4) +
             uVar4 + param_5;
  if (param_1 != 0) {
    puVar12 = (unsigned int *)(param_1 + param_5);
    uVar9 = 4;
    *(unsigned int *)(param_1 + param_5) = 0;
    puVar8 = puVar12 + 0x10f8;
    puVar12[0x21a] = 4;
    puVar12[1] = param_3;
    puVar12[0x25e] = param_4;
    puVar12[0x10d0] = 0;
    puVar12[0x10cd] = 0;
    puVar12[0x10ce] = 0;
    puVar12[0x10cc] = 0;
    puVar12[2] = 0;
    puVar12[0x10c9] = 0;
    puVar12[0x10ca] = 0;
    puVar12[0x94b] = 0;
    puVar12[10] = 0;
    puVar12[9] = 0;
    puVar12[0xb] = 0;
    puVar12[0x215] = 0;
    puVar12[0x10d8] = 0;
    puVar12[0x10f7] = 0;
    do {
      bVar1 = (&lbl_8208949C)[puVar12[0x21a]];
      puVar12[0x21a] = puVar12[0x21a] + 1;
      uVar9 = (1 << (bVar1 & 0x3f)) + uVar9;
    } while (uVar9 < param_3);
    puVar10 = puVar8 + iVar7;
    puVar12[0x10c9] = puVar8;
    puVar12[0x10ca] = puVar10;
    puVar12[0x10c8] = puVar10 + iVar7;
    iVar7 = (int)(puVar10 + iVar7) + uVar6;
    puVar12[10] = iVar7;
    *puVar12 = puVar12[0x10c8];
    puVar12[9] = iVar7 + 0x10000;
    puVar12[0xb] = iVar7 + 0x30000;
    fn_82A3B830(puVar12);
    fn_82A3B8B8(puVar12);
    puVar12[0x215] = iVar7 + 0x32000;
    puVar12[0x94b] = iVar7 + 0x3b800;
    puVar12[2] = iVar7 + 0x53950;
    iVar11 = iVar7 + 0x93950;
    puVar12[0x216] = iVar7 + 0x32000;
    puVar12[0x217] = iVar7 + 0x3b7c0;
    if (param_6 == 0) {
      if (uVar2 != 0) {
        puVar12[0x10d8] = iVar11;
        puVar12[0x10f7] = iVar11 + uVar3;
      }
    }
    else {
      puVar12[0x10d3] = uVar5;
      puVar12[0x10d2] = iVar11;
      puVar12[0x10d5] = 0;
      puVar12[0x10d7] = 0;
      puVar12[0x10d6] = iVar11 + uVar5;
      *(unsigned char *)(puVar12 + 0x10da) = 1;
    }
    puVar12[0x10f6] = uVar4;
    *(unsigned char *)(puVar12 + 0x21c) = 1;
  }
  return;
}

