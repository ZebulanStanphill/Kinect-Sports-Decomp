extern int fn_82E50330();
extern unsigned int uStack_28;
extern unsigned int uStack_30;


__int64 fn_82E7D948(unsigned __int64 param_1,unsigned short param_2,unsigned __int64 param_3,int *param_4,
                      int *param_5)

{
  __int64 lVar1;
  int iVar2;
  int * apiStack_40;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  apiStack_40 = (int *)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = (**(int (***)())(*param_5 + 0xc))(param_5,param_3,param_2,0,&apiStack_40);
  if (((-1 < lVar1) &&
      (iVar2 = (**(int (***)())(*apiStack_40 + 0x1c))(apiStack_40,0xffffffff8215f0d0,&uStack_30),
      iVar2 == 0)) && ((((unsigned __int64)(uStack_30) >> 0) & 0xFFFF) == 0x1f)) {
    lVar1 = (**(int (***)())(*param_4 + 100))(param_4,0xffffffff8214c230,(((unsigned __int64)(uStack_28) >> 0) & 0xFFFFFFFF));
  }
  if (apiStack_40 != (int *)0x0) {
    (**(int (***)())(*apiStack_40 + 8))();
    apiStack_40 = (int *)0x0;
  }
  fn_82E50330(&uStack_30);
  return lVar1;
}

