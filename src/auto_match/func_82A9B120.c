extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern int sprintf();
extern unsigned int uStack_9c;


void fn_82A9B120(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,__int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char cStack_9d;
  unsigned char uStack_9c;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d29d0);
  fn_82A9A860(param_2);
  puVar3 = (unsigned int *)*param_3;
  if (puVar3 < puVar3 + param_3[1] * 2) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff821ce400);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2990,
                    (unsigned __int64)(*puVar3 >> 0x14) + param_4);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,*puVar3 >> 0xe & 0x3f);
      uStack_9c = 0;
      uVar1 = *puVar3;
      cStack_a0 = "xyzw01?_DestSwizzle"[uVar1 >> 2 & 7];
      cStack_9f = "xyzw01?_DestSwizzle"[uVar1 >> 5 & 7];
      cStack_9e = "xyzw01?_DestSwizzle"[uVar1 >> 8 & 7];
      cStack_9d = "xyzw01?_DestSwizzle"[uVar1 >> 0xb & 7];
      fn_82A99D88(param_2,0xffffffff820d29ac,&cStack_a0);
      sprintf(&cStack_a0,0xffffffff820d29b8,puVar3[1] >> 0x17 & 0xff);
      fn_82A99D88(param_2,0xffffffff820d29c0,&cStack_a0);
      uVar2 = 0xffffffff82196f18;
      if ((puVar3[1] & 0x400000) == 0) {
        uVar2 = 0xffffffff82196f10;
      }
      fn_82A99D88(param_2,0xffffffff820d29cc,uVar2);
      fn_82A9A810(param_2);
      puVar3 = puVar3 + 2;
    } while (puVar3 < (unsigned int *)(param_3[1] * 8 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d29d0);
  return;
}

