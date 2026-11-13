extern unsigned int *auStack_40;
extern int fn_82F68CC0();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_82830028(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    if ((param_1 & 0xffffffff) != 0) {
      fn_82F68CC0(param_1,auStack_40,0x20);
    }
    param_1 = param_1 + 0x20;
    param_2 = param_2 - 1;
    uVar1 = param_2;
  }
  return;
}

