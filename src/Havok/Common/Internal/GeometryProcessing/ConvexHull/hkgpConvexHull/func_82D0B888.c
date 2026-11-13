extern int fn_82D0B6F8();
extern int fn_82D0B7C0();
extern int fn_82F655D8();
extern unsigned int lbl_821345AC;
extern unsigned int lbl_821345B0;


double fn_82D0B888(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = fn_82D0B6F8();
  dVar2 = (double)fn_82F655D8(uVar1,lbl_821345B0);
  dVar3 = (double)(float)dVar2;
  dVar2 = (double)fn_82D0B7C0(param_1);
  return (double)(float)((double)(float)(dVar3 * (double)lbl_821345AC) / dVar2);
}

