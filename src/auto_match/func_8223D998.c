#define true 1
extern int memcpy();


__int64 fn_8223D998(int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  lVar2 = 0;
  while( true ) {
    while( true ) {
      if ((__int64)param_3 < 1) {
        return lVar2;
      }
      if (*(int *)param_1[8] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)param_1[0xc];
      }
      uVar3 = (unsigned __int64)iVar1;
      if ((__int64)uVar3 < 1) break;
      if ((__int64)param_3 < (__int64)uVar3) {
        uVar3 = param_3;
      }
      memcpy(param_2,*(int *)param_1[8],uVar3 & 0xffffffff);
      param_2 = (uVar3 & 0xffffffff) + param_2;
      lVar2 = uVar3 + lVar2;
      param_3 = param_3 - uVar3;
      *(int *)param_1[0xc] = *(int *)param_1[0xc] - (int)uVar3;
      *(int *)param_1[8] = *(int *)param_1[8] + (int)uVar3;
    }
    iVar1 = (**(int (***)())(*param_1 + 0x1c))(param_1);
    if (iVar1 == -1) break;
    *(unsigned char *)param_2 = (char)iVar1;
    lVar2 = lVar2 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  return lVar2;
}

