#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_130;
extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_822806F0();
extern int fn_822886B0();
extern int fn_822889C0();
extern int fn_8228A540();
extern int fn_8228AF60();
extern int fn_8228B6A8();
extern int fn_8228C0B0();
extern int fn_822C5B18();
extern unsigned int lbl_831CEEC0;


void fn_82288A50(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int iVar5;
  unsigned char **ppuVar6;
  __int64 lVar7;
  unsigned char auStack_130 [8];
  unsigned char auStack_128 [8];
  unsigned char auStack_120 [16];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x11f0) + 0x18b8);
  if (uVar1 == 0) {
    fn_822889C0(auStack_120,param_1);
    fn_8228B6A8();
    if (*(int *)(param_1 + 0x608) == 8) {
      uVar2 = fn_822C5B18(auStack_70,param_1 + 0x680);
      iVar5 = param_1 + 0x5e8;
code_r0x82288ba8:
      fn_822806F0(*(unsigned int *)(param_1 + 0x69c),iVar5,param_1 + 0x18,uVar2,0);
      uVar3 = 0xffffffff821a936c;
    }
    else {
      uVar2 = fn_822C5B18(auStack_30,param_1 + 0x680);
      iVar5 = param_1 + 0x5d4;
code_r0x82288c74:
      fn_822806F0(*(unsigned int *)(param_1 + 0x69c),iVar5,param_1 + 0x18,uVar2,0);
      uVar3 = 0xffffffff821a9388;
    }
  }
  else if (uVar1 == 1) {
    fn_822889C0(auStack_130,param_1);
    fn_8228B6A8();
    iVar5 = param_1 + 0x680;
    if (*(int *)(param_1 + 0x6e8) == 4) {
      if (*(int *)(param_1 + 0x608) != 8) {
        uVar2 = fn_822C5B18(auStack_90,iVar5);
        iVar5 = param_1 + 0x5d8;
        goto code_r0x82288c74;
      }
      uVar2 = fn_822C5B18(auStack_110,iVar5);
      iVar5 = param_1 + 0x5ec;
      goto code_r0x82288ba8;
    }
    if (*(int *)(param_1 + 0x608) == 8) {
      uVar2 = fn_822C5B18(auStack_f0,iVar5);
      fn_822806F0(*(unsigned int *)(param_1 + 0x69c),param_1 + 0x5f0,param_1 + 0x18,uVar2,0);
      uVar3 = 0xffffffff821a93a8;
    }
    else {
      uVar2 = fn_822C5B18(auStack_b0,iVar5);
      fn_822806F0(*(unsigned int *)(param_1 + 0x69c),param_1 + 0x5dc,param_1 + 0x18,uVar2,0);
      uVar3 = 0xffffffff821a93c8;
    }
  }
  else {
    if (2 < uVar1) goto LAB_82288c98;
    fn_822889C0(auStack_128,param_1);
    fn_8228B6A8();
    if (*(int *)(param_1 + 0x608) == 8) {
      uVar2 = fn_822C5B18(auStack_50,param_1 + 0x680);
      iVar5 = param_1 + 0x5f4;
    }
    else {
      uVar2 = fn_822C5B18(auStack_d0,param_1 + 0x680);
      iVar5 = param_1 + 0x5e0;
    }
    fn_822806F0(*(unsigned int *)(param_1 + 0x69c),iVar5,param_1 + 0x18,uVar2,0);
    if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18c0) == 6) {
      if (*(int *)(param_1 + 0x6e8) == 2) {
        uVar3 = 0xffffffff821a934c;
        goto LAB_82288c90;
      }
      iVar5 = 0;
      piVar4 = (int *)(param_1 + 0x6a8);
      lVar7 = 4;
      do {
        if (*piVar4 != 4) {
          iVar5 = iVar5 + 1;
        }
        piVar4 = piVar4 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      ppuVar6 = (unsigned char **)0x831ceeb0;
    }
    else {
      iVar5 = 0;
      piVar4 = (int *)(param_1 + 0x6a8);
      lVar7 = 4;
      do {
        if (*piVar4 != 4) {
          iVar5 = iVar5 + 1;
        }
        piVar4 = piVar4 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      ppuVar6 = &lbl_831CEEC0;
    }
    uVar3 = ZEXT48(ppuVar6[iVar5 + -1]);
  }
LAB_82288c90:
  fn_8228AF60(param_1,uVar3);
LAB_82288c98:
  fn_8228A540(param_1,0xffffffff821a93e4);
  fn_822886B0(param_1);
  if (*(int *)(param_1 + 0x67c) != 0) {
    fn_8228C0B0();
  }
  return;
}

