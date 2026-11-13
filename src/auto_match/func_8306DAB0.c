extern int fn_82F691F0();
extern int fn_8306D610();
extern int fn_8306ECA8();
extern int fn_8306FB50();
extern int fn_830758A8();
extern int fn_83075A28();
extern int fn_83075CE0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


int fn_8306DAB0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  fn_830758A8();
  fn_83075A28(param_1 + 0x530);
  fn_83075CE0(param_1 + 0xa40);
  fn_8306FB50(param_1 + 0xcd0);
  fn_8306ECA8();
  puVar1 = (unsigned int *)(param_1 + 0x1a50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306ECA8();
  uVar3 = lbl_821AAD20;
  *(unsigned char *)(param_1 + 0x1a7c) = 0;
  uVar2 = lbl_82002AE0;
  *(unsigned char *)(param_1 + 0x1a90) = 0;
  *(unsigned int *)(param_1 + 0x1a70) = uVar3;
  *(unsigned char *)(param_1 + 0x1a91) = 0;
  *(unsigned int *)(param_1 + 0x1a74) = uVar2;
  *(unsigned char *)(param_1 + 0x1a92) = 0;
  *(unsigned int *)(param_1 + 0x1a78) = uVar3;
  *(unsigned int *)(param_1 + 0x1a88) = uVar3;
  *(unsigned int *)(param_1 + 0x1a8c) = uVar3;
  puVar1 = (unsigned int *)(param_1 + 0x1a60U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306D610(param_1);
  fn_82F691F0(param_1 + 0x1a00,0,0x50);
  return param_1;
}

