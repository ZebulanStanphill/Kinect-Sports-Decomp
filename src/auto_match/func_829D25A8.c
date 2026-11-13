extern int fn_82A1DDC0();
extern int fn_82A1EFC0();
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B0;


void fn_829D25A8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  fn_82A1EFC0(param_1,0,0xa80);
  piVar5 = (int *)(param_1 + 4);
  puVar3 = (unsigned int *)(param_3 + 0x88);
  lVar7 = 6;
  do {
    if (puVar3[-6] == 1) {
      piVar5[-1] = 1;
      altv207_13(in_vs32,in_vs38);
      puVar2 = (unsigned int *)((unsigned int)(piVar5 + 3) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = lbl_832177AC + uVar1;
      }
      *piVar5 = iVar4;
      if (lbl_832177B0 <= uVar1) {
        lbl_832177B0 = uVar1;
      }
    }
    puVar3 = puVar3 + 1;
    piVar5 = piVar5 + 0x70;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  piVar5 = (int *)(param_3 + 0xd0);
  lVar7 = 2;
  do {
    if (piVar5[-6] == 1) {
      lVar6 = 2;
      iVar4 = (*piVar5 + -1) * 0x1c0;
      *(unsigned int *)(iVar4 + param_1) = 2;
      iVar4 = iVar4 + param_1;
      do {
        fn_82A1DDC0(iVar4 + 0x20,param_2,0x140);
        fn_82A1DDC0(iVar4 + 0x160,param_2 + 0x148,0x50);
        lVar6 = lVar6 + -1;
        *(unsigned int *)(iVar4 + 0x1b0) = *(unsigned int *)(param_2 + 0x144);
      } while (lVar6 != 0);
    }
    lVar7 = lVar7 + -1;
    piVar5 = piVar5 + 1;
    param_2 = param_2 + 0x1a0;
  } while (lVar7 != 0);
  return;
}

