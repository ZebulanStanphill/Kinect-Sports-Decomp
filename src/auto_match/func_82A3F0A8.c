typedef unsigned char bool;
#define false 0
extern int fn_82A3EB70();
extern int fn_82A3F208();


bool fn_82A3F0A8(int param_1)

{
  char cVar1;
  
  cVar1 = fn_82A3EB70(param_1,0x100,param_1 + 0x2b14,param_1 + 0xa18);
  if (((cVar1 != '\0') &&
      (cVar1 = fn_82A3EB70(param_1,(unsigned __int64)*(unsigned char *)(param_1 + 0x2eb5) << 3,param_1 + 0x2c14,
                             param_1 + 0xb18), cVar1 != '\0')) &&
     (cVar1 = fn_82A3F208(param_1,((unsigned __int64)*(unsigned char *)(param_1 + 0x2eb5) + 0x20) * 8,
                                param_1 + 0xa18,10,param_1 + 0x18,param_1 + 0xe3c), cVar1 != '\0'))
  {
    cVar1 = fn_82A3EB70(param_1,0xf9,param_1 + 0x2db4,param_1 + 0xcb8);
    if (cVar1 != '\0') {
      cVar1 = fn_82A3F208(param_1,0xf9,param_1 + 0xcb8,8,param_1 + 0x818,param_1 + 0x233c);
      return cVar1 != '\0';
    }
  }
  return false;
}

