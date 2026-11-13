extern unsigned int lbl_83219594;


__int64 fn_82A1F198(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  
  if (lbl_83219594 != 0) {
    param_4 = param_4 << 0x20 | param_4 & 0xdfffffff;
  }
  if ((int)param_2 == -1) {
    param_2 = 0;
    lVar1 = -1;
  }
  else {
    lVar1 = param_1 + param_2 + -1;
    param_3 = 0;
  }
  lVar1 = MmAllocatePhysicalMemoryEx(0,param_1,param_4,param_2,lVar1,param_3);
  if (lVar1 == 0) {
    thunk_FUN_82a2b748(8);
  }
  return lVar1;
}

