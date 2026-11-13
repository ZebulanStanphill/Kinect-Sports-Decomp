extern int fn_82CE2830();
extern int fn_82CE3440();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;


__int64 fn_82CE2988(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  __int64 lVar1;
  unsigned short uStack_40;
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  *(int *)(param_1 + 0x14) = param_2;
  lVar1 = fn_82CE2830(param_2,param_3,&uStack_40);
  if (-1 < lVar1) {
    if (param_4 != 0) {
      uStack_3e = uStack_40;
      uStack_38 = uStack_3c;
    }
    lVar1 = 0;
    fn_82CE3440(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x34) + (unsigned __int64)uStack_38,uStack_3e,
                 uStack_3e,1);
  }
  return lVar1;
}

