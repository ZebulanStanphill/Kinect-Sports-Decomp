extern int fn_82A2B798();
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82CE1C28(unsigned __int64 param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
                       unsigned __int64 param_5)

{
  int iVar2;
  __int64 lVar1;
  unsigned int uStack_30;
  unsigned __int64 uStack_2c;
  unsigned int uStack_24;
  unsigned int *puStack_20;
  
  if ((0x535 < *param_3) && (param_4 != (unsigned int *)0x0)) {
    *param_4 = 0;
    param_4[1] = 0;
    uStack_24 = *param_3;
    uStack_30 = param_2;
    uStack_2c = param_1;
    puStack_20 = param_4;
    iVar2 = XMsgStartIORequest(0xfb,0xb001b,param_5,&uStack_30,0x14);
    if (-1 < iVar2) {
      if ((param_5 & 0xffffffff) == 0) {
        lVar1 = fn_82A2B798();
        return -(unsigned __int64)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *param_3 = 0x536;
  return 0x7a;
}

