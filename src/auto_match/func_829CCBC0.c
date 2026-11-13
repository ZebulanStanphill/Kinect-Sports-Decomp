extern unsigned int *auStack_70;
extern unsigned int *auStack_c0;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_829CC3A0();
extern int fn_829CC5C8();
extern int fn_829F4E18();
extern unsigned int iStack_a8;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83217238;
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B0;
extern unsigned int uStack_54;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


unsigned __int64 fn_829CCBC0(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_c0 [16];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  unsigned int uStack_a4;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned char bStack_8c;
  char cStack_8b;
  unsigned int auStack_70 [7];
  unsigned int uStack_54;
  
  uStack_ac = 1;
  uStack_b0 = 0x18;
  uStack_a4 = 0x2000;
  iStack_a8 = lbl_83217238;
  iVar2 = (*(int (**)())lbl_8315C3E8)(&uStack_b0);
  if (iVar2 < 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      *(short *)(iVar2 + lbl_83217238) = (short)uVar3;
      uVar3 = uVar3 + 1 & 0xffff;
      iVar2 = uVar3 << 1;
    } while (uVar3 < 0x2000);
  }
  stack_pair_a0.first = 0;
  stack_pair_a0.second = 0;
  uStack_98 = 0x2000;
  uStack_94 = 0;
  fn_8263C7D8(0xffffffff8321723c,0,auStack_c0,&stack_pair_a0.first,0x1000);
  fn_8263C620(0xffffffff8321723c,0);
  uStack_54 = 1;
  auStack_70[0] = 0x21;
  (*(int (**)())lbl_8315C3E8)(auStack_70);
  uStack_90 = 0xd;
  iVar2 = (*(int (**)())lbl_8315C3E8)(&uStack_90);
  if (((iVar2 < 0) || (bStack_8c < 5)) || (cStack_8b == '\0')) {
    uVar1 = fn_829CC3A0();
  }
  else {
    uVar1 = fn_829CC5C8();
  }
  puVar4 = (unsigned int *)0x832178b0;
  lVar5 = 10;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((lbl_83215A40 != 0) || ((lbl_83215000 & 0x80000000) == 0)) {
    if ((lbl_832177B0 & 0x80000000) == 0) {
      lbl_832177AC = lbl_832177AC + lbl_832177B0;
      if ((lbl_832177AC & 0x80000000) != 0) {
        lbl_832177AC = 0;
      }
      lbl_832177B0 = 0;
      fn_829F4E18();
    }
    else {
      lbl_832177AC = 0;
      lbl_832177B0 = 0;
      fn_829F4E18();
    }
  }
  return uVar1;
}

