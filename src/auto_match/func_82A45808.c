unsigned __int64 fn_82A45808(int param_1,int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  bVar1 = *(unsigned char *)((int)param_3 + 10);
  puVar3 = (unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  if ((*puVar3 >> 0xc & 0xff) != (unsigned int)bVar1) {
    puVar3[0xc] = 1;
    *puVar3 = (unsigned int)bVar1 << 0xc | *puVar3 & 0xfff00fff;
  }
  bVar1 = *(unsigned char *)(param_3 + 2);
  if ((puVar3[1] >> 0xc & 3) != (unsigned int)bVar1) {
    puVar3[0xc] = 1;
    puVar3[1] = (bVar1 & 3) << 0xc | puVar3[1] & 0xffffcfff;
  }
  bVar1 = *(unsigned char *)((int)param_3 + 9);
  if ((puVar3[1] >> 0x11 & 7) != (unsigned int)bVar1) {
    puVar3[0xc] = 1;
    puVar3[1] = (bVar1 & 7) << 0x11 | puVar3[1] & 0xfff1ffff;
  }
  uVar2 = *param_3;
  if ((puVar3[3] & 0x3ffffff) != uVar2) {
    puVar3[0xc] = 1;
    puVar3[3] = uVar2 & 0x3ffffff | puVar3[3] & 0xfc000000;
  }
  uVar2 = param_3[1];
  if ((puVar3[4] & 0x3ffffff) != uVar2) {
    puVar3[0xd] = 1;
    puVar3[4] = uVar2 & 0x3ffffff | puVar3[4] & 0xfc000000;
  }
  return 0;
}

