extern unsigned int *auStack_a0;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern int sprintf();


void fn_82A9B2F0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned char auStack_a0 [160];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d29f8);
  fn_82A9A860(param_2);
  puVar6 = (unsigned int *)*param_3;
  if (puVar6 < puVar6 + param_3[1]) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d29dc);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,*puVar6 >> 0x14 & 0xf);
      sprintf(auStack_a0,0xffffffff820d29b8,*(unsigned char *)puVar6);
      fn_82A99D88(param_2,0xffffffff820d29c0,auStack_a0);
      uVar1 = *puVar6;
      uVar5 = 0xffffffff821ce364;
      if ((uVar1 & 0x80000) == 0) {
        uVar5 = 0xffffffff82196582;
      }
      uVar4 = 0xffffffff821ce360;
      if ((uVar1 & 0x40000) == 0) {
        uVar4 = 0xffffffff82196582;
      }
      uVar3 = 0xffffffff821ce35c;
      if ((uVar1 & 0x20000) == 0) {
        uVar3 = 0xffffffff82196582;
      }
      uVar2 = 0xffffffff821ce358;
      if ((uVar1 & 0x10000) == 0) {
        uVar2 = 0xffffffff82196582;
      }
      sprintf(auStack_a0,0xffffffff820d29ec,uVar2,uVar3,uVar4,uVar5);
      fn_82A99D88(param_2,0xffffffff82005da8,auStack_a0);
      fn_82A9A810(param_2);
      puVar6 = puVar6 + 1;
    } while (puVar6 < (unsigned int *)(param_3[1] * 4 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d29f8);
  return;
}

