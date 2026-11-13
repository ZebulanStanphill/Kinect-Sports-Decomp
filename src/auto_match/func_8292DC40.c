extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;


void fn_8292DC40(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar4;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  uVar1 = lbl_82002AE0;
  uVar5 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) * 8 + uVar5;
  if (uVar5 < uVar4) {
    puVar6 = (unsigned int *)(uVar5 - 4);
    lVar3 = (unsigned __int64)((uVar4 - uVar5) - 1 >> 3) + 1;
    do {
      puVar2 = (unsigned int *)param_4;
      *puVar2 = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar2[1] = *puVar6;
      puVar2[3] = uVar1;
      puVar2[2] = uVar1;
      param_4 = param_4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
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

