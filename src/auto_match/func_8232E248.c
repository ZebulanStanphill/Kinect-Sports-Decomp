typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct { __vector4 v; } Vec;

extern Vec fn_822C09B0(int a, int b);
extern void fn_822BF0B0(int a, int b, __vector4 v, int c);
extern void fn_822BF738(int a, int b, int c, __vector4 v, int d, void *e);

struct S { char pad[0x54]; int h; char pad2[0x94 - 0x58]; int a94; int a98; int a9c; int aa0; };

void fn_8232E248(struct S *s)
{
  int t;
  fn_822BF0B0(s->h, s->a94, fn_822C09B0(s->h, s->a98).v, s->aa0);
  t = s->a98;
  fn_822BF738(s->h, s->aa0, s->a94, fn_822C09B0(s->h, t).v, t, &s->a9c);
}
