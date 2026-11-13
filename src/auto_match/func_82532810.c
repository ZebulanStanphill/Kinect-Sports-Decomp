extern unsigned int *auStack_60;
extern int fn_8252D2F8();
extern int fn_8255FEE8();
extern unsigned int lbl_82192734;
extern unsigned int uStack_2c;


void fn_82532810(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  int iVar2;
  unsigned char auStack_60 [52];
  unsigned int uStack_2c;
  
  fVar1 = lbl_82192734;
  if (*(char *)(param_1 + 0x197) != '\0') {
    fVar1 = *(float *)(param_1 + 0x198);
  }
  iVar2 = fn_8255FEE8((double)fVar1,param_2,auStack_60,*(unsigned char *)(param_1 + 0x194));
  if (*(char *)(param_1 + 0x195) != '\0') {
    uStack_2c = uStack_2c | 1;
  }
  if (*(char *)(param_1 + 0x196) != '\0') {
    uStack_2c = uStack_2c | 2;
  }
  fn_8252D2F8(param_1,*(unsigned char *)(iVar2 + 0x5b),auStack_60,iVar2 + 0x40);
  *(unsigned char *)(param_1 + 0x194) = 0;
  *(unsigned char *)(param_1 + 0x197) = 0;
  *(unsigned char *)(param_1 + 0x195) = 0;
  *(unsigned char *)(param_1 + 0x196) = 0;
  return;
}

