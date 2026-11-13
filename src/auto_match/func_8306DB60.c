extern int fn_8306D610();
extern int fn_8306D898();
extern int fn_8306ED70();
extern int fn_83075590();
extern int fn_83075790();
extern int fn_83075D40();
extern int fn_83075D80();
extern int fn_83075DA0();
extern int fn_83075DA8();


void fn_8306DB60(int param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char uVar1;
  float *pfVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  double dVar6;
  
  if ((param_2 == (int *)0x0) || (uVar1 = 1, *param_2 != 2)) {
    uVar1 = 0;
  }
  *(unsigned char *)(param_1 + 0x1a90) = uVar1;
  iVar5 = param_1 + 0xa40;
  fn_83075DA0(iVar5,param_3);
  fn_83075DA8(iVar5,*(unsigned char *)(param_1 + 0x1a90));
  if (*(char *)(param_1 + 0x1a90) == '\0') {
    fn_8306D610(param_1);
  }
  else {
    uVar3 = 0;
    do {
      fn_8306ED70();
      fn_83075D80(iVar5,uVar3);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < 0x14);
    fn_8306D898(param_1,iVar5);
    fn_83075590(param_1 + 0xcd0,param_2,iVar5);
    *(char *)(param_1 + 0x1a91) = '\x01' - (*(int *)(param_4 + 0xc) == 0);
    fn_83075790(param_1,iVar5);
    lVar4 = 0;
    pfVar2 = (float *)(param_1 + 0x19fc);
    do {
      dVar6 = (double)fn_83075D40(iVar5,lVar4);
      lVar4 = lVar4 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = (float)dVar6;
    } while ((int)lVar4 < 0x14);
  }
  *(unsigned char *)(param_1 + 0x1a93) = 1;
  return;
}

