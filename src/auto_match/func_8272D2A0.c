extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8268CCB0();
extern int fn_8268D008();
extern int fn_827A0C20();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005728;
extern unsigned int uStack_30;


void fn_8272D2A0(int param_1,double *param_2)

{
  float fVar1;
  float *pfVar2;
  double dVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  unsigned __int64 uStack_30;
  
  if ((*(unsigned char *)((int)param_2 + 0x31) & 2) == 0) {
    uStack_30 = (__int64)*(int *)(*(int *)(param_1 + 0x84) + 4);
    dVar3 = (double)uStack_30;
  }
  else {
    dVar3 = param_2[1] * lbl_82005728;
  }
  fStack_3c = (float)dVar3;
  if ((*(unsigned char *)((int)param_2 + 0x31) & 1) == 0) {
    uStack_30 = (__int64)**(int **)(param_1 + 0x84);
    dVar3 = (double)uStack_30;
  }
  else {
    dVar3 = *param_2 * lbl_82005728;
  }
  fStack_40 = (float)dVar3;
  fn_8268D008(param_1 + 0x44,&fStack_38,&fStack_40);
  fStack_40 = fStack_38;
  fStack_3c = fStack_34;
  pfVar2 = (float *)fn_827A0C20(*(unsigned int *)(param_1 + 0xa0));
  fStack_40 = fStack_40 - *pfVar2;
  fStack_3c = fStack_3c - pfVar2[1];
  fn_8268CCB0(param_1 + 0x44,&uStack_30,&fStack_40);
  fVar1 = lbl_82005718;
  if ((*(unsigned char *)((int)param_2 + 0x31) & 1) != 0) {
    *param_2 = (double)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) * lbl_82005718);
    *(unsigned char *)((int)param_2 + 0x31) = *(unsigned char *)((int)param_2 + 0x31) & 0xfe | 1;
  }
  if ((*(unsigned char *)((int)param_2 + 0x31) & 2) != 0) {
    param_2[1] = (double)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) * fVar1);
    *(unsigned char *)((int)param_2 + 0x31) = *(unsigned char *)((int)param_2 + 0x31) | 2;
  }
  return;
}

