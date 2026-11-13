extern int fn_83005FA8();
extern int fn_83006278();
extern unsigned int lbl_83264300;


unsigned __int64 fn_83009CE0(unsigned __int64 param_1,int *param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned char uVar2;
  unsigned char *pbVar3;
  unsigned char *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  
  pbVar3 = (unsigned char *)*param_2;
  uVar10 = 1;
  uVar8 = (unsigned __int64)*pbVar3;
  *param_2 = (int)(pbVar3 + 1);
  if (uVar8 != 0) {
    bVar1 = pbVar3[1];
    *param_2 = (int)(pbVar3 + 2);
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = (unsigned char *)*param_2;
      uVar2 = *puVar4;
      *param_2 = (int)(puVar4 + 1);
      iVar5 = *(int *)(puVar4 + 1);
      *param_2 = (int)(puVar4 + 5);
      if (iVar5 == -2) {
        *(char *)(lbl_83264300 + 0x94) = '\x01' - ((bVar1 & 0x1f) == 0 && (bVar1 & 0x11) == 0);
      }
      piVar9 = (int *)(*param_2 + 1);
      iVar7 = *param_2 + 5;
      *param_2 = (int)piVar9;
      iVar6 = *piVar9;
      *param_2 = iVar7;
      if (iVar5 != -1) {
        uVar10 = fn_83005FA8(param_1,iVar5,uVar2,iVar7,iVar6);
      }
      *param_2 = *param_2 + iVar6;
      *param_3 = *param_3 - iVar6;
    }
    fn_83006278(param_1,bVar1,0xffffffffffffffff);
  }
  return uVar10;
}

