#define true 1
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_829354C0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar2 = ((unsigned __int64)param_1[1] + 3 & 0xffffffff) >> 2;
  if ((int)param_3 == -1) {
    param_3 = uVar2 + 2;
  }
  else if ((param_3 & 0xffffffff) < uVar2 + 2) {
    return 0xffffffff80004005;
  }
  if (0x8000 < (param_3 & 0xffffffff)) {
    return 0xffffffff80004005;
  }
  lVar4 = param_2 + 8;
  lVar3 = 0;
  *(unsigned int *)param_2 = (unsigned int)((param_3 - 1 & 0xffffffff) << 0x10) & 0x7fff0000 | 0xfffe;
  ((unsigned int *)param_2)[1] = *param_1;
  puVar1 = (unsigned int *)param_1[2];
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar4,0xab,(param_3 - 2 & 0x3fffffff) * 4 - lVar3);
    }
    if ((puVar1[2] & 4) == 0) break;
    fn_82F68CC0(lVar4,*puVar1,puVar1[1]);
    lVar4 = (unsigned __int64)(unsigned int)puVar1[1] + lVar4;
    lVar3 = (unsigned __int64)(unsigned int)puVar1[1] + lVar3;
    puVar1 = (unsigned int *)puVar1[4];
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar4,0xab,(lVar3 + 3U & 0xfffffffc) - lVar3);
}

