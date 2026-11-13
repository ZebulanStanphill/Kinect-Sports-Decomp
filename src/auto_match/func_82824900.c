extern unsigned int *auStack_150;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2fc;
extern unsigned int *auStack_300;
extern unsigned int *auStack_320;
extern unsigned int *auStack_340;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822402F8();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82826120();
extern int fn_82826130();
extern int fn_82826748();
extern int fn_82827650();


void fn_82824900(unsigned int *param_1,unsigned __int64 param_2,int param_3,__int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int aiStack_350;
  unsigned char auStack_340 [32];
  unsigned char auStack_320 [32];
  unsigned char auStack_300 [4];
  unsigned char auStack_2fc [156];
  unsigned char auStack_260 [272];
  unsigned char auStack_150 [256];
  
  fn_82230300(auStack_340,0,0);
  fn_8223CFC0(auStack_300,2,1);
  fn_82826120(param_2,&aiStack_350);
  iVar1 = param_1[1];
  uVar2 = *param_1;
  iVar3 = **(int **)(aiStack_350 + 0x388);
  fn_82827650(aiStack_350,uVar2,auStack_260,0x104);
  fn_82826748(aiStack_350,uVar2,auStack_150,0x104);
  uVar6 = fn_82240158(auStack_300,0xffffffff8201ecac);
  uVar6 = fn_82240158(uVar6,auStack_260);
  fn_82240158(uVar6,0xffffffff8201eca8);
  uVar6 = fn_82240158(auStack_300,0xffffffff8201ecbc);
  uVar6 = fn_82240158(uVar6,auStack_150);
  fn_82240158(uVar6,0xffffffff8201ecb8);
  uVar4 = param_1[2];
  uVar5 = *(unsigned int *)(iVar3 + iVar1 * 0x20 + 0x10);
  uVar2 = *(unsigned int *)(**(int **)(aiStack_350 + 0x3bc) + param_1[4] * 4);
  uVar6 = fn_82240158(auStack_300,0xffffffff8201eccc);
  uVar6 = fn_82240158(uVar6,uVar2);
  fn_82240158(uVar6,0xffffffff8201ecc8);
  uVar6 = fn_82240158(auStack_300,0xffffffff8201ece0);
  uVar6 = fn_82520AC8(uVar6,(param_4 - (unsigned __int64)uVar4 & 0xffffffff) / (unsigned __int64)uVar5);
  fn_82240158(uVar6,0xffffffff8201ecdc);
  uVar6 = fn_82240158(auStack_300,
                            *(unsigned int *)
                             (**(int **)(aiStack_350 + 0x3bc) + *(int *)(param_3 + 0xc) * 4));
  fn_82240158(uVar6,0xffffffff8201ecf4);
  fn_82826130(param_2,auStack_340,0xffffffff828247f0);
  fn_8223B728(auStack_300,auStack_340);
  fn_822403C8(auStack_320,auStack_2fc);
  fn_822402F8(param_5,auStack_320);
  fn_82230300(auStack_320,1,0);
  fn_8223DCC8(auStack_300);
  fn_82230300(auStack_340,1,0);
  return;
}

