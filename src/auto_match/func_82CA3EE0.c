extern int memcpy();


void fn_82CA3EE0(unsigned int *param_1,unsigned int *param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  unsigned int uVar1;
  int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int lVar5;
  
  if (param_4 >= param_6) {
    param_4 = param_6;
  }
  uVar2 = param_4 >> 3;
  { int remainder=param_4-uVar2*8;
  if (0 < (int)param_3) {
    int rows=param_3;
    do {
      puVar3 = param_1;
      puVar4 = param_2;
      if (0 < (int)uVar2) {
        lVar5 = uVar2;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 2;
          *puVar3 = uVar1;
          puVar3[1] = *(unsigned int *)(((int)param_2-(int)param_1)+(int)puVar3+4);
          puVar3 = puVar3 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      memcpy(puVar3,puVar4,remainder);
      rows=rows-1;
      param_1 = (unsigned int *)((int)param_1 + param_6);
      param_2 = (unsigned int *)((int)param_2 + param_5);
    } while (rows != 0);
  }
  }
  return;
}

