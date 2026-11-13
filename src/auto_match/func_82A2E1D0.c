extern int fn_82A2BA48();
extern int fn_82A2BAF0();
extern int fn_82A2D960();


__int64 fn_82A2E1D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  unsigned int * apuStack_40;
  
  fn_82A2BA48(param_1,param_2,0);
  lVar2 = 0;
  iVar1 = fn_82A2BAF0(param_1,param_3,0,param_5,&apuStack_40);
  if ((iVar1 != 0) ||
     (lVar2 = fn_82A2D960(param_1,param_3,0,param_4,param_5,&apuStack_40), -1 < lVar2)) {
    *apuStack_40 = (int)param_2;
    *(unsigned char *)((int)apuStack_40 + 7) = *(unsigned char *)((int)apuStack_40 + 7) | 0x40;
  }
  return lVar2;
}

