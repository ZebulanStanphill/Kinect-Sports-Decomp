typedef void (*code)();
typedef struct { char pad[0x1c]; code cb; } Ops;
typedef struct { char pad[0x10]; Ops *ops; char pad2[0x5c]; int result; } S;

int fn_828188C0(S *param_1)
{
  code cb = param_1->ops->cb;
  if (cb != 0) {
    cb();
  }
  return param_1->result;
}
