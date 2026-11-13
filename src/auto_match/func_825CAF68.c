typedef unsigned char bool;
#define false 0
extern int fn_8284C850();
extern int fn_8284C858();


bool fn_825CAF68(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  bool bVar5;
  
  iVar2 = fn_8284C850(*(unsigned int *)(*(int *)(*(int *)(param_3 + 0x54) + 0x88) + 0x14));
  iVar3 = fn_8284C858(*(unsigned int *)(*(int *)(*(int *)(param_3 + 0x54) + 0x88) + 0x14));
  iVar1 = *(int *)(param_3 + 0x54);
  lVar4 = (unsigned __int64)(unsigned int)(int)((double)(__int64)(iVar2 + -1) * param_1) +
          (__int64)*(int *)(iVar1 + 0xb4) *
          (__int64)(int)((double)(__int64)(iVar3 + -1) * param_2);
  if ((lVar4 < 0) || (iVar2 = (int)lVar4, *(int *)(iVar1 + 0xb8) * *(int *)(iVar1 + 0xb4) <= iVar2))
  {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(*(int *)(iVar1 + 0xc0) + iVar2) != '\0';
  }
  return bVar5;
}

