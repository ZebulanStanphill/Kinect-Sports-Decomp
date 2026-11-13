extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897B40();
extern int fn_82897C08();
extern int fn_82897D70();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822CAA28(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  
  int i9c;
  int i34;
  fn_82230110(auStack_b0,"Player ID");
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned char *)(param_1 + 0xf4) = 0;
  i9c = param_1 + 0x9c;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0x1f;
  uVar1 = fn_828EA268(0x1f);
  *(unsigned int *)(param_1 + 0x100) = uVar1;
  fn_82897DF8(i9c,param_1,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82897B40(i9c);
  fn_82230110(auStack_70,"Team ID");
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x8c) = 0;
  i34 = param_1 + 0x34;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0xf;
  uVar1 = fn_828EA268(0xf);
  *(unsigned int *)(param_1 + 0x98) = uVar1;
  fn_82897DF8(i34,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897B40(i34);
  fn_82230110(auStack_d0,"Player rotation");
  iVar4 = param_1 + 0x104;
  fn_82897DF8(iVar4,param_1,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  fn_82230110(auStack_90,"Player position");
  iVar3 = param_1 + 0x15c;
  fn_82897DF8(iVar3,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_50,"Player velocity");
  iVar2 = param_1 + 0x1b4;
  fn_82897DF8(iVar2,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82897D70(iVar4);
  fn_82897D70(iVar3);
  fn_82897D70(iVar2);
  fn_82897C08(iVar4,iVar3);
  fn_82897C08(iVar2,iVar4);
  return;
}

