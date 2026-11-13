extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9B498(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned char *puVar3;
  float *pfVar4;
  unsigned char *puVar5;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a60);
  fn_82A9A860(param_2);
  uVar1 = *param_5;
  if (uVar1 < param_5[1] * 0x14 + uVar1) {
    pfVar4 = (float *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff82089b54);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,*(unsigned char *)(pfVar4 + -2));
      fn_82A99B70(param_2,0xffffffff820d2858,0xffffffff820d2a40,(double)pfVar4[-1]);
      fn_82A99B70(param_2,0xffffffff820d2858,0xffffffff820d2a48,(double)*pfVar4);
      fn_82A99B70(param_2,0xffffffff820d2858,0xffffffff820d2a50,(double)pfVar4[1]);
      fn_82A99B70(param_2,0xffffffff820d2858,0xffffffff820d2a58,(double)pfVar4[2]);
      fn_82A9A810(param_2);
      pfVar2 = pfVar4 + 3;
      pfVar4 = pfVar4 + 5;
    } while (pfVar2 < (float *)(param_5[1] * 0x14 + *param_5));
  }
  fn_82A99C28(param_2,0xffffffff820d2a60);
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a34);
  fn_82A9A860(param_2);
  uVar1 = *param_4;
  if (uVar1 < param_4[1] * 4 + uVar1) {
    puVar5 = (unsigned char *)(uVar1 + 2);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a24);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,puVar5[-2]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82005e30,puVar5[-1]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2a28,*puVar5);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2a30,puVar5[1]);
      fn_82A9A810(param_2);
      puVar3 = puVar5 + 2;
      puVar5 = puVar5 + 4;
    } while (puVar3 < (unsigned char *)(param_4[1] * 4 + *param_4));
  }
  fn_82A99C28(param_2,0xffffffff820d2a34);
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a14);
  fn_82A9A860(param_2);
  puVar5 = (unsigned char *)*param_3;
  if (puVar5 < puVar5 + param_3[1] * 2) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a0c);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,*puVar5);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff8204e390,puVar5[1]);
      fn_82A9A810(param_2);
      puVar5 = puVar5 + 2;
    } while (puVar5 < (unsigned char *)(param_3[1] * 2 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2a14);
  return;
}

