extern int fn_82FF5750();
extern int fn_82FF5B50();
extern unsigned int lbl_832642F4;


unsigned __int64 fn_83033110(int param_1,unsigned __int64 param_2,unsigned char param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  *(int *)(param_1 + 0x94) = (int)param_4;
  if ((*(int *)(param_1 + 0x24) != 0) && ((int)param_4 != 0)) {
    fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x24),param_4 + 4);
  }
  lVar2 = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 0xbf;
  if ((param_2 & 0xffffffff) != 0) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x94) != 0) {
      lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) + 4;
    }
    uVar1 = fn_82FF5B50(lbl_832642F4,param_2,lVar2);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  *(int *)(param_1 + 0x24) = (int)param_2;
  *(unsigned char *)(param_1 + 0x28) = (param_3 & 1) << 6 | *(unsigned char *)(param_1 + 0x28) & 0xbf;
  return 1;
}

