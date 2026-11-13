extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9AEB0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2960);
  fn_82A9A860(param_2);
  puVar1 = (unsigned int *)*param_3;
  if (puVar1 < puVar1 + param_3[1] * 2) {
    do {
      if ((puVar1[1] & 0x80000000) != 0) {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d28ec);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,
                      (int)((int)puVar1 - *param_3) >> 3);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2954,*puVar1);
        fn_82A9A810(param_2);
      }
      puVar1 = puVar1 + 2;
    } while (puVar1 < (unsigned int *)(param_3[1] * 8 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2960);
  return;
}

