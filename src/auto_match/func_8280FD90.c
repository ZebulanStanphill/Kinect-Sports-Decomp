extern int fn_82809CB0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8201DD74;


void fn_8280FD90(unsigned __int64 param_1,double param_2,double param_3)

{
  float *in_r6;
  float *in_r7;
  float *in_r8;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)fn_82F6A540();
  dVar2 = (double)fn_82809CB0((double)(float)(dVar1 - (double)*in_r6));
  dVar3 = (double)fn_82809CB0((double)(float)(param_3 - (double)*in_r8));
  dVar3 = (double)(float)(dVar2 + dVar3);
  dVar2 = (double)fn_82809CB0((double)(float)(param_2 - (double)*in_r7));
  dVar5 = (double)(float)(dVar2 + dVar3);
  dVar2 = (double)lbl_8201DD74;
  dVar3 = (double)fn_82809CB0((double)(float)(dVar1 - (double)(float)((double)*in_r6 + dVar2)));
  dVar4 = (double)fn_82809CB0((double)(float)(param_2 - (double)(float)(dVar2 - (double)*in_r7)));
  dVar4 = (double)(float)(dVar3 + dVar4);
  dVar3 = (double)fn_82809CB0((double)(float)(param_3 - (double)(float)((double)*in_r8 + dVar2)));
  dVar4 = (double)(float)(dVar3 + dVar4);
  dVar1 = (double)fn_82809CB0((double)(float)(dVar1 - (double)(float)((double)*in_r6 - dVar2)));
  dVar3 = (double)fn_82809CB0((double)(float)(param_2 - (double)(float)(dVar2 - (double)*in_r7)));
  dVar3 = (double)(float)(dVar1 + dVar3);
  dVar1 = (double)fn_82809CB0((double)(float)(param_3 - (double)(float)((double)*in_r8 - dVar2)));
  if ((dVar5 <= dVar4) || ((double)(float)(dVar1 + dVar3) <= dVar4)) {
    if (dVar5 <= (double)(float)(dVar1 + dVar3)) goto LAB_8280fecc;
    *in_r6 = (float)((double)*in_r6 - dVar2);
    *in_r7 = (float)(dVar2 - (double)*in_r7);
    dVar2 = (double)*in_r8 - dVar2;
  }
  else {
    *in_r6 = (float)((double)*in_r6 + dVar2);
    *in_r7 = (float)(dVar2 - (double)*in_r7);
    dVar2 = (double)*in_r8 + dVar2;
  }
  *in_r8 = (float)dVar2;
LAB_8280fecc:
  fn_82F6A58C();
  return;
}

