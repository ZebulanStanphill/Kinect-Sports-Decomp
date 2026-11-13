extern int fn_827F3C48();
extern int fn_827F4018();
extern int fn_827F4038();
extern unsigned int ltcg_pool_0_0f;


void fn_8250E180(unsigned __int64 param_1)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char bVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = fn_827F3C48(param_1,0);
  uVar3 = fn_827F3C48(param_1,1);
  iVar4 = fn_827F4018(uVar2);
  bVar5 = *(unsigned char *)(iVar4 + 0x1c);
  dVar6 = (double)ltcg_pool_0_0f;
  dVar7 = dVar6;
  if ((bVar5 & 0x40) != 0) {
    iVar4 = fn_827F4018(uVar2);
    dVar6 = (double)*(float *)(iVar4 + 0x18);
  }
  iVar4 = fn_827F4018(uVar3);
  bVar1 = *(unsigned char *)(iVar4 + 0x1c);
  if ((bVar1 & 0x40) != 0) {
    iVar4 = fn_827F4018(uVar3);
    dVar7 = (double)*(float *)(iVar4 + 0x18);
  }
  iVar4 = fn_827F4038(param_1);
  *(float *)(iVar4 + 0x18) = (float)(dVar7 + dVar6);
  if (((bVar5 & 0x40) == 0) && ((bVar1 & 0x40) == 0)) {
    bVar5 = *(unsigned char *)(iVar4 + 0x1c) & 0xbf;
  }
  else {
    bVar5 = *(unsigned char *)(iVar4 + 0x1c) | 0x40;
  }
  *(unsigned char *)(iVar4 + 0x1c) = bVar5;
  return;
}

