extern int fn_827AEAC0();
extern int fn_827AEE00();
extern int fn_827AFD48();


__int64 fn_827AFE68(unsigned int *param_1,int param_2)

{
  int iVar2;
  __int64 lVar1;
  
  *(unsigned char *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x19) = 0;
  iVar2 = fn_827AEE00(param_1,*(unsigned int *)(param_2 + 0x14));
  if (iVar2 == 0) {
    lVar1 = fn_827AEAC0(param_1,0,param_1[1],param_2 + 0x14,0xffffffff827aea98);
    fn_827AFD48(param_1,lVar1,param_2);
    lVar1 = lVar1 * 0x28 + (unsigned __int64)*param_1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

