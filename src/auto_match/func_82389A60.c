extern int fn_822BD338();


unsigned __int64 fn_82389A60(int param_1)

{
  char cVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  if (((1 < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    lVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x114) + 0x20) + 4;
    lVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x114) + 0x20) + 4;
    cVar1 = fn_822BD338(lVar3,0xffffffff821acfe4);
    if (((cVar1 != '\0') || (cVar1 = fn_822BD338(lVar3,0xffffffff821aca8c), cVar1 != '\0')) &&
       ((cVar1 = fn_822BD338(lVar2,0xffffffff821acfe4), cVar1 != '\0' ||
        (cVar1 = fn_822BD338(lVar2,0xffffffff821aca8c), cVar1 != '\0')))) {
      return 1;
    }
  }
  return 0;
}

