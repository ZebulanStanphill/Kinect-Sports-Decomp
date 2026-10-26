typedef void (*fnp)(int, void *);
typedef struct { int ctx; fnp fn; } CB;

void fn_82AB8540(CB *param_1)
{
  if (param_1 == 0) {
    return;
  }
  param_1->fn(param_1->ctx, param_1);
}
