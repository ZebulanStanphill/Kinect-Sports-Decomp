extern int fn_828B1340();
extern int fn_828ED1A0();


unsigned __int64 fn_828A9448(int param_1)

{
  char cVar1;
  
  cVar1 = fn_828B1340();
  if ((cVar1 == '\0') && (cVar1 = fn_828ED1A0(*(unsigned int *)(param_1 + 0x8c)), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

