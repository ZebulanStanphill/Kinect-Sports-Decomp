extern unsigned char fn_828AD740();
extern unsigned __int64 fn_828AFE88();


void fn_828AFF00(int param_1,__int64 param_2)

{
  unsigned char cVar2;
  unsigned __int64 uVar1;
  
  cVar2 = fn_828AD740(*(unsigned int *)(param_1 + 8));
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(__int64 *)(param_1 + 0x20) = param_2;
      *(unsigned __int64 *)(param_1 + 0x28) = 0;
      *(unsigned char *)(param_1 + 0x18) = 1;
      *(unsigned __int64 *)(param_1 + 0x30) = 0;
    }
    else {
      *(__int64 *)(param_1 + 0x28) = param_2 - *(__int64 *)(param_1 + 0x20);
      uVar1 = fn_828AFE88(param_1);
      *(unsigned __int64 *)(param_1 + 0x30) = uVar1;
    }
  }
  return;
}

