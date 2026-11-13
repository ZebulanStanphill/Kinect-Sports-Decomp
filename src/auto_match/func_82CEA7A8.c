#define true 1


void fn_82CEA7A8(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  __int64 lVar3;
  unsigned int uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(unsigned __int64 *)(param_2 * 0x10 + *param_1) = 0xffffffffffffffff;
  uVar5 = param_1[2];
  uVar4 = param_2;
  do {
    uVar4 = uVar5 + uVar4 & uVar5;
  } while (*(__int64 *)(uVar4 * 0x10 + *param_1) != -1);
  uVar4 = uVar4 + 1 & uVar5;
  uVar2 = param_2 + 1 & uVar5;
  while( true ) {
    iVar1 = uVar2 * 0x10;
    lVar3 = *(__int64 *)(*param_1 + iVar1);
    if (lVar3 == -1) break;
    uVar5 = ((unsigned int)lVar3 >> 4) * -0x61c8864f & uVar5;
    if ((((uVar2 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar2 || ((uVar5 <= param_2 && (uVar2 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      *(__int64 *)(param_2 * 0x10 + *param_1) = lVar3;
      *(unsigned __int64 *)(param_2 * 0x10 + *param_1 + 8) = *(unsigned __int64 *)(*param_1 + iVar1 + 8);
      *(unsigned __int64 *)(iVar1 + *param_1) = 0xffffffffffffffff;
      param_2 = uVar2;
    }
    uVar5 = param_1[2];
    uVar2 = uVar2 + 1 & uVar5;
  }
  return;
}

