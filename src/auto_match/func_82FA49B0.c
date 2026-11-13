extern int fn_82F655D8();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015618;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820380A0;
extern unsigned int lbl_8216CB30;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FA49B0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  if ((param_4 & 0xffffffff) == 0) {
    param_1[3] = 8;
    iVar1 = lbl_82005344;
    param_1[1] = lbl_82021540;
    param_1[2] = iVar1;
    uVar2 = lbl_82015618;
    dVar3 = (double)fn_82F655D8(lbl_82015618,lbl_8216CB30);
    param_1[4] = (int)(float)dVar3;
    dVar3 = (double)fn_82F655D8(uVar2,lbl_820380A0);
    param_1[5] = (int)(float)dVar3;
    param_1[7] = 1;
    uVar2 = 1;
    param_1[8] = 0;
    param_1[6] = lbl_821AAD20;
  }
  else {
    uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  }
  return uVar2;
}

