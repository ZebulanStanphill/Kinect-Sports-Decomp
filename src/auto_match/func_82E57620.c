extern int fn_82EE5E28();
extern int fn_82EE5F60();
extern unsigned int uStack_28;
extern unsigned int uStack_2a;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82E57620(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uStack_30;
  unsigned short uStack_2c;
  unsigned short uStack_2a;
  unsigned __int64 uStack_28;
  
  iVar1 = fn_82EE5F60(param_2,&uStack_30,0x10);
  if (-1 < iVar1) {
    *(unsigned short *)(param_1 + 1) = uStack_2c << 8 | uStack_2c >> 8;
    *param_1 = uStack_30 << 0x18 | (uStack_30 & 0xff00) << 8 | uStack_30 >> 8 & 0xff00 |
               uStack_30 >> 0x18;
    *(unsigned short *)((int)param_1 + 6) = uStack_2a << 8 | uStack_2a >> 8;
    *(unsigned __int64 *)(param_1 + 2) = uStack_28;
    fn_82EE5E28(param_2,0x10);
  }
  return;
}

