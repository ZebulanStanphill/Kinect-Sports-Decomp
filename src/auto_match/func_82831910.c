extern int fn_82831868();


void fn_82831910(int param_1,int param_2)

{
  unsigned int iVar1, a, b;
  struct { unsigned int a,b; } t;
  
  if (*(unsigned int *)(param_2 + 0x14) != 0) {
    a = *(unsigned int *)(param_1 + 0x2c8);
    if (*(unsigned int *)(param_2 + 0x14) != a) {
      b = *(unsigned int *)(param_1 + 0x2b8);
      if (b != 0) {
        *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(param_1 + 0xb0) + 1;
        if (*(char *)(param_1 + 1000) == '\0') {
          t.a = a;
          t.b = b;
          fn_82831868(&t.a,*(unsigned int *)(param_1 + 0x3c0));
        }
        *(unsigned int *)(param_1 + 0x2b8) = 0;
      }
      *(unsigned int *)(param_1 + 0x2c8) = *(unsigned int *)(param_2 + 0x14);
    }
    iVar1 = *(unsigned int *)(param_1 + 700) + 1;
    *(unsigned int *)(param_1 + 700) = iVar1;
    b = *(unsigned int *)(param_1 + 0x2b8) + 1;
    *(unsigned int *)(param_1 + 0x2b8) = b;
    if (iVar1 == *(unsigned int *)(param_1 + 0xb4)) {
      *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(param_1 + 0xb0) + 1;
      if (*(char *)(param_1 + 1000) == '\0') {
        t.a = *(unsigned int *)(param_1 + 0x2c8);
        t.b = b;
        fn_82831868(&t.a,*(unsigned int *)(param_1 + 0x3c0));
      }
    }
  }
  return;
}

