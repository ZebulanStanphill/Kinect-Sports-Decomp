extern int fn_82359698();
extern int fn_8236B4F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D1A54;


void fn_823DF3F0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 8);
  fVar1 = (float)((double)*(float *)(iVar2 + 0xef0) + param_1);
  *(float *)(iVar2 + 0xef0) = fVar1;
  if (lbl_831D1A54 < fVar1) {
    if (*(char *)(iVar2 + 0x134c) != '\0') {
      *(unsigned char *)(iVar2 + 0x134c) = 0;
    }
    fn_82359698(iVar2,7);
    if (*(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0) {
      fn_8236B4F0((double)lbl_821CA460,iVar2);
    }
  }
  return;
}

