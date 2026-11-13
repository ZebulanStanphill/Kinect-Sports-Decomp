extern int fn_82E50BE8();
extern int fn_82E50C30();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E58CA8();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152F20;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_821549EC;
extern unsigned int lbl_821549F0;
extern unsigned int lbl_821549F4;


unsigned int * fn_82E404A8(unsigned int *param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  param_1[1] = 1;
  puVar3 = param_1 + 2;
  *param_1 = &lbl_82152F20;
  fn_82E50C30(puVar3);
  param_1[0x1b] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(unsigned __int64 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(unsigned short *)((int)param_1 + 0x86) = 0;
  *(unsigned char *)(param_1 + 0x22) = 0;
  param_1[0x1e] = &lbl_82152F14;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(unsigned short *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  fn_82E50CB8(puVar3);
  lVar1 = fn_82E58CA8(param_1 + 0x30,1,0);
  if (-1 < lVar1) {
    param_1[0xb3] = 1;
    puVar2 = (unsigned int *)fn_82E50BE8(0x10,0,0,0,0);
    param_1[0xb2] = puVar2;
    if (puVar2 == (unsigned int *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      *puVar2 = lbl_821549E8;
      puVar2[1] = lbl_821549EC;
      puVar2[2] = lbl_821549F0;
      puVar2[3] = lbl_821549F4;
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (int)lVar1;
  }
  fn_82E50F10(puVar3);
  return param_1;
}

