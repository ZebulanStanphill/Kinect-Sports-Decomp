typedef unsigned char bool;
extern int fn_829C8658();
extern int fn_829C90F0();
extern int fn_829C9100();
extern unsigned int lbl_82015B38;
extern unsigned int lbl_821AAD20;


unsigned char fn_82F5E0A0(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  unsigned char bVar6;
  double dVar7;
  int aiStack_30;
  
  aiStack_30 = -1;
  bVar6 = 1;
  fn_829C8658(0,0,&aiStack_30);
  if (*param_2 != aiStack_30) {
    if (aiStack_30 == 0) {
      iVar1 = fn_829C9100((double)lbl_82015B38,0,0);
      dVar7 = (double)lbl_821AAD20;
      iVar2 = fn_829C9100(dVar7,0,6);
      iVar3 = fn_829C9100(dVar7,0,7);
      uVar4 = 8;
      bVar5 = (iVar2 == 0 && iVar1 == 0) && iVar3 == 0;
    }
    else {
      if (aiStack_30 != 1) {
        return 1;
      }
      iVar1 = fn_829C90F0(0,2,0);
      uVar4 = 5;
      bVar5 = iVar1 == 0;
      dVar7 = (double)lbl_821AAD20;
    }
    iVar1 = fn_829C9100(dVar7,0,uVar4);
    bVar6 = iVar1 == 0 & bVar5;
  }
  return bVar6;
}

