typedef struct { void *pad[7]; void (*f1c)(void *, void *); } Vt_82DA6108;

void fn_82DA6108(int param_1, int *param_2)
{
  int a;
  int b;
  int pa;
  int pb;

  a = param_2[0];
  if (*(char *)(a + 4) == 3) {
    if (*(unsigned char *)(param_2[1] + 4) == 3) {
      return;
    }
  }
  if (*(char *)(a + 4) == 3) {
    pa = a + *(char *)(a + 5);
    pb = param_2[1] + *(char *)(param_2[1] + 5);
    (*(Vt_82DA6108 **)(pa + *(char *)(pa + 0x10)))->f1c((void *)(pa + *(char *)(pa + 0x10)), (void *)pb);
  }
  b = param_2[1];
  if (*(unsigned char *)(b + 4) == 3) {
    pb = b + *(char *)(b + 5);
    pa = param_2[0] + *(char *)(param_2[0] + 5);
    (*(Vt_82DA6108 **)(pb + *(char *)(pb + 0x10)))->f1c((void *)(pb + *(char *)(pb + 0x10)), (void *)pa);
  }
}
