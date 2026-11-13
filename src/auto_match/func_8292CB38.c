extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82005328;
extern unsigned int lbl_821AAD20;


void fn_8292CB38(int param_1,int param_2,int param_3,__int64 param_4)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  
  uVar2 = lbl_821AAD20;
  fVar1 = lbl_82005328;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) + uVar6;
  if (uVar6 < uVar4) {
    iVar5 = uVar4 - uVar6;
    pbVar7 = (unsigned char *)(uVar6 - 1);
    do {
      puVar3 = (unsigned int *)param_4;
      *puVar3 = uVar2;
      puVar3[1] = uVar2;
      puVar3[2] = uVar2;
      pbVar7 = pbVar7 + 1;
      puVar3[3] = (float)*pbVar7 * fVar1;
      param_4 = param_4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

