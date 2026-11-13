extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82E49100();
extern int fn_82E50330();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_58;


__int64 fn_82E63E98(int param_1,int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    uVar1 = 0;
    uStack_58 = 0;
    lVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,auStack_70,4,0);
    if ((-1 < lVar2) && (auStack_70[0] != 0)) {
      do {
        lVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,auStack_50,0x10,0);
        if (lVar2 < 0) break;
        lVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,auStack_40,4,0);
        if (lVar2 < 0) break;
        lVar2 = fn_82E49100(param_2,auStack_60);
        if (lVar2 < 0) break;
        lVar2 = (**(int (***)())(*(int *)(param_1 + -4) + 0x18))(param_1 + -4,auStack_50,auStack_60);
        fn_82E50330(auStack_60);
        uVar1 = uVar1 + 1;
      } while (uVar1 < auStack_70[0]);
    }
  }
  fn_82E50F10(param_1 + 8);
  return lVar2;
}

