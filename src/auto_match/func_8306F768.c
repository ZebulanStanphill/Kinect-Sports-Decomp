extern unsigned int *auStack_50;
extern int fn_8306E7D8();
extern int fn_8306E7E8();
extern int fn_83075D30();
extern int fn_83075D40();
extern unsigned int lbl_8202236C;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_8217EB78;
extern unsigned int lbl_821AAD20;


void fn_8306F768(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5,float *param_6,float *param_7)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_50 [80];
  
  uVar2 = fn_83075D40(param_2,param_4);
  uVar3 = fn_83075D40(param_2,param_3);
  dVar4 = (double)fn_8306E7D8(uVar3,uVar2);
  dVar5 = (double)lbl_821AAD20;
  if (dVar4 <= (double)lbl_820579A8) {
    dVar4 = (double)fn_8306E7E8(dVar5,(double)(float)((double)*param_6 + param_1));
    *param_6 = (float)dVar4;
  }
  else {
    dVar4 = (double)fn_8306E7D8((double)lbl_8202236C,(double)*param_6);
    *param_6 = (float)(dVar4 - param_1);
  }
  if (lbl_8217EB78 <= *param_6) {
    *param_7 = (float)((double)*param_7 + param_1);
  }
  else {
    fn_83075D30(auStack_50,param_2,param_3);
    altv207_13(in_vs32,in_vs35);
    puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    *param_7 = (float)dVar5;
  }
  return;
}

