extern unsigned int *auStack_40;
extern unsigned int uStack_32;
extern unsigned int uStack_3a;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


void fn_830855B0(int *param_1,unsigned __int64 param_2,int param_3,__int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned char auStack_40 [6];
  unsigned short uStack_3a;
  unsigned short uStack_32;
  
  param_4 = (param_2 & 0xfffffff) * 0x10 + param_4;
  iVar4 = (int)param_2;
  while (iVar4 < param_3) {
    dataCacheBlockTouch(param_4 + 0x40);
    uVar3 = (**(int (***)())(*param_1 + 0x10))(param_1,param_2);
    (**(int (***)())(*param_1 + 0x14))(param_1,uVar3,auStack_40);
    uStack_50 = (unsigned short)((unsigned __int64)uVar3 >> 0x10);
    uStack_4e = (unsigned short)uVar3;
    param_2 = param_2 + 1;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)((int)in_r0 + (int)param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    param_4 = param_4 + 0x10;
    uStack_32 = uStack_4e;
    uStack_3a = uStack_50;
    iVar4 = (int)param_2;
  }
  return;
}

