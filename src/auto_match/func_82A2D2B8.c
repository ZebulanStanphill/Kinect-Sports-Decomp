typedef unsigned char bool;
extern unsigned int uStack00000010;


void fn_82A2D2B8(unsigned __int64 param_1,short *param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short uStack00000010;
  char *pcStack00000014;
  
  uStack00000010 = (unsigned short)((unsigned __int64)param_1 >> 0x30);
  uVar3 = (unsigned int)uStack00000010;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (uVar3 == 0) {
    return;
  }
  pcStack00000014 = (char *)param_1;
  bVar1 = *pcStack00000014 == '\\';
  for (uVar4 = (unsigned int)bVar1; (uVar4 < uVar3 && (pcStack00000014[uVar4] != '\\')); uVar4 = uVar4 + 1)
  {
  }
  sVar2 = (short)uVar4 - (unsigned short)bVar1;
  *(char **)(param_2 + 2) = pcStack00000014 + bVar1;
  *param_2 = sVar2;
  param_2[1] = sVar2;
  if (uVar3 <= uVar4) {
    return;
  }
  sVar2 = (uStack00000010 - (short)uVar4) + -1;
  *(char **)(param_3 + 2) = pcStack00000014 + uVar4 + 1;
  *param_3 = sVar2;
  param_3[1] = sVar2;
  return;
}

