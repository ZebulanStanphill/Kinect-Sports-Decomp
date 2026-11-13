extern unsigned int uStack_30;


void fn_82C40C70(unsigned __int64 param_1,unsigned int *param_2,__int64 param_3,unsigned int *param_4,
                  int *param_5,int *param_6,int param_7)

{
  short *psVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned int uStack_30;
  
  uVar3 = *param_2;
  psVar1 = (short *)*param_4;
  puVar4 = (unsigned char *)*param_5;
  if ((int)uVar3 < (int)param_3) {
    param_3 = param_3 - (unsigned __int64)uVar3;
    piVar2 = (int *)(uVar3 * 4 + *param_6);
    uVar3 = (int)param_3 + uVar3;
    do {
      uStack_30 = *piVar2;
      if (uStack_30 < -0x800000) {
        uStack_30 = -0x800000;
      }
      else if (0x7fffff < uStack_30) {
        uStack_30 = 0x7fffff;
      }
      piVar2 = piVar2 + 1;
      *puVar4 = (((unsigned __int64)(uStack_30) >> 8) & 0xFF);
      puVar4[1] = (((unsigned __int64)(uStack_30) >> 16) & 0xFF);
      puVar4[2] = (unsigned char)uStack_30;
      puVar4 = puVar4 + param_7 * 3;
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_2 = uVar3;
  *param_4 = psVar1;
  *param_5 = (int)puVar4;
  return;
}

