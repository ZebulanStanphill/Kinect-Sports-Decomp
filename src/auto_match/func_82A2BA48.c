extern unsigned int *auStack_28;
extern int fn_82A2B900();
extern int fn_82A2B9A0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A2BA48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [40];
  
  iVar2 = fn_82A2B9A0();
  uVar1 = uStack_30;
  if (iVar2 != 0) {
    if (((*(unsigned char *)(uStack_30 + 7) & 0x10) != 0) &&
       ((param_3 & 0xffffffff) != (unsigned __int64)*(unsigned char *)(param_1 + 0xca) + 1)) {
      fn_82A2B9A0(param_1,param_2,param_3 + 1,&uStack_30,auStack_28);
      iVar2 = ((int)(uStack_30 << 0xc | uStack_30 >> 0x14) >> 0xc) * 8 + *(int *)(param_1 + 0x30);
      *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
    }
    *(unsigned char *)(uVar1 + 7) = 0;
    fn_82A2B900(param_1,uStack_2c,0);
  }
  return;
}

