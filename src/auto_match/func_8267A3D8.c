unsigned int fn_8267A3D8(int param_1,int param_2,unsigned int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  else {
    if (param_3 == 1) {
      param_2 = param_2 + *(int *)(param_1 + 0xc);
    }
    else {
      if (2 < param_3) goto LAB_8267a414;
      param_2 = *(int *)(*(int *)(param_1 + 8) + 8) - *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
LAB_8267a414:
  return *(unsigned int *)(param_1 + 0xc);
}

