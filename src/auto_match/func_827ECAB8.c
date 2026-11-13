extern int fn_827EC538();
extern int fn_82809CB0();


void fn_827ECAB8(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)fn_82809CB0((double)*param_4);
  dVar8 = (double)fn_82809CB0((double)param_4[1]);
  if (dVar7 <= dVar8) {
    dVar7 = (double)fn_82809CB0((double)param_4[2]);
    dVar8 = (double)fn_82809CB0((double)param_4[1]);
    if (dVar8 < dVar7) goto LAB_827ecb10;
    fVar1 = param_1[2];
    fVar2 = param_3[2];
    fVar3 = param_2[2];
  }
  else {
    dVar7 = (double)fn_82809CB0((double)param_4[2]);
    dVar8 = (double)fn_82809CB0((double)*param_4);
    if (dVar7 <= dVar8) {
      fVar1 = param_1[2];
      fVar6 = param_1[1];
      fVar2 = param_3[2];
      fVar5 = param_3[1];
      fVar3 = param_2[2];
      fVar4 = param_2[1];
      goto LAB_827ecb6c;
    }
LAB_827ecb10:
    fVar1 = param_1[1];
    fVar2 = param_3[1];
    fVar3 = param_2[1];
  }
  fVar4 = *param_2;
  fVar5 = *param_3;
  fVar6 = *param_1;
LAB_827ecb6c:
  fn_827EC538((double)fVar4,(double)fVar3,(double)fVar5,(double)fVar2,(double)fVar6,(double)fVar1)
  ;
  return;
}

