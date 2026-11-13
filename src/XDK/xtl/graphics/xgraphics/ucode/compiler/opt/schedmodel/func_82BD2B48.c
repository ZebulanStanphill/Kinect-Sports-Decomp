extern int fn_82AB15D0();
extern unsigned int lbl_820E836C;
extern unsigned int lbl_820E8370;
extern unsigned int lbl_820E8374;
extern unsigned int lbl_8316FF50;


void fn_82BD2B48(int param_1,int *param_2)

{
  char cVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  
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
    if (cVar1 != '\0') goto LAB_82bd2bf4;
    if ((*(unsigned int *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 1 & 1) == 0) {
      puVar3 = &lbl_820E8370;
    }
    else {
      puVar3 = &lbl_820E836C;
    }
  }
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(puVar3 + *(int *)(param_1 + 4) * 0x10);
LAB_82bd2bf4:
  if (*(int *)(param_1 + 4) == -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8498,0xffffffff820e84a8,0x50);
  }
  return;
}

