extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB198();
extern int fn_823000E0();
extern unsigned int uStack_40;


void fn_8231E6E8(int param_1)

{
  int iVar1;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned char auStack_30 [32];
  
  iVar1 = *(int *)(param_1 + 0xc);
  uStack_40 = 0;
  *(unsigned int *)(*(int *)(iVar1 + 0x1e8) + 0x578) = 0;
  fn_823000E0(*(unsigned int *)(iVar1 + 0x1e8),auStack_50);
  fn_82230110(auStack_30,0xffffffff821accc4);
  fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

