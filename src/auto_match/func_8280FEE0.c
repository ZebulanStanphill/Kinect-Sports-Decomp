/* WARNING: Inlined function: __savegprlr_29 */
/* WARNING: Inlined function: __savefpr_26 */
/* WARNING: Inlined function: __restfpr_26 */

void fn_8280FEE0(double param_1,double param_2,double param_3)

{
  float *pfVar1;
  unsigned int in_r6;
  float *pfVar2;
  float *in_r7;
  float *pfVar3;
  float *in_r8;
  float *in_r9;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar7 = param_1;
  dVar8 = param_2;
  dVar9 = param_3;
  pfVar1 = in_r7;
  pfVar3 = in_r9;
  pfVar2 = in_r8;
  if (((((in_r6 != 0) &&
        (dVar7 = param_2, dVar8 = param_3, dVar9 = param_1, pfVar1 = in_r8, pfVar3 = in_r7,
        pfVar2 = in_r9, in_r6 != 1)) &&
       (dVar7 = param_3, dVar8 = param_1, dVar9 = param_2, pfVar1 = in_r9, pfVar3 = in_r8,
       pfVar2 = in_r7, 2 < in_r6)) &&
      ((dVar7 = param_1, dVar8 = param_3, pfVar1 = in_r7, pfVar2 = in_r9, in_r6 != 4 &&
       (dVar7 = param_2, dVar8 = param_1, dVar9 = param_3, pfVar1 = in_r8, pfVar3 = in_r9,
       pfVar2 = in_r7, in_r6 != 5)))) &&
     (dVar7 = param_3, dVar8 = param_2, dVar9 = param_1, pfVar1 = in_r9, pfVar3 = in_r7,
     pfVar2 = in_r8, in_r6 != 6)) {
    return;
  }
  dVar4 = (double)fn_82809CB0((double)(float)(dVar7 - (double)*pfVar1),dVar8,dVar9);
  dVar5 = (double)fn_82809CB0((double)(float)(dVar9 - (double)*pfVar3));
  dVar5 = (double)(float)(dVar4 + dVar5);
  dVar4 = (double)fn_82809CB0((double)(float)(dVar8 - (double)*pfVar2));
  dVar10 = (double)(float)(dVar4 + dVar5);
  dVar4 = 3.1415927410125732;
  dVar5 = (double)fn_82809CB0((double)(float)(dVar7 - (double)(*pfVar1 + 3.1415927)));
  dVar6 = (double)fn_82809CB0((double)(float)(dVar8 - (double)(float)(dVar4 - (double)*pfVar2)));
  dVar6 = (double)(float)(dVar5 + dVar6);
  dVar5 = (double)fn_82809CB0((double)(float)(dVar9 - (double)(float)((double)*pfVar3 + dVar4)));
  dVar5 = (double)(float)(dVar5 + dVar6);
  dVar7 = (double)fn_82809CB0((double)(float)(dVar7 - (double)(float)((double)*pfVar1 - dVar4)));
  dVar8 = (double)fn_82809CB0((double)(float)(dVar8 - (double)(float)(dVar4 - (double)*pfVar2)));
  dVar8 = (double)(float)(dVar7 + dVar8);
  dVar7 = (double)fn_82809CB0((double)(float)(dVar9 - (double)(float)((double)*pfVar3 - dVar4)));
  if ((dVar10 <= dVar5) || ((double)(float)(dVar7 + dVar8) <= dVar5)) {
    if (dVar10 <= (double)(float)(dVar7 + dVar8)) {
      return;
    }
    *pfVar1 = (float)((double)*pfVar1 - dVar4);
    *pfVar2 = (float)(dVar4 - (double)*pfVar2);
    dVar4 = (double)*pfVar3 - dVar4;
  }
  else {
    *pfVar1 = (float)((double)*pfVar1 + dVar4);
    *pfVar2 = (float)(dVar4 - (double)*pfVar2);
    dVar4 = (double)*pfVar3 + dVar4;
  }
  *pfVar3 = (float)dVar4;
  return;
}
