extern unsigned int *auStack_40;
extern int fn_82897BD0();
extern int fn_82898430();
extern int fn_828999E8();
extern int fn_8289BBE8();


__int64 fn_8289BD98(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  char cVar6;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned char auStack_40 [4];
  unsigned int *puStack_3c;
  unsigned int *apuStack_38 [2];
  
  if ((((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar3 != 0)) ||
      ((*(int **)(param_1 + 0x20) != (int *)0x0 &&
       (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)))) &&
     ((cVar6 = fn_82898430(param_1,param_2), cVar6 != '\0' && (*(char *)(param_2 + 0x26) == '\0'))
     )) {
    uVar4 = fn_82897BD0(param_2);
    puVar7 = (unsigned int *)(*(unsigned int **)(param_1 + 0x48))[1];
    cVar6 = *(char *)((int)puVar7 + 0x1d);
    apuStack_38[0] = *(unsigned int **)(param_1 + 0x48);
    while (cVar6 == '\0') {
      if ((unsigned int)puVar7[3] < uVar4) {
        puVar5 = (unsigned int *)puVar7[2];
        puVar7 = apuStack_38[0];
      }
      else {
        puVar5 = (unsigned int *)*puVar7;
      }
      apuStack_38[0] = puVar7;
      puVar7 = puVar5;
      cVar6 = *(char *)((int)puVar5 + 0x1d);
    }
    uVar4 = fn_82897BD0(param_2);
    puStack_3c = *(unsigned int **)(param_1 + 0x48);
    cVar6 = *(char *)((int)puStack_3c[1] + 0x1d);
    puVar7 = (unsigned int *)puStack_3c[1];
    while (cVar6 == '\0') {
      if (uVar4 < (unsigned int)puVar7[3]) {
        puVar5 = (unsigned int *)*puVar7;
        puStack_3c = puVar7;
      }
      else {
        puVar5 = (unsigned int *)puVar7[2];
      }
      puVar7 = puVar5;
      cVar6 = *(char *)((int)puVar5 + 0x1d);
    }
    fn_8289BBE8(param_1 + 0x44,apuStack_38,&puStack_3c,auStack_40);
    uVar4 = fn_82897BD0(param_2);
    puVar7 = (unsigned int *)(*(unsigned int **)(param_1 + 0x48))[1];
    cVar6 = *(char *)((int)puVar7 + 0x1d);
    puVar5 = *(unsigned int **)(param_1 + 0x48);
    while (cVar6 == '\0') {
      if ((unsigned int)puVar7[3] < uVar4) {
        puVar1 = (unsigned int *)puVar7[2];
        puVar7 = puVar5;
      }
      else {
        puVar1 = (unsigned int *)*puVar7;
      }
      puVar5 = puVar7;
      puVar7 = puVar1;
      cVar6 = *(char *)((int)puVar1 + 0x1d);
    }
    uVar4 = fn_82897BD0(param_2);
    puVar7 = *(unsigned int **)(param_1 + 0x48);
    cVar6 = *(char *)((int)puVar7[1] + 0x1d);
    puVar1 = (unsigned int *)puVar7[1];
    while (cVar6 == '\0') {
      if (uVar4 < (unsigned int)puVar1[3]) {
        puVar2 = (unsigned int *)*puVar1;
        puVar7 = puVar1;
      }
      else {
        puVar2 = (unsigned int *)puVar1[2];
      }
      puVar1 = puVar2;
      cVar6 = *(char *)((int)puVar2 + 0x1d);
    }
    puVar5 = (unsigned int *)fn_828999E8(apuStack_38,puVar5,puVar7,param_1);
    if (((unsigned int *)*puVar5 != puVar7) &&
       (uVar8 = (unsigned __int64)(unsigned int)((unsigned int *)*puVar5)[6], uVar8 != 0)) {
      return uVar8 - 0x50;
    }
  }
  return 0;
}

