typedef unsigned char bool;
#define TBLr 0
extern unsigned int *auStack_50;
extern int fn_829C9438();
extern int fn_829C9E18();
extern int fn_829CD3E8();
extern int fn_829F4F68();
extern int fn_829F5000();
extern int fn_829F5230();
extern int fn_82A2AFD8();
extern int fn_82A2AFE0();
extern int iRam8321731c;
extern int iRam83217330;
extern unsigned int lbl_83217164;
extern unsigned int lbl_83217270;
extern unsigned int lbl_83217324;
extern unsigned int lbl_8321733C;
extern unsigned int lbl_83217344;
extern unsigned int lbl_832178DC;
extern unsigned int uRam832154c8;
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829CDC78(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_50 [8];
  unsigned char *puStack_48;
  
  iVar5 = 0;
  iVar6 = 0;
  uVar7 = 0;
  if (iRam83217330 == 0) {
    uVar2 = KfAcquireSpinLock(0xffffffff8321732c);
    iVar6 = (&lbl_83217324)[lbl_8321733C];
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x34) == 0)) {
      do {
        iVar5 = iRam8321731c;
        if (in_RESERVE != '\0') {
          iRam8321731c = storeWordConditionalIndexed(0,0,0xffffffff8321731c);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (iVar5 != 0) {
        uVar1 = TBLr;
        uRam832154c8 = (unsigned int)uVar1;
        uVar7 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x18);
        *(int *)(iVar6 + 0x34) = iVar5;
        iRam83217330 = 1;
      }
    }
    KfReleaseSpinLock(0xffffffff8321732c,uVar2);
  }
  fn_829F5000(10,auStack_50,8);
  uVar4 = 0;
  if (((uVar7 == 0) || (iVar5 == 0)) || (*(int *)(iVar5 + 0x110) == 0)) {
    uVar7 = 0;
  }
  else {
    iVar3 = fn_829C9E18();
    *(int *)(iVar5 + 0x114) = iVar3;
    if ((iVar3 != 0) && (*(int *)(iVar6 + 0x1c) != 0)) {
      if (*(int *)(iVar3 + 0x78) == 1) {
        if (lbl_83217164 == 0) {
          fn_829CD3E8();
          *(unsigned int *)(iVar5 + 0x114) = 0;
        }
        else {
          uVar7 = uVar7 << 0x20 | uVar7 & 0xfffffffffffffeff;
        }
      }
      else {
        uVar7 = uVar7 << 0x20 | uVar7 & 0xfffffffffffffffd;
      }
    }
    if (*(int *)(iVar5 + 0x114) == 0) {
      uVar7 = (uVar7 & 0xfffffff9) << 0x20 | uVar7 & 0xfffffef9;
    }
    else {
      uVar4 = *(unsigned int *)(*(int *)(iVar5 + 0x114) + 0x68) >> 2;
    }
    fn_829F5230(*(unsigned int *)(*(int *)(iVar5 + 0x110) + 0x68) >> 3,*(unsigned int *)(iVar5 + 0x11c) >> 2,
                    iVar5,uVar4,*(unsigned int *)(iVar6 + 0x20),*(unsigned int *)(iVar6 + 0x24),
                    *(unsigned int *)(iVar6 + 0x28),*(unsigned int *)(iVar6 + 0x2c));
  }
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar4 = (unsigned int)(*(int *)(iVar5 + 0xd8) != 0);
    if (*(int *)(iVar5 + 0xdc) != 0) {
      uVar4 = uVar4 | 2;
    }
    if (*(int *)(iVar5 + 0xe0) != 0) {
      uVar4 = uVar4 | 4;
    }
  }
  param_1 = param_1 * 0x28;
  *(unsigned int *)(param_1 + -0x7cde8cb8) = -(unsigned int)(uVar7 != 0) & lbl_832178DC;
  *(int *)(param_1 + -0x7cde8cb4) = (int)uVar7;
  if ((uVar7 & 0x20) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = lbl_83217270 + 0xb4;
  }
  *(int *)(param_1 + -0x7cde8ca0) = iVar3;
  *(unsigned int *)(param_1 + -0x7cde8c9c) = uVar4;
  fn_829C9438(&lbl_83217344 + param_1);
  if ((uVar7 & 0x20) != 0) {
    fn_82A2AFD8();
    fn_829F4F68(iVar5 + 0x20);
    fn_82A2AFE0();
  }
  if (iVar6 != 0) {
    uVar2 = TBLr;
    *(int *)(iVar6 + 0x38) = (int)uVar2;
  }
  puStack_48 = &lbl_83217344 + param_1;
  fn_829F5000(0xb,auStack_50,0xc);
  sync(0);
  return;
}

