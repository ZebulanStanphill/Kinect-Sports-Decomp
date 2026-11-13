extern int fn_82E4B8A8();
extern unsigned int lbl_820A6C58;


void fn_82E4BA10(double param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5,
                  unsigned int *param_6,unsigned __int64 param_7,unsigned int param_8,unsigned __int64 param_9)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  *(unsigned int *)(param_2 + 0x208) = 0;
  *(unsigned int *)(param_2 + 0x204) = 0;
  puVar3 = (unsigned int *)(param_2 + 0x208);
  puVar4 = (unsigned int *)(param_2 + 0x204);
  iVar2 = (int)param_3;
  if ((iVar2 == 8) || (iVar2 == 7)) {
    iVar1 = fn_82E4B8A8(param_2,puVar4,puVar3,param_3,param_9);
    if (iVar1 == 0) {
      if (((iVar2 == 7) && (param_4 != 2)) &&
         (((double)param_8 * param_1) / (double)(*param_5 * *param_6) < lbl_820A6C58)) {
        *(unsigned int *)(param_2 + 0x1f0) = 1;
        *puVar4 = *param_5;
        *puVar3 = *param_6;
      }
    }
    else {
      if (*puVar4 < *param_5) {
        *(unsigned int *)(param_2 + 0x1fc) = 1;
        *param_5 = *puVar4;
      }
      else {
        *puVar4 = *param_5;
      }
      if (*puVar3 < *param_6) {
        *(unsigned int *)(param_2 + 0x1fc) = 1;
        *param_6 = *puVar3;
      }
      else {
        *puVar3 = *param_6;
      }
    }
  }
  return;
}

