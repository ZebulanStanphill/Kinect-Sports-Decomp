extern int fn_82CE5410();
extern int fn_82DC73A8();
extern int fn_82DC74A8();
extern int fn_82DC7568();


int fn_82DC7648(int param_1,unsigned char *param_2)

{
  unsigned short uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  
  uVar1 = *(unsigned short *)(param_1 + 4);
  uVar8 = (unsigned int)uVar1;
  iVar4 = param_1;
  if (*(unsigned short *)(param_1 + 6) <= uVar1) {
    if (uVar1 < 3) {
      uVar8 = 2;
    }
    uVar3 = uVar8 << 1;
    if ((unsigned int)*(unsigned short *)(param_1 + 0xc) <= uVar8 << 1) {
      uVar3 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    }
    iVar4 = fn_82DC74A8(uVar3,*(unsigned char *)(param_1 + 8),*(unsigned char *)(param_1 + 9));
    fn_82DC7568(iVar4,param_1);
    uVar2 = fn_82DC73A8(*(unsigned short *)(param_1 + 2));
    iVar5 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),param_1,uVar2);
    *param_2 = 1;
  }
  *(unsigned short *)(iVar4 + 4) = uVar1 + 1;
  lVar6 = (__int64)((int)(unsigned int)*(unsigned char *)(iVar4 + 10) >> 2);
  if (-1 < lVar6 + -1) {
    puVar7 = (unsigned int *)
             ((unsigned int)*(unsigned char *)(iVar4 + 10) * (int)(short)uVar1 + (unsigned int)*(unsigned short *)(iVar4 + 6) * 0x20
              + iVar4 + 0x2c);
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
    }
  }
  return iVar4;
}

