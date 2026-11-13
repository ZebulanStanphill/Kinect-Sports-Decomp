extern unsigned int *auStack_80;
extern int fn_82547CF0();
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_87;
extern unsigned int uStack_88;
extern unsigned int uStack_89;
extern unsigned int uStack_8a;


unsigned __int64 fn_825480E0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

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
  int iVar13;
  unsigned char abStack_90 [6];
  unsigned char uStack_8a;
  unsigned char uStack_89;
  unsigned char uStack_88;
  unsigned char uStack_87;
  unsigned char uStack_86;
  unsigned char uStack_85;
  unsigned int auStack_80 [32];
  
  auStack_80[4] = 0;
  auStack_80[5] = 1;
  auStack_80[6] = 2;
  auStack_80[0] = 1;
  auStack_80[1] = 0;
  auStack_80[3] = 2;
  auStack_80[7] = 3;
  auStack_80[2] = 3;
  iVar12 = fn_82547CF0((int)param_3 >> 2,(int)param_4 >> 2,param_2 >> 2,8);
  iVar13 = iVar12 * 8 + param_1;
  uVar2 = *(unsigned short *)(iVar12 * 8 + param_1);
  uVar1 = *(unsigned short *)(iVar13 + 2);
  uVar3 = (unsigned int)(uVar2 >> 8);
  uVar4 = (unsigned int)(uVar2 >> 3);
  abStack_90[0] = (unsigned char)(uVar3 & 0xfffff8);
  uVar5 = (unsigned int)(uVar1 >> 8);
  uVar6 = (unsigned int)(uVar1 >> 3);
  abStack_90[1] = (char)(uVar4 & 0xfc);
  uVar10 = (unsigned __int64)uVar2 & 0x1f;
  lVar8 = uVar10 << 3;
  abStack_90[3] = (char)(uVar5 & 0xfffff8);
  uVar11 = (unsigned __int64)uVar1 & 0x1f;
  lVar9 = uVar11 << 3;
  abStack_90[4] = (char)(uVar6 & 0xfc);
  abStack_90[2] = (char)lVar8;
  abStack_90[5] = (char)lVar9;
  iVar7 = (int)lVar8;
  iVar12 = (int)lVar9;
  if ((unsigned __int64)uVar1 < (unsigned __int64)uVar2) {
    uStack_8a = (char)(((uVar3 & 0xfffff8) * 2 + (uVar5 & 0xf8) + 1) / 3);
    uStack_87 = (char)(((uVar5 & 0xfffff8) * 2 + (uVar3 & 0xf8) + 1) / 3);
    uStack_89 = (char)(((uVar4 & 0xfc) * 2 + (uVar6 & 0xfc) + 1) / 3);
    uStack_86 = (char)(((uVar6 & 0xfc) * 2 + (uVar4 & 0xfc) + 1) / 3);
    uStack_88 = (char)(((int)(uVar10 << 4) + iVar12 + 1U) / 3);
    uStack_85 = (char)(((int)(uVar11 << 4) + iVar7 + 1U) / 3);
  }
  else {
    uStack_8a = (char)((int)((uVar5 & 0xf8) + (uVar3 & 0xf8) + 1) >> 1);
    uStack_89 = (char)((int)((uVar6 & 0xfc) + (uVar4 & 0xfc) + 1) >> 1);
    uStack_87 = 0xff;
    uStack_86 = 0xff;
    uStack_88 = (char)(iVar12 + iVar7 + 1 >> 1);
    uStack_85 = 0xff;
  }
  iVar13 = (*(unsigned char *)(auStack_80[param_4 & 3] + iVar13 + 4) >>
            ((auStack_80[(param_3 & 3) + 4] & 0x1f) << 1) & 3) * 3;
  return ((unsigned __int64)abStack_90[iVar13] << 8 | 0xff0000 | (unsigned __int64)abStack_90[iVar13 + 1]) << 8 |
         (unsigned __int64)abStack_90[iVar13 + 2];
}

