extern unsigned int *auStack_30;
extern int fn_824BC840();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82864988();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824BCA38(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_30 [16];
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x84) = uVar2;
  *(unsigned int *)(param_1 + 0x7c) = 4;
  *(unsigned int *)(param_1 + 0x88) = uVar2;
  *(unsigned int *)(param_1 + 0x80) = 4;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x8c) = uVar2;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  lVar5 = 10;
  *(unsigned int *)(param_1 + 0x4c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  puVar4 = (unsigned int *)(param_1 + 0x47c);
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xdc) = uVar2;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(unsigned int *)(param_1 + 0xe4) = 0xb;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(unsigned int *)(param_1 + 0x4a8) = 1;
  do {
    puVar4[-9] = 0;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar2;
    uVar1 = lbl_821CA460;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 0x4b4) = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x4b8) = uVar1;
  fn_82864988(param_1 + 0x4bc,0xffffffff821c05b8);
  *(unsigned int *)(param_1 + 0x508) = 0;
  *(unsigned int *)(param_1 + 0x50c) = 0;
  *(unsigned int *)(param_1 + 0x510) = 0;
  *(unsigned int *)(param_1 + 0x544) = 0;
  *(unsigned int *)(param_1 + 0x548) = 0;
  *(unsigned int *)(param_1 + 0x54c) = 0;
  fn_824BC840(param_1);
  fn_82520158(0xffffffff821c05cc,auStack_30,0);
  uVar3 = fn_8251F720(auStack_30,0);
  fn_82A1DD38(param_1 + 0x4e0,uVar3,0x28);
  fn_8251FA58(uVar3);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x90,0,0x34);
}

