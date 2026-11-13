extern int fn_82E50C30();
extern int fn_82E50CB8();
extern int fn_82F691F0();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152FB4;
extern unsigned int lbl_82152FC4;


void fn_82E424E8(unsigned int *param_1)

{
  *param_1 = &lbl_82152FC4;
  param_1[1] = &lbl_82152FB4;
  param_1[2] = 1;
  param_1[3] = 0;
  fn_82E50C30(param_1 + 4);
  param_1[0x13] = 0;
  *(unsigned __int64 *)(param_1 + 0x18) = 3000;
  param_1[0x14] = 0;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(unsigned short *)((int)param_1 + 0x27a) = 0;
  *(unsigned char *)(param_1 + 0x9f) = 0;
  param_1[0x9b] = &lbl_82152F14;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  *(unsigned __int64 *)(param_1 + 0x16a) = 0;
  *(unsigned __int64 *)(param_1 + 0x16c) = 0;
  *(unsigned __int64 *)(param_1 + 0x16e) = 0;
  param_1[0x170] = 0;
  fn_82E50CB8(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x1b,0,0x200);
}

