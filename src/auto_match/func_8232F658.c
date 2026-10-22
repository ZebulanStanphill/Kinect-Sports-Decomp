typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct { __vector4 v; } Vec;

extern Vec fn_822C09B0(int a, int b);
extern void fn_822BF0B0(int a, int b, __vector4 v, int c);
extern void fn_822BF738(int a, int b, int c, __vector4 v, int d, void *e);
extern int fn_824D3368(int p);
extern int fn_824D33E8(int p);

typedef struct {
  int active;
  int a;
  int b;
} Side;

/* Both updates form one expression, so each call result gets its own
   stack temporary, as in the original. */
#define UPDATE_SIDE(o, s, f, a, b)                                            \
  ((s)->active != 0                                                           \
     ? ((b) = (s)->b, (a) = (s)->a,                                           \
        fn_822BF0B0(*(int *)((o) + 0x27c), (a), fn_822C09B0((o), (f)).v, (b)), \
        (b) = (s)->a, (a) = (s)->b,                                           \
        fn_822BF738((o), (a), (b), fn_822C09B0((o), (f)).v, (f), 0))          \
     : (void)0)

void fn_8232F658(int param_1)
{
  int obj;
  int st;
  int a, b;

  obj = *(int *)(param_1 + 0xc);
  st = *(int *)(obj + 0x24);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (fn_824D33E8(st) == 0 && fn_824D3368(st) == 0) {
      UPDATE_SIDE(obj, (Side *)(st + 0x528), 1, a, b),
      UPDATE_SIDE(obj, (Side *)(st + 0x9a8), 0, a, b);
    }
  }
}
