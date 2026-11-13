extern int fn_83005FA8();
extern int fn_83006180();
extern int fn_83006278();


unsigned __int64 fn_83000EC8(int param_1,int *param_2,int *param_3,char param_4)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char uVar3;
  unsigned char *pbVar4;
  unsigned char *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  cVar1 = *(char *)*param_2;
  uVar10 = 1;
  *param_2 = (int)((char *)*param_2 + 1);
  if (param_4 == '\0') {
    *(unsigned char *)(param_1 + 0x3e) = (cVar1 != '\0') << 7 | *(unsigned char *)(param_1 + 0x3e) & 0x7f;
  }
  pbVar4 = (unsigned char *)*param_2;
  uVar9 = (unsigned __int64)*pbVar4;
  *param_2 = (int)(pbVar4 + 1);
  if (uVar9 != 0) {
    bVar2 = pbVar4[1];
    *param_2 = (int)(pbVar4 + 2);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar5 = (unsigned char *)*param_2;
      uVar3 = *puVar5;
      *param_2 = (int)(puVar5 + 1);
      iVar6 = *(int *)(puVar5 + 1);
      *param_2 = (int)(puVar5 + 5);
      cVar1 = puVar5[5];
      *param_2 = (int)(puVar5 + 6);
      fn_83006180(param_1,uVar3,cVar1 != '\0');
      piVar8 = (int *)*param_2 + 1;
      iVar7 = *(int *)*param_2;
      *param_2 = (int)piVar8;
      if ((iVar6 != -1) && (param_4 == '\0')) {
        uVar10 = fn_83005FA8(param_1,iVar6,uVar3,piVar8,iVar7);
      }
      *param_2 = *param_2 + iVar7;
      *param_3 = *param_3 - iVar7;
    }
    if (param_4 == '\0') {
      fn_83006278(param_1,bVar2,0xffffffffffffffff);
    }
  }
  return uVar10;
}

