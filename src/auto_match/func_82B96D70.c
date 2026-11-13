extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_8202EE58;


void fn_82B96D70(int param_1,int param_2,int param_3,__int64 param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  fVar2 = lbl_8202EE58;
  fVar1 = lbl_82015BE0;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar5 = *(int *)(param_1 + 0x68) * 4 + uVar6;
  if (uVar6 < uVar5) {
    puVar7 = (unsigned int *)(uVar6 - 4);
    lVar4 = (unsigned __int64)((uVar5 - uVar6) - 1 >> 2) + 1;
    do {
      pfVar3 = (float *)param_4;
      *pfVar3 = (float)(puVar7[1] >> 0x14 & 0x3ff) * fVar2;
      pfVar3[1] = (float)(puVar7[1] >> 10 & 0x3ff) * fVar2;
      pfVar3[2] = (float)(puVar7[1] & 0x3ff) * fVar2;
      puVar7 = puVar7 + 1;
      pfVar3[3] = (float)(*puVar7 >> 0x1e) * fVar1;
      param_4 = param_4 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
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

