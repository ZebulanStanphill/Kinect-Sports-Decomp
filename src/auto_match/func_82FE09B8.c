extern int fn_82FE3FB8();
extern int fn_82FE57F8();


void fn_82FE09B8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82FE57F8((double)*(float *)(param_1 + 0x150),(double)*(float *)(param_1 + 0x154),param_2,
                  param_4,param_5,param_3,*(unsigned int *)(param_2 + 4));
  if ((*(char *)(param_1 + 0x170) != '\0') && (*(char *)(param_1 + 0xcc) != '\0')) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x28 + *(int *)(param_1 + 0xd8);
      if (*(int *)(iVar1 + 0x24) == 3) {
        fn_82FE3FB8(iVar1,param_3,param_4);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(unsigned char *)(param_1 + 0xcc));
  }
  return;
}

