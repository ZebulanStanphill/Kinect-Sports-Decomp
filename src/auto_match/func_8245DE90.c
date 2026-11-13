extern int fn_8245DB68();
extern int fn_8245DD40();
extern int fn_82E23100();
extern int fn_82E23478();
extern unsigned int lbl_83276598;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


__int64 fn_8245DE90(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if ((*(int *)(param_1 + 0x50) == 1) || (*(int *)(param_1 + 0xe0) != 0)) {
    lVar1 = 0x15;
  }
  else if ((*(int *)(param_1 + 0x54) != 1) || (lVar1 = fn_8245DD40(param_1), lVar1 == 0)) {
    *(unsigned int *)(param_1 + 0xdc) = param_2;
    *(unsigned int *)(param_1 + 0xcc) = 0x280;
    *(unsigned int *)(param_1 + 0xd0) = 0x1e0;
    lVar1 = fn_8245DB68(param_1);
    if (lVar1 == 0) {
      uStack_38 = *(unsigned int *)(param_1 + 8);
      uStack_34 = *(unsigned int *)(param_1 + 0x14);
      stack_pair_50.second = 0x1e;
      stack_pair_50.first = 0x28001e0;
      uStack_48 = 4000;
      uStack_44 = 0xfe;
      uStack_3c = 0;
      uStack_40 = 4;
      lVar1 = fn_82E23478(&stack_pair_50.first,param_1 + 4);
      if ((lVar1 == 0) &&
         (lVar1 = fn_82E23100(param_1 + 4,*(unsigned int *)(param_1 + 8),
                               *(unsigned int *)(param_1 + 0x14),0,param_1 + 0x5c), lVar1 == 0)) {
        *(unsigned int *)(param_1 + 0xe0) = 0;
        *(unsigned int *)(param_1 + 0x50) = 1;
        lbl_83276598 = 1;
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    fn_8245DD40(param_1);
  }
  return lVar1;
}

