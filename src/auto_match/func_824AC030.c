extern unsigned int *auStack_58;
extern float fRam831c4eb0;
extern int fn_824A5010();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831c4ea8;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824AC030(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [22];
  
  *(unsigned int *)(param_1 + 0x3c) = 0;
  dVar6 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x30) = ltcg_pool_0_0f;
  (**(int (***)())*param_2)(param_2,&uStack_5c,&uStack_60);
  uVar3 = (unsigned __int64)uStack_60;
  uVar4 = (uVar3 - uRam831c4ea8) + 1;
  uVar5 = (unsigned __int64)uStack_5c;
  if ((int)uStack_5c < (int)uVar4) {
    uVar5 = uVar4;
  }
  cVar1 = *(char *)(param_1 + 0x38);
  *(unsigned int *)(param_1 + 0x3c) = 1;
  *(unsigned int *)(param_1 + 0x30) = lbl_821CA460;
  if ((uVar5 & 0xffffffff) < uVar3) {
    do {
      (**(int (***)())(*param_2 + 4))(param_2,uVar3,auStack_58);
      cVar2 = fn_824A5010((double)fRam831c4eb0,(-(cVar1 != '\0') & 4U) + 0x14,auStack_58[0]);
      if (cVar2 == '\0') {
        *(float *)(param_1 + 0x30) = (float)dVar6;
        *(unsigned int *)(param_1 + 0x3c) = 0;
        return;
      }
      uVar3 = uVar3 - 1;
    } while ((uVar5 & 0xffffffff) < (uVar3 & 0xffffffff));
  }
  return;
}

