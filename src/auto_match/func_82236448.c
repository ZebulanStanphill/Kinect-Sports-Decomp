typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

typedef void (*Get_82236448)(void *, int, void *);
typedef void (*Callback_82236448)(void *, __vector4, __vector4, __vector4, float, int, int, int, float);

typedef struct Target_82236448 {
  char pad[0x10];
  void **cb;
} Target_82236448;

void fn_82236448(int param_1, int key, Target_82236448 *target)
{
  __vector4 v0;
  __vector4 v1;
  __vector4 v2;
  float f0;
  int i0;
  int i1;
  int i2;
  float f1;

  (*(Get_82236448 *)(**(int **)(param_1 + 0x68) + 0x14))(*(void **)(param_1 + 0x68), key, &v0);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x70) + 0x14))(*(void **)(param_1 + 0x70), key, &v1);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x78) + 0x14))(*(void **)(param_1 + 0x78), key, &v2);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x80) + 0x14))(*(void **)(param_1 + 0x80), key, &f0);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x88) + 0x14))(*(void **)(param_1 + 0x88), key, &i0);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x90) + 0x14))(*(void **)(param_1 + 0x90), key, &i1);
  (*(Get_82236448 *)(**(int **)(param_1 + 0x98) + 0x14))(*(void **)(param_1 + 0x98), key, &i2);
  (*(Get_82236448 *)(**(int **)(param_1 + 0xa0) + 0x14))(*(void **)(param_1 + 0xa0), key, &f1);
  if (target->cb != 0) {
    ((Callback_82236448)(*(void ***)target->cb)[1])(target->cb, v0, v1, v2, f0, i0, i1, i2, f1);
  }
}
