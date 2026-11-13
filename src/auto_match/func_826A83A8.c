extern int fn_826959C8();
extern int fn_826C0330();


unsigned __int64 fn_826A83A8(int param_1,int *param_2,int *param_3,unsigned char *param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned char uVar3;
  
  if (*param_3 == *(int *)(*param_2 + 0x11c)) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0x2a4);
    if (cVar1 == '\0') {
      fn_826959C8(param_4);
      uVar3 = 0;
    }
    else {
      fn_826959C8(param_4);
      uVar3 = 2;
      param_4[4] = cVar1 == '\x01';
    }
    uVar2 = (unsigned __int64)(cVar1 != '\0');
    *param_4 = uVar3;
  }
  else {
    uVar2 = fn_826C0330();
  }
  return uVar2;
}

