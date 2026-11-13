extern int fn_82A2B900();
extern int fn_82A2B9A0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


__int64 fn_82A2BAF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  lVar2 = fn_82A2B9A0();
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    fn_82A2B900(param_1,uStack_30,1);
    *(char *)(uStack_2c + 4) = *(char *)(uStack_2c + 4) + '\x01';
    *param_4 = uStack_30 * 0x1000 + iVar1;
    *param_5 = uStack_2c;
  }
  return lVar2;
}

