extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99CF8();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9AB78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2904);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0x18 + uVar1) {
    puVar3 = (unsigned int *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d28dc);
      fn_82A99CF8(param_2,0xffffffff820d28e8,param_4,puVar3[-2],puVar3[-1]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28bc,*puVar3);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820293a8,puVar3[1]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28ec,puVar3[2]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28f4,puVar3[3]);
      fn_82A9A810(param_2);
      puVar2 = puVar3 + 4;
      puVar3 = puVar3 + 6;
    } while (puVar2 < (unsigned int *)(param_3[1] * 0x18 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2904);
  return;
}

