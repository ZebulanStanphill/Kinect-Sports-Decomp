extern int fn_8265D3F0();
extern int fn_8265FE68();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_10;
extern unsigned int uStack_c;


unsigned int fn_82666F40(unsigned int param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack_c = fn_8265D3F0(param_1);
  lVar1 = fn_8265FE68(uStack00000014);
  if ((lVar1 - (unsigned __int64)uStack_c / 2 & 0xffffffff) < (unsigned __int64)uStack_c) {
    uStack_c = 0;
  }
  else {
    uStack_c = uStack_c + uStack_c / 2;
  }
  uStack_10 = uStack_c;
  if (uStack_c < uStack0000001c) {
    uStack_10 = uStack0000001c;
  }
  return uStack_10;
}

