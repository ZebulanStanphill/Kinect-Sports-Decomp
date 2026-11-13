extern int memcpy();


void fn_82D5BCE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  int *param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  if ((float)param_4[0xc0c] != (float)param_1[0x40c]) {
    (**(int (***)())(*param_5 + 0x20))(param_5,param_4[1],param_4 + 0xc14);
    puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x1010 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar4 = (unsigned __int64 *)(param_1 + 0x412);
    puVar2 = (unsigned int *)((int)param_4 + in_r0 + 0x3010 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x408) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar3 = (unsigned __int64 *)(param_4 + 0xc12);
    puVar2 = (unsigned int *)((unsigned int)(param_4 + 0xc08) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    param_4[0xc0c] = param_1[0x40c];
    lVar5 = 6;
    param_4[0xc0d] = param_1[0x40d];
    *(unsigned __int64 *)(param_4 + 0xc10) = *(unsigned __int64 *)(param_1 + 0x410);
    *(unsigned __int64 *)(param_4 + 0xc12) = *(unsigned __int64 *)(param_1 + 0x412);
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *param_4 = *param_1;
  if (param_4[0xc20] != 0) {
    memcpy(param_4[0xc20],param_1 + 1,0x1008);
  }
  return;
}

