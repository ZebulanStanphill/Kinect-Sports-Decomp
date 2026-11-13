void d3dx_reset_error_mgr(int *param_1)

{
  *(unsigned int *)(*param_1 + 0x6c) = 0;
  *(unsigned int *)(*param_1 + 0x14) = 0;
  return;
}

