extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8280DD50();
extern int fn_8280E180();
extern int fn_8280E418();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_827FA968(double param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  double dVar2;
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [4];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  dVar2 = (double)(float)((double)lbl_82002AE0 - param_1);
  fn_8280DD50(auStack_50);
  fn_8280DD50(auStack_60);
  if (param_2 != 0) {
    uStack_4c = *(unsigned int *)(param_2 + 4);
    uStack_48 = *(unsigned int *)(param_2 + 8);
    uStack_44 = *(unsigned int *)(param_2 + 0xc);
  }
  if (param_3 != 0) {
    uStack_5c = *(unsigned int *)(param_3 + 4);
    uStack_58 = *(unsigned int *)(param_3 + 8);
    uStack_54 = *(unsigned int *)(param_3 + 0xc);
  }
  fn_8280E418(auStack_50,auStack_50);
  fn_8280E418(auStack_60,auStack_60);
  fn_8280E180(param_1,auStack_50,auStack_60,&uStack_40);
  *param_4 = uStack_40;
  param_4[1] = uStack_3c;
  param_4[2] = uStack_38;
  param_4[3] = uStack_34;
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    param_4[4] = (float)((double)*(float *)(param_3 + 0x10) * param_1);
    param_4[5] = (float)((double)*(float *)(param_3 + 0x14) * param_1);
    param_4[6] = (float)((double)*(float *)(param_3 + 0x18) * param_1);
    bVar1 = *(unsigned char *)(param_3 + 0x1c);
  }
  else if (param_3 == 0) {
    param_4[4] = (float)((double)*(float *)(param_2 + 0x10) * dVar2);
    param_4[5] = (float)((double)*(float *)(param_2 + 0x14) * dVar2);
    param_4[6] = (float)((double)*(float *)(param_2 + 0x18) * dVar2);
    bVar1 = *(unsigned char *)(param_2 + 0x1c);
  }
  else {
    param_4[4] = (float)((double)*(float *)(param_2 + 0x10) * dVar2 +
                        (double)(float)((double)*(float *)(param_3 + 0x10) * param_1));
    param_4[5] = (float)((double)*(float *)(param_2 + 0x14) * dVar2 +
                        (double)(float)((double)*(float *)(param_3 + 0x14) * param_1));
    param_4[6] = (float)((double)*(float *)(param_2 + 0x18) * dVar2 +
                        (double)(float)((double)*(float *)(param_3 + 0x18) * param_1));
    bVar1 = *(unsigned char *)(param_2 + 0x1c) | *(unsigned char *)(param_3 + 0x1c);
  }
  *(unsigned char *)(param_4 + 7) = bVar1;
  return;
}

