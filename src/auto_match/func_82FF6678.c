extern int fn_82FF7D48();
extern int fn_8302AE48();


unsigned __int64 fn_82FF6678(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piVar6;
  
  for (piVar6 = *(int **)(param_1 + 4); (piVar6 != *(int **)(param_1 + 8) && (*piVar6 != param_2));
      piVar6 = piVar6 + 2) {
  }
  lVar3 = -(unsigned __int64)(*(int **)(param_1 + 8) != piVar6);
  iVar1 = *(int *)((unsigned int)lVar3 & (unsigned int)(piVar6 + 1));
  for (puVar5 = *(unsigned int **)(iVar1 + 0x10);
      (puVar5 != *(unsigned int **)(iVar1 + 0x14) && ((unsigned __int64)*puVar5 != (param_3 & 0xffffffff)));
      puVar5 = puVar5 + 4) {
  }
  uVar2 = (unsigned int)(*(unsigned int **)(iVar1 + 0x14) != puVar5);
  piVar6 = (int *)(-(unsigned int)(uVar2 != 0) & (unsigned int)(puVar5 + 1));
  if (piVar6 == (int *)0x0) {
    uVar4 = 0xf;
  }
  else {
    piVar6 = (int *)*piVar6;
    if (*(int **)(iVar1 + 0xc) == piVar6) {
      *(unsigned int *)(iVar1 + 0xc) = 0;
    }
    fn_8302AE48(piVar6,lVar3,-uVar2);
    (**(int (***)())(*piVar6 + 8))(piVar6);
    fn_82FF7D48(iVar1 + 0x10,param_3);
    uVar4 = 1;
  }
  return uVar4;
}

