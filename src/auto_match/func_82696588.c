typedef struct { unsigned int a; unsigned int b; unsigned char c; } Src;
typedef struct { unsigned int p; unsigned int q; } Sub;
typedef struct { unsigned char k; char pad[3]; Sub s; unsigned char z; } Obj;
extern int fn_826959C8();
extern int fn_826C3378();

void fn_82696588(Obj *param_1, Src *param_2)
{
  unsigned int iVar1;
  Sub *s;

  fn_826959C8();
  param_1->k = 0xc;
  param_1->z = 0;
  s = &param_1->s;
  iVar1 = param_2->a;
  s->p = iVar1;
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  s->q = 0;
  if (param_2->b != 0) {
    fn_826C3378(s, param_2->b, param_2->c & 1);
  }
}
