extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_824FB0B0();
extern int fn_82502538();
extern int fn_82520158();
extern int fn_82592238();


void fn_824FAF10(int param_1,int *param_2)

{
  int iVar1;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [44];
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    if (*param_2 == 0x42) {
      if (*(int *)(iVar1 + 0x1b8) == param_2[2]) {
        fn_82520158(0xffffffff821c2148,auStack_30,0);
        fn_82520158(0xffffffff821c2158,auStack_2c,0);
        fn_82502538(*(unsigned int *)(iVar1 + 0x1b8),auStack_2c,auStack_30);
      }
    }
    else if (*param_2 == 0x45) {
      fn_824FB0B0(iVar1,*(unsigned int *)(param_1 + 0x30));
    }
  }
  fn_82592238(param_1,param_2);
  return;
}

