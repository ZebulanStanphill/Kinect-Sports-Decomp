extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_8202EE5C;


void fn_8292D390(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  unsigned int *puVar6;
  char cVar7;
  unsigned int uVar8;
  unsigned int uVar10;
  __int64 lVar9;
  
  fVar5 = lbl_8202EE5C;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar10;
  if (uVar10 < uVar8) {
    puVar6 = (unsigned int *)(uVar10 - 4);
    lVar9 = (unsigned __int64)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar6 = puVar6 + 1;
      uVar1 = *puVar6;
      cVar3 = (char)((unsigned int)uVar1 >> 0x18);
      cVar2 = (char)((unsigned int)uVar1 >> 8);
      cVar7 = (char)((unsigned int)uVar1 >> 0x10);
      pfVar4 = (float *)param_4;
      pfVar4[3] = (float)(__int64)(char)((cVar3 == -0x80) + cVar3) * fVar5;
      pfVar4[2] = (float)(__int64)(char)((cVar7 == -0x80) + cVar7) * fVar5;
      pfVar4[1] = (float)(__int64)(char)((cVar2 == -0x80) + cVar2) * fVar5;
      *pfVar4 = (float)(__int64)(char)(((char)uVar1 == -0x80) + (char)uVar1) * fVar5;
      param_4 = param_4 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
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

