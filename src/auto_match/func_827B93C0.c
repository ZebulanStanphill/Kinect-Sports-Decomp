extern int fn_827B76D8();
extern int fn_827B8DB0();
extern int fn_827B8E10();
extern int fn_827B8FC8();
extern int fn_827B9368();


unsigned int * fn_827B93C0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *apuStack_40 [2];
  unsigned int *puStack_38;
  unsigned int **ppuStack_34;
  
  uVar3 = (unsigned int)param_4;
  if (((param_1[5] < uVar3) || ((param_3 & 0xffffffff) == 0)) || (uVar3 == 0)) {
    apuStack_40[0] = (unsigned int *)0x0;
  }
  else {
    if (uVar3 < *param_1) {
      *param_1 = uVar3;
    }
    if ((param_3 & 0xffffffff) < (unsigned __int64)*param_1) {
      *param_1 = (unsigned int)param_3;
    }
    apuStack_40[0] = (unsigned int *)fn_827B8DB0(param_1,param_3,param_4);
    if (((apuStack_40[0] == (unsigned int *)0x0) &&
        (apuStack_40[0] = (unsigned int *)fn_827B8E10(param_1,param_3,param_4),
        apuStack_40[0] == (unsigned int *)0x0)) &&
       (apuStack_40[0] = (unsigned int *)fn_827B8FC8(param_1,param_3,param_4),
       apuStack_40[0] == (unsigned int *)0x0)) {
      return (unsigned int *)0x0;
    }
    puVar4 = param_1 + 0x21;
    *apuStack_40[0] = *param_2;
    apuStack_40[0][1] = param_2[1];
    apuStack_40[0][2] = param_2[2];
    *(unsigned short *)(apuStack_40[0] + 8) = 0;
    *(unsigned short *)((int)apuStack_40[0] + 0x22) = 0;
    puVar1 = (unsigned int *)apuStack_40[0][3];
    *(unsigned int *)(*puVar1 + 4) = puVar1[1];
    *(unsigned int *)puVar1[1] = *puVar1;
    *puVar1 = param_1[0xc];
    puVar1[1] = (unsigned int)(param_1 + 0xc);
    *(unsigned int **)(param_1[0xc] + 4) = puVar1;
    param_1[0xc] = (unsigned int)puVar1;
    iVar2 = fn_827B76D8(puVar4,param_2);
    if (iVar2 == 0) {
      ppuStack_34 = apuStack_40;
      puStack_38 = param_2;
      fn_827B9368(puVar4,puVar4,&puStack_38);
    }
  }
  return apuStack_40[0];
}

