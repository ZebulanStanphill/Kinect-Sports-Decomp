extern unsigned int *auStack_28;
extern unsigned int *auStack_5e;
extern unsigned int *auStack_60;
extern int fn_8223F0D8();
extern int fn_82296D40();
extern int fn_82F62DF8();
extern int fn_82F64258();
extern int fn_82F85C08();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_82296BC8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned char auStack_60 [1];
  unsigned short auStack_5e;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  unsigned __int64 auStack_28;

  puVar1 = (unsigned int *)fn_82F64258();
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  uStack_58 = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196582,0,&uStack_58);
  *(unsigned int *)(param_1 + 8) = uVar2;
  uStack_50 = fn_82F62DF8();
  uVar2 = fn_82296D40(0xffffffff82196f10,&uStack_50);
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  uStack_48 = fn_82F62DF8();
  uVar2 = fn_82296D40(0xffffffff82196f18,&uStack_48);
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  uStack_40 = fn_82F62DF8();
  auStack_5e = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  auStack_60[0] = *(unsigned char *)*puVar1;
  fn_82F85C08(&auStack_5e,auStack_60,1,&uStack_58,&uStack_40);
  *(unsigned short *)(param_1 + 0xc) = auStack_5e;
  uStack_38 = fn_82F62DF8();
  auStack_5e = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  auStack_60[0] = *(unsigned char *)puVar1[1];
  fn_82F85C08(&auStack_5e,auStack_60,1,&uStack_58,&uStack_38);
  *(unsigned short *)(param_1 + 0xe) = auStack_5e;
  uStack_30 = fn_82F62DF8();
  auStack_5e = 0;
  auStack_60[0] = 0x2e;
  uStack_58 = uStack_58 & 0xffffffff;
  fn_82F85C08(&auStack_5e,auStack_60,1,&uStack_58,&uStack_30);
  *(unsigned short *)(param_1 + 0xc) = auStack_5e;
  auStack_28 = fn_82F62DF8();
  auStack_60[0] = 0x2c;
  auStack_5e = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  fn_82F85C08(&auStack_5e,auStack_60,1,&uStack_58,&auStack_28);
  *(unsigned short *)(param_1 + 0xe) = auStack_5e;
  return;
}
