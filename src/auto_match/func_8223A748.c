void fn_8223A748(int *param_1,unsigned int *param_2,int *param_3,unsigned char param_4)

{
  if (param_3 == param_1) {
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
  }
  else {
    if (param_4 != '\0') {
      param_3[1] = (int)param_2;
      if (param_3 == (int *)param_1[1]) {
        param_1[1] = (int)param_2;
      }
      goto LAB_8223a790;
    }
    param_3[2] = (int)param_2;
    if (param_3 != (int *)param_1[2]) goto LAB_8223a790;
  }
  param_1[2] = (int)param_2;
LAB_8223a790:
  *param_2 = param_3;
  param_2[2] = 0;
  param_2[1] = 0;
  return;
}

