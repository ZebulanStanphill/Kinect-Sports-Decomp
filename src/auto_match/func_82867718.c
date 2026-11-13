extern int fn_828681F8();
extern int fn_828682B8();
extern int fn_82868438();
extern int fn_828685D8();
extern int fn_82868698();
extern int fn_82868758();
extern int fn_8286B080();


unsigned __int64 fn_82867718(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82868438();
  *(unsigned int *)(param_1 + 0x490) = uVar1;
  uVar1 = fn_828685D8();
  *(unsigned int *)(param_1 + 0x494) = uVar1;
  uVar1 = fn_82868698();
  *(unsigned int *)(param_1 + 0x498) = uVar1;
  uVar1 = fn_82868758();
  *(unsigned int *)(param_1 + 0x49c) = uVar1;
  uVar1 = fn_828681F8();
  *(unsigned int *)(param_1 + 0x4a0) = uVar1;
  uVar1 = fn_8286B080();
  *(unsigned int *)(param_1 + 0x4a4) = uVar1;
  uVar1 = fn_828682B8();
  *(unsigned int *)(param_1 + 0x4a8) = uVar1;
  return 0x200a0000;
}

