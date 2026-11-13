extern unsigned int lbl_820E836C;
extern unsigned int lbl_820E8370;
extern unsigned int lbl_820E8374;
extern unsigned int lbl_8316FF50;


__int64 fn_82BD2A88(int param_1,int *param_2)

{
  char cVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (((unsigned int)param_2[0x39] >> 1 & 1) == 0) {
    uVar2 = *(unsigned int *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 3 & 1;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    puVar3 = &lbl_820E8374;
  }
  else {
    cVar1 = (**(int (***)())(*param_2 + 0x34))(param_2);
    if (cVar1 != '\0') goto LAB_82bd2b34;
    if ((*(unsigned int *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 1 & 1) == 0) {
      puVar3 = &lbl_820E8370;
    }
    else {
      puVar3 = &lbl_820E836C;
    }
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar3 + *(int *)(param_1 + 4) * 0x10);
LAB_82bd2b34:
  return (uVar4 + 1) - (uVar4 + (uVar4 + 1 == 0));
}

