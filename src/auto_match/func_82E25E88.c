extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_83187448;
extern unsigned int lbl_83187510;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E25E88(unsigned int *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  
  uVar4 = lbl_8208E058;
  uVar3 = lbl_8208E054;
  iVar6 = 0;
  uVar7 = 0;
  puVar8 = (unsigned int *)0x83187514;
  do {
    pbVar9 = (unsigned char *)*puVar8;
    if (pbVar9 == lbl_83187448) break;
    pbVar10 = param_2;
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar9;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != param_2 + 0x10);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar5 = (&lbl_83187510)[iVar6 * 9];
      param_1[3] = lbl_8208E05C;
      param_1[2] = uVar4;
      param_1[1] = uVar3;
      *param_1 = uVar5;
      return;
    }
    uVar7 = uVar7 + 0x24;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 9;
  } while ((uVar7 & 0xffffffff) != 0x804);
  uVar3 = *(unsigned int *)(param_2 + 4);
  uVar4 = *(unsigned int *)(param_2 + 8);
  uVar5 = *(unsigned int *)(param_2 + 0xc);
  *param_1 = *(unsigned int *)param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return;
}

