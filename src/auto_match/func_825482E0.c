extern unsigned int *auStack_60;
extern int fn_82547CF0();
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern unsigned int uStack_69;
extern unsigned int uStack_6a;


unsigned __int64 fn_825482E0(int param_1,int param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned char abStack_70 [6];
  unsigned char uStack_6a;
  unsigned char uStack_69;
  unsigned char uStack_68;
  unsigned char uStack_67;
  unsigned char uStack_66;
  unsigned char uStack_65;
  unsigned int auStack_60 [24];
  
  auStack_60[0] = 0;
  auStack_60[1] = 1;
  auStack_60[2] = 2;
  auStack_60[3] = 3;
  iVar12 = fn_82547CF0((int)param_3 >> 2,0,param_2 >> 2,0x10);
  param_1 = iVar12 * 0x10 + param_1;
  uVar1 = *(unsigned short *)(param_1 + 8);
  uVar2 = *(unsigned short *)(param_1 + 10);
  uVar3 = (unsigned int)(uVar1 >> 8);
  uVar4 = (unsigned int)(uVar1 >> 3);
  uVar5 = (unsigned int)(uVar2 >> 8);
  abStack_70[0] = (unsigned char)(uVar3 & 0xfffff8);
  uVar6 = (unsigned int)(uVar2 >> 3);
  abStack_70[1] = (char)(uVar4 & 0xfc);
  uVar10 = (unsigned __int64)uVar1 & 0x1f;
  lVar8 = uVar10 << 3;
  abStack_70[3] = (char)(uVar5 & 0xfffff8);
  uVar11 = (unsigned __int64)uVar2 & 0x1f;
  lVar9 = uVar11 << 3;
  abStack_70[4] = (char)(uVar6 & 0xfc);
  abStack_70[2] = (char)lVar8;
  abStack_70[5] = (char)lVar9;
  iVar7 = (int)lVar8;
  iVar12 = (int)lVar9;
  if ((unsigned __int64)uVar2 < (unsigned __int64)uVar1) {
    uStack_6a = (char)(((uVar3 & 0xfffff8) * 2 + (uVar5 & 0xf8) + 1) / 3);
    uStack_67 = (char)(((uVar5 & 0xfffff8) * 2 + (uVar3 & 0xf8) + 1) / 3);
    uStack_69 = (char)(((uVar4 & 0xfc) * 2 + (uVar6 & 0xfc) + 1) / 3);
    uStack_66 = (char)(((uVar6 & 0xfc) * 2 + (uVar4 & 0xfc) + 1) / 3);
    uStack_68 = (char)(((int)(uVar10 << 4) + iVar12 + 1U) / 3);
    uStack_65 = (char)(((int)(uVar11 << 4) + iVar7 + 1U) / 3);
  }
  else {
    uStack_6a = (char)((int)((uVar5 & 0xf8) + (uVar3 & 0xf8) + 1) >> 1);
    uStack_69 = (char)((int)((uVar6 & 0xfc) + (uVar4 & 0xfc) + 1) >> 1);
    uStack_67 = 0xff;
    uStack_66 = 0xff;
    uStack_68 = (char)(iVar12 + iVar7 + 1 >> 1);
    uStack_65 = 0xff;
  }
  iVar12 = (*(unsigned char *)(param_1 + 0xd) >> ((auStack_60[param_3 & 3] & 0x1f) << 1) & 3) * 3;
  return ((unsigned __int64)abStack_70[iVar12] << 8 | 0xff0000 | (unsigned __int64)abStack_70[iVar12 + 1]) << 8 |
         (unsigned __int64)abStack_70[iVar12 + 2];
}

