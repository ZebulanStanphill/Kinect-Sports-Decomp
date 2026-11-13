extern int fn_82E57B08();
extern int fn_82F64CE0();


unsigned __int64 fn_82E58570(int param_1,__int64 *param_2,__int64 *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned short uVar4;
  unsigned int * apuStack_50;
  
  uVar2 = 0;
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    lVar3 = 0x1a;
    if (*(unsigned int *)(param_1 + 0xb0) > 0) {
      uVar4 = 0;
      do {
        fn_82E57B08(param_1 + 0x48,uVar4,&apuStack_50);
        uVar1 = fn_82F64CE0(*apuStack_50);
        lVar3 = ((uVar1 & 0x7fffffff) * 2 + 3 & 0xffffffff) + lVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(unsigned int *)(param_1 + 0xb0));
    }
    if (param_2 != (__int64 *)0x0) {
      *param_2 = lVar3;
    }
    if (param_3 != (__int64 *)0x0) {
      *param_3 = lVar3;
    }
    *(__int64 *)(param_1 + 0x20) = lVar3;
  }
  return uVar2;
}

