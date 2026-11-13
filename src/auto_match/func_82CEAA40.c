extern int fn_82CEA6F8();


char * fn_82CEAA40(char *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82CEA6F8(param_2,param_3);
  *param_1 = ((char)((int)*(unsigned int *)(param_2 + 8) >> 0x1f) - ((char)(uVar1 >> 0x18) >> 7)) +
             (uVar1 <= *(unsigned int *)(param_2 + 8));
  return param_1;
}

