extern int fn_82F37588();
extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


unsigned __int64 fn_82F380A0(int *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  int *apiStack_30 [12];
  
  pbVar6 = (unsigned char *)&lbl_8202E618;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar3 = param_1[0x1c];
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        fn_82F377E8(param_1 + 2,uVar7,apiStack_30);
        if ((int *)*apiStack_30[0] != (int *)0x0) {
          (**(int (***)())(*(int *)*apiStack_30[0] + 8))();
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar3);
    }
    fn_82F37588(param_1 + 2,0);
    param_1[0x1c] = 0;
  }
  else {
    do {
      iVar4 = (**(int (***)())(*param_1 + 0x18))(param_1,param_2,0,0);
    } while (-1 < iVar4);
  }
  return 0;
}

