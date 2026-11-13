typedef unsigned char bool;
extern int fn_82CFC050();
extern int fn_82CFD4F0();


bool fn_82CEB8F0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = fn_82CFD4F0(param_3);
  bVar1 = 0x40 < *(unsigned short *)(iVar2 + 8);
  if (!bVar1) {
    *param_1 = (int)param_3;
    fn_82CFC050(param_1 + 4,param_2,*(unsigned short *)(iVar2 + 8));
  }
  return bVar1;
}

