extern unsigned int fn_8234DA10;
extern unsigned int lbl_821B1D10;
extern unsigned int lbl_821C2424;

/* WARNING: Inlined function: __savegprlr_27 */

int fn_8234D730(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
               unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char *puStack_50;
  int (**pcStack_4c)();
  int iStack_48;
  unsigned int uStack_44;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x24) = param_3;
  *(unsigned int *)(param_1 + 0x48) = param_2;
  *(unsigned int *)(param_1 + 0x40) = 0;
  puVar1 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x44) = 0;
  memset(param_1 + 0x4c,0,0x58);
  *(unsigned char ***)(param_1 + 0xa8) = &lbl_821C2424;
  *(unsigned int *)(param_1 + 0xc0) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xd4) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xd0) = 0;
  uVar2 = fn_8251F720(param_5,0);
  memcpy(param_1 + 0x4c,uVar2,0x58);
  fn_8251FA58(uVar2);
  uStack_60 = *(unsigned int *)(param_1 + 0x6c);
  uStack_5c = *(unsigned int *)(param_1 + 0x70);
  uStack_70 = *(unsigned int *)(param_1 + 0x5c);
  uStack_6c = *(unsigned int *)(param_1 + 0x60);
  uStack_68 = *(unsigned int *)(param_1 + 100);
  uStack_64 = *(unsigned int *)(param_1 + 0x68);
  puStack_50 = *(unsigned char **)(param_1 + 0x4c);
  pcStack_4c = *(int (***)())(param_1 + 0x50);
  iStack_48 = *(unsigned int *)(param_1 + 0x54);
  uStack_44 = *(unsigned int *)(param_1 + 0x58);
  ppuStack_40 = (unsigned char **)uStack_60;
  uStack_3c = uStack_5c;
  fn_8234DA48(param_1,param_1 + 0x74,1);
  fn_8234DA48(param_1,param_1 + 0x8c,2);
  fn_8234DA48(param_1,&uStack_70,3);
  fn_8234DA48(param_1,&puStack_50,4);
  uStack_44 = uStack_68;
  ppuStack_40 = &puStack_50;
  puStack_50 = &lbl_821B1D10;
  pcStack_4c = fn_8234DA10;
  iStack_48 = param_1;
  fn_82511668(param_1 + 0xa8,&puStack_50);
  fn_825113E0(param_4,8,param_1 + 0xa8);
  return param_1;
}
