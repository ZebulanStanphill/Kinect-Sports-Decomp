void d3dx_jpeg_destroy(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    (*(int (**)())(*(int *)(param_1 + 4) + 0x28))();
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}

