extern int fn_822315A0();
extern int fn_8232B708();
extern int fn_8232C528();
extern int fn_8232C8B8();
extern int fn_8265C9E0();
extern int memcpy();
extern unsigned int lbl_82196E94;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B06D0;
extern unsigned int lbl_821B070C;
extern unsigned int lbl_821B072C;
extern unsigned int lbl_821B074C;
extern unsigned int lbl_821B076C;
extern unsigned int lbl_821B078C;
extern unsigned int lbl_821B07AC;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8232BEE0(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float *pfVar3;
  unsigned int *puVar4;
  double dVar5;
  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  
  fn_8232B708();
  *param_1 = &lbl_821B06D0;
  param_1[0x15] = 0;
  puVar4 = param_1 + 0x15;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 0;
    *puVar2 = &lbl_82196E94;
  }
  if (param_1[0x1a] != 0) {
    fn_822315A0();
  }
  param_1[0x1a] = puVar2;
  param_1[0x19] = 0;
  uVar1 = *(unsigned int *)(param_3 + 0x130);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = uVar1;
  dVar5 = (double)ltcg_pool_0_0f;
  param_1[0x1f] = ltcg_pool_0_0f;
  param_1[0x1d] = *(unsigned int *)(param_3 + 0x118);
  param_1[0x1b] = *(unsigned int *)(param_3 + 0x120);
  param_1[0x1c] = *(unsigned int *)(param_3 + 0x11c);
  for (pfVar3 = (float *)(param_1 + 0x1b); pfVar3 != (float *)(param_1 + 0x1e); pfVar3 = pfVar3 + 1)
  {
    param_1[0x1f] = *pfVar3 + (float)param_1[0x1f];
  }
  param_1[0x20] = *(unsigned int *)(param_3 + 0x124);
  param_1[0x21] = *(unsigned int *)(param_3 + 0x128);
  param_1[0x22] = *(unsigned int *)(param_3 + 300);
  param_1[0x23] = *(unsigned int *)(param_3 + 0x130);
  param_1[0x24] = *(unsigned int *)(param_3 + 0x134);
  param_1[0x25] = *(unsigned int *)(param_3 + 0x138);
  param_1[0x26] = *(unsigned int *)(param_3 + 0x13c);
  puStack_6c = (unsigned int *)fn_8265C9E0(0x58);
  if (puStack_6c == (unsigned int *)0x0) {
    puStack_6c = (unsigned int *)0x0;
  }
  else {
    puStack_6c[1] = 1;
    puStack_6c[2] = 1;
    *puStack_6c = &lbl_821AD588;
    if (puStack_6c + 3 != (unsigned int *)0x0) {
      puStack_6c[5] = param_2;
      puStack_6c[6] = param_1;
      puStack_6c[4] = 2;
      puStack_6c[3] = &lbl_821B074C;
      memcpy(puStack_6c + 7,param_3 + 0x2c,0x34);
      puStack_6c[0x14] = (float)dVar5;
      puStack_6c[0x15] = (float)dVar5;
    }
  }
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0xa4);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[5] = param_2;
      puVar2[6] = param_1;
      puVar2[4] = 1;
      puVar2[3] = &lbl_821B072C;
      memcpy(puVar2 + 7,param_3 + 0x60,0x50);
      memcpy(puVar2 + 0x1b,param_3 + 0x68,0x1c);
      puVar2[0x23] = (float)dVar5;
      puVar2[0x24] = (float)dVar5;
      puVar2[0x22] = 0;
      puVar2[0x25] = (float)dVar5;
      puVar2[0x26] = 0;
      puVar2[0x27] = (float)dVar5;
      puVar2[0x28] = 4;
    }
  }
  puStack_6c = puVar2;
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0x48);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[5] = param_2;
      puVar2[6] = param_1;
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B070C;
      memcpy(puVar2 + 7,param_3 + 0xb0,0x28);
      puVar2[0x11] = 0;
    }
  }
  puStack_6c = puVar2;
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0x7c);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[5] = param_2;
      puVar2[6] = param_1;
      puVar2[4] = 5;
      puVar2[3] = &lbl_821B07AC;
      memcpy(puVar2 + 7,param_3 + 0xd8,0x38);
      memcpy(puVar2 + 0x15,param_3 + 0xe0,0x1c);
      puVar2[0x1d] = (float)dVar5;
      puVar2[0x1c] = 0;
      puVar2[0x1e] = 4;
    }
  }
  puStack_6c = puVar2;
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puStack_6c = (unsigned int *)fn_8265C9E0(0x20);
  if (puStack_6c == (unsigned int *)0x0) {
    puStack_6c = (unsigned int *)0x0;
  }
  else {
    puStack_6c[1] = 1;
    puStack_6c[2] = 1;
    *puStack_6c = &lbl_821AD588;
    if (puStack_6c + 3 != (unsigned int *)0x0) {
      puStack_6c[5] = param_2;
      puStack_6c[6] = param_1;
      puStack_6c[4] = 3;
      puStack_6c[3] = &lbl_821B076C;
      puStack_6c[7] = *(unsigned int *)(param_3 + 0x114);
    }
  }
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0x20);
  puStack_6c = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    puStack_6c = puVar2;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[6] = param_1;
      puVar2[5] = param_2;
      puVar2[4] = 4;
      puVar2[3] = &lbl_821B078C;
      puVar2[7] = *(unsigned int *)(param_3 + 0x110);
    }
  }
  puStack_70 = puStack_6c + 3;
  fn_8232C8B8(puVar4,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  fn_8232C528(param_1,2);
  return param_1;
}

