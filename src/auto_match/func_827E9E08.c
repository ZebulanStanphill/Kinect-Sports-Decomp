extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82809CB0();
extern int fn_8280A5D8();
extern int fn_82810328();
extern unsigned int lbl_820069B4;


unsigned __int64
fn_827E9E08(float *param_1,unsigned __int64 param_2,float *param_3,float *param_4,unsigned __int64 param_5,
             float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  struct { float first; float second; } stack_pair_50;

  float fStack_48;
  
  fn_82810328(param_2,param_5,&stack_pair_50.first);
  dVar4 = (double)fn_82809CB0((double)stack_pair_50.first);
  dVar5 = (double)lbl_820069B4;
  if (dVar4 <= dVar5) {
    if ((*param_3 <= *param_1) && (*param_1 <= *param_4)) goto LAB_827e9ee0;
LAB_827ea020:
    uVar3 = 0;
  }
  else {
    dVar4 = (double)fn_8280A5D8((double)stack_pair_50.first);
    fVar1 = (float)((double)(*param_3 - *param_1) * dVar4);
    fVar2 = (float)((double)(*param_4 - *param_1) * dVar4);
    if (fVar1 <= fVar2) {
      if (*param_6 < fVar1) {
        *param_6 = fVar1;
      }
      if (fVar2 < *param_7) {
        *param_7 = fVar2;
      }
    }
    else {
      if (*param_6 < fVar2) {
        *param_6 = fVar2;
      }
      if (fVar1 < *param_7) {
        *param_7 = fVar1;
      }
    }
LAB_827e9ee0:
    dVar4 = (double)fn_82809CB0((double)stack_pair_50.second);
    if (dVar4 <= dVar5) {
      if ((param_1[1] < param_3[1]) || (param_4[1] < param_1[1])) goto LAB_827ea020;
    }
    else {
      dVar4 = (double)fn_8280A5D8((double)stack_pair_50.second);
      fVar1 = (float)((double)(param_3[1] - param_1[1]) * dVar4);
      fVar2 = (float)((double)(param_4[1] - param_1[1]) * dVar4);
      if (fVar1 <= fVar2) {
        if (*param_6 < fVar1) {
          *param_6 = fVar1;
        }
        if (fVar2 < *param_7) {
          *param_7 = fVar2;
        }
      }
      else {
        if (*param_6 < fVar2) {
          *param_6 = fVar2;
        }
        if (fVar1 < *param_7) {
          *param_7 = fVar1;
        }
      }
    }
    dVar4 = (double)fn_82809CB0((double)fStack_48);
    if (dVar4 <= dVar5) {
      if ((param_1[2] < param_3[2]) || (param_4[2] < param_1[2])) goto LAB_827ea020;
    }
    else {
      dVar4 = (double)fn_8280A5D8((double)fStack_48);
      fVar1 = (float)((double)(param_3[2] - param_1[2]) * dVar4);
      fVar2 = (float)((double)(param_4[2] - param_1[2]) * dVar4);
      if (fVar1 <= fVar2) {
        if (*param_6 < fVar1) {
          *param_6 = fVar1;
        }
        if (fVar2 < *param_7) {
          *param_7 = fVar2;
        }
      }
      else {
        if (*param_6 < fVar2) {
          *param_6 = fVar2;
        }
        if (fVar1 < *param_7) {
          *param_7 = fVar1;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

