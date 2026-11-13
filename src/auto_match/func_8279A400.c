extern int fn_8278FDC8();
extern int fn_82791FD0();


unsigned __int64 fn_8279A400(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (iVar1 = fn_8278FDC8((unsigned int)*(unsigned int *)(param_1 + 0x1c) + 0x14), iVar1 != 0)) {
    iVar1 = fn_82791FD0(param_1 + 0x4c);
    if (((unsigned int)(*(int *)(*(int *)(param_1 + 0x30) + 0x1c) + *(int *)(iVar1 + 4)) >=
         *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x30)) &&
       (uVar2 = fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14),
       *(unsigned int *)(param_1 + 0x28) < uVar2)) {
      return 1;
    }
  }
  return 0;
}
