typedef int (*code)();
typedef struct Vec { unsigned int x, y, z; } Vec;

void fn_823FA7B8(int param_1, unsigned __int64 param_2, unsigned int param_3)
{
  struct { unsigned char b; unsigned int a; unsigned int v[2]; Vec vec; } t;

  (*(code *)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&t.a);
  (*(code *)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,t.v);
  (*(code *)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,&t.vec);
  (*(code *)(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,&t.b);
  if (param_3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 8) + param_3) = t.a;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + param_3) = t.v[0];
    *(Vec *)(*(int *)(param_1 + 0x10) + param_3) = t.vec;
    *(unsigned char *)(*(int *)(param_1 + 0x14) + param_3) = t.b;
  }
}
