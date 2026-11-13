extern unsigned int *auStack_10;
extern int fn_82E7EC68();
extern int fn_82E802B0();


unsigned __int64 fn_82E804C0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int auStack_10 [4];
  
  auStack_10[0] = 0;
  if (((*(unsigned short *)param_1 & 0x1000) == 0) && (*(unsigned short *)param_1 != 0)) {
    uVar1 = 0xffffffffc00d36ec;
  }
  else {
    uVar1 = fn_82E7EC68(param_1,auStack_10,param_2);
    if (-1 < (int)uVar1) {
      uVar1 = fn_82E802B0(param_1,auStack_10[0]);
    }
  }
  return uVar1;
}

