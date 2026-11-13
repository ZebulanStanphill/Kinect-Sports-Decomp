extern int fn_825089A0();
extern int fn_82892428();
extern int fn_82892488();
extern int fn_828CCB18();


unsigned int * fn_82893850(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int * apuStack_50;
  
  puVar4 = *(unsigned int **)(param_2 + 4);
  puVar9 = (unsigned int *)(param_3 + 0xc);
  uVar10 = 1;
  uVar6 = param_2;
  if (*(char *)((int)puVar4[1] + 0x29) == '\0') {
    uVar7 = (unsigned __int64)*puVar9;
    uVar3 = param_4 & 0xff;
    puVar1 = (unsigned int *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar8 = (unsigned __int64)(unsigned int)puVar4[3];
      if (uVar3 == 0) {
        param_4 = uVar7 - uVar8;
        uVar6 = -(unsigned int)(uVar7 < uVar8);
        uVar10 = uVar6 & 1;
      }
      else {
        uVar10 = -((uVar8 < uVar7) - 1);
      }
      if ((uVar10 & 0xff) == 0) {
        puVar1 = (unsigned int *)puVar4[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x29) == '\0');
  }
  apuStack_50 = puVar4;
  if ((uVar10 & 0xff) != 0) {
    if (puVar4 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      puVar4 = (unsigned int *)fn_82892488(&apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(unsigned char *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_828CCB18(&apuStack_50,uVar6,param_3,param_4);
  }
  puVar1 = apuStack_50;
  if ((unsigned int)apuStack_50[3] < *puVar9) {
    puVar4 = (unsigned int *)fn_82892488(&apuStack_50,param_2,uVar10,puVar4,param_3);
    uVar2 = *puVar4;
    *(unsigned char *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_82892428(param_2 + 0xd,puVar9);
    piVar5 = (int *)fn_825089A0();
    (**(int (***)())(*piVar5 + 0x28))(piVar5,param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
  }
  return param_1;
}

