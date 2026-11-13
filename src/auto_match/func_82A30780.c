extern unsigned int *auStack_24;
extern int fn_82A2CB08();
extern int fn_82A30690();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


__int64 fn_82A30780(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned char auStack_24 [36];
  
  if ((*(unsigned char *)(param_2 + 0x35) & 0x20) == 0) {
    lVar1 = fn_82A30690(param_1,(unsigned __int64)*(unsigned short *)(param_2 + 0x36) << 6,auStack_24,&uStack_28,
                          &uStack_2c,&uStack_30);
    if (-1 < lVar1) {
      *(unsigned char *)(param_2 + 0x35) = *(unsigned char *)(param_2 + 0x35) | 0x20;
      fn_82A2CB08(param_1,uStack_28,uStack_2c,uStack_30);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

