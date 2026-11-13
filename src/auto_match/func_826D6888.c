typedef unsigned char bool;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267B7A8();
extern int fn_8267B848();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C2D8();
extern int fn_8268C590();
extern int fn_826A7828();
extern int fn_827064B8();
extern int fn_8270C6B0();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned __int64 storeWordConditionalIndexed();


int fn_826D6888(unsigned __int64 param_1,int param_2,char param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int auStack_60 [4];
  unsigned int auStack_50 [5];
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  uVar4 = fn_8270C6B0();
  fn_8268C590(auStack_60,0xffffffff8200c4fc,uVar4,0xffffffff8200c4f8);
  fn_82F68CC0(auStack_50,param_2,0x20);
  uVar3 = uStack_3c;
  uStack_38 = 3;
  uStack_3c = 0x20000;
  auStack_50[0] = -(unsigned int)(param_3 != '\0') & 0x1000 | auStack_50[0] | 3;
  uVar4 = fn_8267C2D8(lbl_831E7E64,((unsigned __int64)auStack_60[0] & 0xfffffffc) + 8,auStack_50);
  uVar5 = fn_8267B890(uVar4,0xb90,0);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar9 = bVar1 << 1;
  if (bVar1) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_827064B8(uVar5,uVar4);
  }
  fn_8267B848(uVar4,iVar6);
  *(int *)(iVar6 + 0xb0c) = iVar6;
  *(unsigned int *)(iVar6 + 0xb10) = uVar3;
  *(unsigned int *)(iVar6 + 0xb1c) = *(unsigned int *)(param_2 + 0x20);
  fn_8267B7A8(uVar4,iVar6 + 0xb08);
  fn_826A7828(iVar6 + 0x18,*(unsigned int *)(param_2 + 0x28),*(unsigned int *)(param_2 + 0x24));
  lVar7 = ((unsigned __int64)auStack_60[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (unsigned int *)lVar7;
    uVar5 = (unsigned __int64)*puVar8;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
      *puVar8 = uVar2;
      bVar9 = 2;
    }
  } while (!(bool)(bVar9 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return iVar6;
}

