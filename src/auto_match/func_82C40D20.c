extern unsigned int uStack_2e;
extern unsigned int uStack_30;


void fn_82C40D20(unsigned __int64 param_1,unsigned int *param_2,__int64 param_3,unsigned int *param_4,
                  int *param_5,int *param_6,int param_7)

{
  short *psVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned short *puVar4;
  int iVar5;
  unsigned short uStack_30;
  unsigned char uStack_2e;
  
  uVar2 = *param_2;
  psVar1 = (short *)*param_4;
  puVar4 = (unsigned short *)*param_5;
  if ((int)uVar2 < (int)param_3) {
    param_3 = param_3 - (unsigned __int64)uVar2;
    iVar5 = uVar2 * 4;
    uVar2 = (int)param_3 + uVar2;
    piVar3 = (int *)(iVar5 + *param_6);
    do {
      iVar5 = *piVar3;
      if (iVar5 < -0x80000) {
        iVar5 = -0x80000;
      }
      else if (0x7ffff < iVar5) {
        iVar5 = 0x7ffff;
      }
      piVar3 = piVar3 + 1;
      uStack_2e = (unsigned char)((unsigned int)(iVar5 << 4) >> 8);
      uStack_30 = (unsigned short)((unsigned int)(iVar5 << 4) >> 0x10);
      *puVar4 = uStack_30;
      *(unsigned char *)(puVar4 + 1) = uStack_2e;
      puVar4 = (unsigned short *)(param_7 * 3 + (int)puVar4);
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_2 = uVar2;
  *param_4 = psVar1;
  *param_5 = (int)puVar4;
  return;
}

