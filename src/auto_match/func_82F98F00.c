extern int fn_82F655D8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F98F00(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  iVar2 = lbl_821AAD20;
  iVar1 = lbl_82002C5C;
  if ((param_4 & 0xffffffff) == 0) {
    param_1[1] = lbl_82002C5C;
    param_1[2] = iVar2;
    param_1[3] = iVar1;
    dVar4 = (double)fn_82F655D8(lbl_82015618,lbl_82005710);
    param_1[4] = (int)(float)dVar4;
    *(unsigned char *)(param_1 + 5) = 0;
    *(unsigned char *)((int)param_1 + 0x15) = 1;
    return 1;
  }
  uVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar3;
}

