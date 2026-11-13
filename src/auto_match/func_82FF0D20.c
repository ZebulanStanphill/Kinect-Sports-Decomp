extern int fn_82FF0478();
extern int fn_82FF5400();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_832642F4;


unsigned __int64 fn_82FF0D20(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  param_1[0x4c] = param_1[0x4c] + 1;
  if (*param_2 == 0) {
    if ((*(unsigned char *)(param_1 + 0x36) & 0x1e) == 0) {
      uVar1 = 0;
    }
    else {
      if (param_1[0x17] != 0) {
        fn_82FF5400((double)lbl_8216C698,lbl_832642F4,param_1[0x17],0x4000000);
        RtlLeaveCriticalSection(0xffffffff83264558);
        return 1;
      }
      uVar1 = 1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x10))(param_1,uVar1);
    RtlLeaveCriticalSection(0xffffffff83264558);
  }
  else {
    fn_82FF0478(param_1,0,0x4000000,*(unsigned __int64 *)param_2,1);
    RtlLeaveCriticalSection(0xffffffff83264558);
    uVar1 = 1;
  }
  return uVar1;
}

