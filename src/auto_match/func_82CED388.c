extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CFBE30();
extern int fn_82CFBE40();


int fn_82CED388(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82CFBE40();
  if (iVar1 > param_2) {
    iVar1 = param_2;
  }
  iVar2 = fn_82CE5410();
  iVar2 = fn_82CE52E0(*(unsigned int *)(iVar2 + 0x10),iVar1 + 1);
  fn_82CFBE30(iVar2,param_1,iVar1);
  *(unsigned char *)(iVar2 + iVar1) = 0;
  return iVar2;
}

