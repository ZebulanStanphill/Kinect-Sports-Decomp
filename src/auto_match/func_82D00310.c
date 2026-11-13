typedef unsigned char bool;
extern int fn_82D001D8();


bool fn_82D00310(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82D001D8();
  iVar1 = param_1[2];
  if (iVar1 >= iVar2) {
    *param_3 = *(unsigned int *)(((iVar1 + 1) * 2 + iVar2) * 4 + *param_1);
  }
  return iVar1 < iVar2;
}

