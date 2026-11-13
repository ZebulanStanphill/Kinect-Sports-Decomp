extern int fn_82F640F0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;


/* WARNING: Removing unreachable block (ram,0x8266712c) */

int fn_826670F0(int param_1,int param_2,unsigned char *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iStack00000014;
  int iStack0000001c;
  unsigned char *puStack00000024;
  
  uVar2 = param_2 - ((int)param_3 - param_1);
  if (uVar2 == 0) {
    *param_3 = 0;
  }
  else {
    iStack00000014 = param_1;
    iStack0000001c = param_2;
    puStack00000024 = param_3;
    iVar1 = fn_82F640F0(param_3,(unsigned __int64)uVar2 + 1,param_3 + 1,uVar2);
    param_1 = iStack00000014;
    if (iVar1 != 0) {
      param_1 = 0;
    }
  }
  return param_1;
}

