extern int fn_82A2A378();
extern int fn_82E21160();
extern int fn_82E211B0();
extern int fn_82F64840();
extern int fn_82F64CE0();


unsigned __int64 fn_82E212B0(char *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lVar1 = fn_82F64CE0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*param_1 == '\0') {
      uVar2 = fn_82E211B0(param_1,lVar1);
      fn_82A2A378(0,0,param_2,lVar1,uVar2,lVar1,0,0);
    }
    else {
      uVar2 = fn_82E21160();
      fn_82F64840(uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 8) - (unsigned __int64)*(unsigned int *)(param_1 + 4),
                        param_2,lVar1);
    }
    uVar2 = 1;
    *(int *)(param_1 + 4) = (int)lVar1 + *(int *)(param_1 + 4);
  }
  return uVar2;
}

