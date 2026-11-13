extern int fn_82F6A538();
extern int fn_82F6A584();


void fn_828174B0(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)fn_82F6A538();
  fVar1 = (float)(dVar5 - param_9);
  fVar2 = (float)(dVar5 - param_6);
  fVar3 = (float)(dVar5 - param_7);
  fVar4 = (float)(dVar5 - param_8);
  fn_82F6A584((double)(float)((double)((fVar1 * fVar4 * fVar3) /
                                       ((float)(param_6 - param_7) * (float)(param_6 - param_8) *
                                       (float)(param_6 - param_9))) * param_2 +
                              (double)(float)((double)((fVar2 * fVar4 * fVar3) /
                                                      ((float)(param_9 - param_6) *
                                                       (float)(param_9 - param_7) *
                                                      (float)(param_9 - param_8))) * param_5 +
                                             (double)(float)((double)((fVar2 * fVar1 * fVar4) /
                                                                     ((float)(param_7 - param_6) *
                                                                      (float)(param_7 - param_8) *
                                                                     (float)(param_7 - param_9))) *
                                                             param_3 +
                                                            (double)(float)((double)((fVar2 * fVar1
                                                                                     * fVar3) /
                                                                                    ((float)(param_8
                                                                                            - 
                                                  param_6) * (float)(param_8 - param_7) *
                                                  (float)(param_8 - param_9))) * param_4)))));
  return;
}

