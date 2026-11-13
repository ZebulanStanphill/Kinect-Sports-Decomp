extern int fn_82809CB0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern int fn_8305FD58();
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;


void fn_8305FDB8(unsigned __int64 param_1,float *param_2,float *param_3)

{
  float *pfVar2;
  unsigned __int64 uVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pfVar2 = (float *)fn_82F6A53C();
  if (*pfVar2 <= lbl_821AAD20) {
    dVar3 = (double)*param_2;
    dVar4 = (double)param_2[1];
    dVar5 = (double)param_2[2];
    dVar6 = (double)*param_3;
    dVar7 = (double)param_3[1];
    dVar8 = (double)param_3[2];
code_r0x8305fe9c:
    if (dVar3 < dVar6) {
code_r0x8305fea4:
      uVar1 = 1;
      goto switchD_82dbea0c_default;
    }
    if (dVar3 == dVar6) {
      if (dVar4 < dVar7) goto code_r0x8305fea4;
      if ((dVar4 == dVar7) && (uVar1 = 1, dVar5 < dVar8)) goto switchD_82dbea0c_default;
    }
  }
  else {
    dVar3 = (double)fn_8305FD58((double)*param_2);
    dVar4 = (double)fn_8305FD58((double)param_2[1],pfVar2);
    dVar5 = (double)fn_8305FD58((double)param_2[2],pfVar2);
    dVar6 = (double)fn_8305FD58((double)*param_3,pfVar2);
    dVar7 = (double)fn_8305FD58((double)param_3[1],pfVar2);
    dVar8 = (double)fn_8305FD58((double)param_3[2],pfVar2);
    dVar9 = (double)fn_82809CB0((double)(float)(dVar6 - dVar3));
    dVar10 = (double)lbl_82186E18;
    if (((dVar10 <= dVar9) ||
        (dVar9 = (double)fn_82809CB0((double)(float)(dVar7 - dVar4)), dVar10 <= dVar9)) ||
       (dVar9 = (double)fn_82809CB0((double)(float)(dVar8 - dVar5)), dVar10 <= dVar9))
    goto code_r0x8305fe9c;
  }
  uVar1 = 0;
switchD_82dbea0c_default:
  fn_82F6A588(uVar1);
  return;
}

