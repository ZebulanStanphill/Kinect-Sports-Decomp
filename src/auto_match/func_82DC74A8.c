#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CE5410();
extern int fn_82DC73A8();


void fn_82DC74A8(int param_1,int param_2,int param_3,unsigned short param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned short *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar7 = (param_2 + param_3 + 5) * 4;
  uVar1 = (__int64)(iVar7 + 0x20) * (__int64)param_1 + 0x3fU & 0xfffffff0;
  iVar3 = fn_82CE5410();
  uVar5 = ZEXT48(*(int **)(iVar3 + 0x10));
  iVar3 = **(int **)(iVar3 + 0x10);
  uVar2 = fn_82DC73A8(uVar1);
  puVar4 = (unsigned short *)(**(int (***)())(iVar3 + 4))(uVar5,uVar2);
  puVar4[1] = (short)uVar1;
  puVar4[3] = (short)param_1;
  *(char *)(puVar4 + 4) = (char)param_2;
  *(char *)((int)puVar4 + 9) = (char)param_3;
  puVar4[6] = param_4;
  *(char *)(puVar4 + 5) = (char)iVar7;
  lVar8 = 7;
  puVar4[8] = 0;
  puVar6 = (unsigned int *)(puVar4 + 8);
  puVar4[9] = 3;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar4[2] = 0;
  *puVar4 = 0x16;
  return;
}

