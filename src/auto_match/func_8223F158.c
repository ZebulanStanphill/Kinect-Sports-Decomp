extern unsigned int *auStack_30;
extern int fn_8223F0D8();
extern int fn_82F62DF8();
extern int fn_82F64258();


void fn_8223F158(int param_1,unsigned __int64 param_2,char param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 auStack_30 [6];
  
  puVar1 = (unsigned int *)fn_82F64258();
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  if (param_3 == '\0') {
    uVar3 = (unsigned __int64)(unsigned int)puVar1[2];
  }
  else {
    uVar3 = 0xffffffff82196582;
  }
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(uVar3,0,auStack_30);
  *(unsigned int *)(param_1 + 8) = uVar2;
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196f10,0,auStack_30);
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196f18,0,auStack_30);
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  fn_82F62DF8();
  *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)*puVar1;
  fn_82F62DF8();
  *(unsigned char *)(param_1 + 0xd) = *(unsigned char *)puVar1[1];
  if (param_3 != '\0') {
    fn_82F62DF8();
    *(unsigned char *)(param_1 + 0xc) = 0x2e;
    fn_82F62DF8();
    *(unsigned char *)(param_1 + 0xd) = 0x2c;
  }
  return;
}

