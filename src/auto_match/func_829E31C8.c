extern unsigned int *auStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_829E3C40();
extern int fn_829E53C0();
extern int fn_829E5408();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8315C704;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int fn_829E31C8(int param_1)

{
  unsigned int uVar1;
  float fStack_50;
  float fStack_4c;
  unsigned char auStack_48 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned __int64 uStack_28;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if ((*(char *)(param_1 + 0x6c) != '\0') && (*(char *)(param_1 + 0x6d) != '\0')) {
    uStack_38 = 1;
    uStack_34 = 1;
    stack_pair_40.first = lbl_82005748;
    uStack_30 = 4;
    stack_pair_40.second = lbl_82005748;
    uStack_28 = 1;
    uStack_1c = lbl_8201EBA4;
    uStack_20 = 0;
    uStack_18 = lbl_8201FBB0;
    uVar1 = fn_829E3C40(*(unsigned int *)(param_1 + 8),&stack_pair_40.first);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_829E5408(param_1 + 0x40,&fStack_4c,&fStack_50,auStack_48);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((double)lbl_821AAD20 < (double)fStack_50) {
      uVar1 = fn_829E53C0((double)fStack_4c,(double)fStack_50,(double)lbl_8315C704,param_1 + 0x40);
      return (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return 0x8000ffff;
}

