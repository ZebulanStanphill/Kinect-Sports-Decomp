extern int fn_83005690();


unsigned __int64 fn_83006458(unsigned __int64 param_1,int *param_2,int *param_3)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned short uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  
  uVar3 = *(unsigned short *)*param_2;
  *param_2 = (int)((unsigned short *)*param_2 + 1);
  for (uVar9 = (unsigned __int64)uVar3; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar4 = (unsigned int *)*param_2;
    uVar5 = *puVar4;
    *param_2 = (int)(puVar4 + 1);
    uVar1 = *(unsigned char *)(puVar4 + 1);
    *param_2 = (int)puVar4 + 5;
    uVar6 = *(unsigned int *)((int)puVar4 + 5);
    *param_2 = (int)puVar4 + 9;
    uVar7 = *(unsigned int *)((int)puVar4 + 9);
    *param_2 = (int)puVar4 + 0xd;
    uVar8 = *(unsigned int *)((int)puVar4 + 0xd);
    *param_2 = (int)puVar4 + 0x11;
    uVar2 = *(unsigned char *)((int)puVar4 + 0x11);
    *param_2 = (int)puVar4 + 0x12;
    uVar3 = *(unsigned short *)((int)puVar4 + 0x12);
    *param_2 = (int)(puVar4 + 5);
    fn_83005690(param_1,uVar5,uVar1,uVar6,uVar7,uVar8,uVar2);
    *param_2 = *param_2 + (unsigned int)uVar3 * 0xc;
    *param_3 = *param_3 + (unsigned int)uVar3 * -0xc;
  }
  return 1;
}

