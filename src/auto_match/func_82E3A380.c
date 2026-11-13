extern int fn_82E39C50();
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


__int64 fn_82E3A380(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4,
                      unsigned __int64 *param_5)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_50;
  unsigned int *puStack_4c;
  unsigned __int64 uStack_48;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  uStack_50 = 0;
  stack_pair_40.second = lbl_8202E61C;
  uStack_38 = lbl_8202E620;
  uStack_34 = lbl_8202E624;
  lVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2,param_3);
  if (-1 < lVar1) {
    iVar2 = (**(int (***)())(*param_2 + 0x24))(param_2,&stack_pair_40.first,0x10,&uStack_50);
    if ((-1 < iVar2) && (0xf < uStack_50)) {
      uStack_48 = 0;
      lVar1 = (**(int (***)())(*param_2 + 0x24))(param_2,&uStack_48,8,&uStack_50);
      if ((-1 < lVar1) && (7 < uStack_50)) {
        puStack_4c = &stack_pair_40.first;
        fn_82E39C50(&stack_pair_40.first,&puStack_4c);
        uVar3 = ((uStack_48 & 0xff) << 0x18 |
                (uStack_48 & 0xff00) << 8 |
                (unsigned __int64)((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) >> 0x18))
                << 0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                          ((unsigned __int64)(((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                          (unsigned __int64)((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                          (unsigned __int64)((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) >> 0x18);
        if (0x17 < uVar3) {
          *param_4 = stack_pair_40.first;
          param_4[1] = stack_pair_40.second;
          param_4[2] = uStack_38;
          param_4[3] = uStack_34;
          *param_5 = uVar3;
          return lVar1;
        }
      }
    }
    lVar1 = -0x3ff2c566;
  }
  return lVar1;
}

