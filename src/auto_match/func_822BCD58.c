extern int fn_82809CB0();
extern unsigned int lbl_8218EC10;


unsigned __int64 fn_822BCD58(float *param_1,float *param_2)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((unsigned int)param_2[8] < (unsigned int)param_1[8]) {
LAB_822bcd8c:
    uVar1 = 1;
  }
  else {
    dVar4 = (double)lbl_8218EC10;
    if ((float)((double)param_2[0xe] - dVar4) <= param_1[0xe]) {
      if ((float)((double)param_2[0xe] + dVar4) < param_1[0xe]) goto LAB_822bcd8c;
      if ((unsigned int)param_2[9] <= (unsigned int)param_1[9]) {
        if ((unsigned int)param_2[9] < (unsigned int)param_1[9]) goto LAB_822bcd8c;
        dVar2 = (double)fn_82809CB0((double)*param_1);
        dVar3 = (double)fn_82809CB0((double)*param_2);
        if (dVar2 <= (double)(float)(dVar3 + dVar4)) {
          dVar2 = (double)fn_82809CB0((double)*param_1);
          dVar3 = (double)fn_82809CB0((double)*param_2);
          if (dVar2 < (double)(float)(dVar3 + dVar4)) {
            return 1;
          }
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

