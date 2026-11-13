extern int fn_8265CA20();
extern int fn_82827DB8();
extern int fn_82828828();
extern int fn_82872898();


unsigned int * fn_82829398(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar4;
  unsigned int *puVar3;
  unsigned __int64 uVar5;
  unsigned int *apuStack_50 [20];
  
  uVar5 = 1;
  puVar3 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  cVar4 = *(char *)((int)puVar3 + 0x11);
  puVar2 = *(unsigned int **)(param_2 + 4);
  while (cVar4 == '\0') {
    if (param_4 == '\0') {
      uVar5 = fn_82827DB8(param_2,*(unsigned int *)(param_3 + 0xc),puVar3[3]);
    }
    else {
      cVar4 = fn_82827DB8(param_2,puVar3[3],*(unsigned int *)(param_3 + 0xc));
      uVar5 = (unsigned __int64)(cVar4 == '\0');
    }
    if ((uVar5 & 0xff) == 0) {
      puVar1 = (unsigned int *)puVar3[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar3;
    }
    puVar2 = puVar3;
    puVar3 = puVar1;
    cVar4 = *(char *)((int)puVar1 + 0x11);
  }
  apuStack_50[0] = puVar2;
  if ((uVar5 & 0xff) != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      uVar5 = 1;
      goto LAB_82829454;
    }
    fn_82872898(apuStack_50);
  }
  puVar3 = apuStack_50[0];
  cVar4 = fn_82827DB8(param_2,apuStack_50[0][3],*(unsigned int *)(param_3 + 0xc));
  if (cVar4 == '\0') {
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82829454:
  puVar3 = (unsigned int *)fn_82828828(apuStack_50,param_2,uVar5,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

