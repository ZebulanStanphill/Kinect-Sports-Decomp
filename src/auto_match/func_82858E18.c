typedef struct { unsigned int a; unsigned int b; } Obj;
typedef struct { int pad; unsigned short idx; unsigned short type; unsigned int key; } Arg;

extern void (*lbl_83211304[])(unsigned int, unsigned short, unsigned int, unsigned int *);
extern void fn_8263CBB0(unsigned int, unsigned int, unsigned int, unsigned __int64);

void fn_82858E18(Obj *param_1, Arg *param_2)
{
  unsigned int out[2];
  unsigned int idx;

  lbl_83211304[3](param_1->a, param_2->type, param_2->key, out);
  idx = param_2->idx;
  fn_8263CBB0(param_1->b, idx, out[0], 0x8000000000000000ULL >> (idx + 32));
}
