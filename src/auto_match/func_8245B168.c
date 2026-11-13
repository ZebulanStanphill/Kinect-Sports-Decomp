extern int fn_8245B1F0();
extern int fn_82A1DD38();


unsigned __int64 fn_8245B168(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    iVar3 = fn_8245B1F0(param_1);
    if (iVar3 != 0) {
      puVar1 = *(unsigned int **)(param_1 + 0x20);
      if ((puVar1[2] + param_3) <= puVar1[1]) {
        fn_82A1DD38(*puVar1 + puVar1[2],param_2,param_3);
        puVar1[2] = param_3 + puVar1[2];
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

