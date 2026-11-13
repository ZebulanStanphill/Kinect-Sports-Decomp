extern int fn_82542830();
extern int fn_82542F28();


void fn_82542E08(int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  __int64 lVar2;
  
  if ((*(int *)(param_2 + 0x14) != 0) && (*(int *)(*(int *)(param_2 + 0x14) + 0x24) != 0)) {
    iVar1 = *param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    lVar2 = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = -1;
    param_1[6] = -1;
    param_1[0x2014] = -1;
    *(unsigned int *)(iVar1 + 0x2ed8) = 0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
    if (0 < param_3) {
      do {
        fn_82542830(param_1,lVar2);
        fn_82542F28(param_1,param_2,4,param_4);
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < param_3);
    }
  }
  return;
}

