#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FD0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193AD8;
extern unsigned int lbl_82193ADC;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82193B04;
extern unsigned int lbl_82193B0C;
extern unsigned int lbl_82193B18;
extern unsigned int lbl_82193B1C;
extern unsigned int lbl_82193B20;
extern unsigned int lbl_82193B24;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_82193B40;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822811F8(void)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int *puVar20;
  
  puVar20 = (unsigned int *)fn_82F6A548();
  puVar20[0x16] = lbl_8218E8E8;
  uVar19 = ltcg_pool_0_0f;
  uVar18 = lbl_821CA460;
  uVar17 = lbl_82193B40;
  uVar16 = lbl_82193B38;
  uVar15 = lbl_82193B24;
  uVar14 = lbl_82193B20;
  uVar13 = lbl_82193B1C;
  uVar12 = lbl_82193B18;
  uVar11 = lbl_82193B0C;
  uVar10 = lbl_82193B04;
  uVar9 = lbl_82193B00;
  uVar8 = lbl_82193AF0;
  uVar7 = lbl_82193ADC;
  uVar6 = lbl_82192604;
  uVar5 = lbl_821922D0;
  uVar4 = lbl_82191FD0;
  uVar3 = lbl_821917D4;
  uVar2 = lbl_821917B0;
  uVar1 = CONCAT44(lbl_821CA460,ltcg_pool_0_0f);
  *puVar20 = lbl_82193AD8;
  puVar20[1] = uVar7;
  puVar20[4] = uVar2;
  puVar20[5] = uVar5;
  puVar20[6] = uVar8;
  puVar20[7] = uVar19;
  *(unsigned __int64 *)(puVar20 + 2) = uVar1;
  puVar20[10] = uVar9;
  puVar20[0xb] = uVar10;
  *(unsigned __int64 *)(puVar20 + 8) = CONCAT44(uVar18,uVar18);
  puVar20[0xc] = uVar8;
  *(unsigned __int64 *)(puVar20 + 0xe) = CONCAT44(uVar4,uVar18);
  puVar20[0xd] = uVar11;
  puVar20[0x10] = uVar12;
  puVar20[0x11] = uVar13;
  puVar20[0x12] = uVar14;
  puVar20[0x13] = uVar15;
  puVar20[0x14] = uVar3;
  puVar20[0x15] = uVar6;
  puVar20[0x17] = uVar6;
  puVar20[0x18] = uVar16;
  puVar20[0x19] = uVar18;
  puVar20[0x1a] = uVar17;
  puVar20[0x1b] = uVar19;
  fn_82F6A594();
  return;
}

