extern unsigned int *auStack_40;
extern int fn_827E4408();
extern int fn_827E82F8();
extern int fn_827E8720();


__int64 fn_827E8478(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_40 [1];
  
  puVar1 = (unsigned int *)*param_1;
  lVar5 = 0;
  puVar4 = (unsigned int *)*puVar1;
  while (puVar4 != puVar1) {
    uVar2 = puVar4[2];
    iVar3 = fn_827E4408(uVar2);
    if (iVar3 == param_2) {
      puVar4 = (unsigned int *)fn_827E8720(auStack_40,param_1,puVar4);
      puVar4 = (unsigned int *)*puVar4;
      fn_827E82F8(param_3,uVar2);
      lVar5 = lVar5 + 1;
    }
    else {
      puVar4 = (unsigned int *)*puVar4;
    }
    puVar1 = (unsigned int *)*param_1;
  }
  return lVar5;
}

