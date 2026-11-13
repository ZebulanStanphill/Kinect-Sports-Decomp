extern int fn_82D0FA60();


unsigned __int64 fn_82D0FE70(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int * apuStack_30;
  
  iVar3 = param_3[1];
  fn_82D0FA60(param_1,param_2,&apuStack_30);
  if (apuStack_30 == (unsigned int *)0x0) {
    if (iVar3 < param_3[1]) {
      iVar4 = iVar3 << 2;
      do {
        puVar1 = *(unsigned int **)(*param_3 + iVar4);
        if (puVar1 != (unsigned int *)0x0) {
          (**(int (***)())*puVar1)(puVar1,1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < param_3[1]);
    }
    uVar2 = 0;
    param_3[1] = 0;
  }
  else {
    (**(int (***)())*apuStack_30)(apuStack_30,1);
    uVar2 = 1;
  }
  return uVar2;
}

