extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_8200DD28;


void fn_82B96EA8(int param_1,int param_2,int param_3,__int64 param_4)

{
  float fVar1;
  float *pfVar2;
  unsigned int uVar4;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned short *puVar6;
  
  fVar1 = lbl_8200DD28;
  uVar5 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) * 8 + uVar5;
  if (uVar5 < uVar4) {
    puVar6 = (unsigned short *)(uVar5 - 8);
    lVar3 = (unsigned __int64)((uVar4 - uVar5) - 1 >> 3) + 1;
    do {
      pfVar2 = (float *)param_4;
      *pfVar2 = (float)(*(unsigned __int64 *)(puVar6 + 4) & 0xffff) * fVar1;
      pfVar2[1] = (float)(*(unsigned __int64 *)(puVar6 + 4) >> 0x10 & 0xffff) * fVar1;
      pfVar2[2] = (float)(*(unsigned __int64 *)(puVar6 + 4) >> 0x20 & 0xffff) * fVar1;
      puVar6 = puVar6 + 4;
      pfVar2[3] = (float)*puVar6 * fVar1;
      param_4 = param_4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                              -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

