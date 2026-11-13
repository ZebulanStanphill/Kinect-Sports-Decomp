void fn_8306FB20(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  *(float *)(param_1 + 0xd0c) = (float)param_2;
  *(float *)(param_1 + 0xd10) = (float)param_3;
  *(float *)(param_1 + 0xd14) = (float)(param_2 + param_3);
  *(float *)(param_1 + 0xd18) = (float)param_4;
  *(int *)(param_1 + 0xd24) = *(int *)(param_1 + 0xd24) + 1;
  *(float *)(param_1 + 0xd1c) = (float)param_5;
  *(float *)(param_1 + 0xd20) = (float)param_6;
  return;
}

