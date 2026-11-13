extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_823A5558();
extern int fn_8265C9E0();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B5380;
extern unsigned int lbl_821B5444;
extern unsigned int lbl_821B5484;
extern unsigned int lbl_821B54D4;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_823A4B00(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned char auStack_50 [80];
  
  param_1[2] = param_2;
  param_1[1] = 5;
  *param_1 = &lbl_821B5484;
  fn_82230110(auStack_50,0xffffffff821b5460);
  piVar2 = param_1 + 3;
  fn_823A5558(piVar2,auStack_50);
  fn_82230300(auStack_50,1,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puStack_5c = (unsigned int *)fn_8265C9E0(0x18);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (unsigned int *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 4;
      puStack_5c[3] = &lbl_821AC5E0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(int (***)())(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (unsigned int *)fn_8265C9E0(0x18);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (unsigned int *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 5;
      puStack_5c[3] = &lbl_821AC5E0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(int (***)())(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (unsigned int *)fn_8265C9E0(0x18);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (unsigned int *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 1;
      puStack_5c[3] = &lbl_821B54D4;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(int (***)())(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (unsigned int *)fn_8265C9E0(0x20);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (unsigned int *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 2;
      puStack_5c[3] = &lbl_821B5444;
      puStack_5c[6] = 0;
      puStack_5c[7] = 0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(int (***)())(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (unsigned int *)fn_8265C9E0(0x1c);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (unsigned int *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 3;
      uVar1 = ltcg_pool_0_0f;
      puStack_5c[3] = &lbl_821B5380;
      puStack_5c[6] = uVar1;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(int (***)())(*piVar2 + 4))(piVar2,&puStack_60);
  return param_1;
}

