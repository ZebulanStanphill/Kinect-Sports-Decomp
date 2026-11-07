typedef unsigned int uint;

extern int fn_82A87738();

typedef struct Elem_82A8EB80 {
  uint size;
  uint b;
  uint c;
} Elem_82A8EB80;

typedef struct Hdr_82A8EB80 {
  uint count;
  uint pad;
  Elem_82A8EB80 e[1];
} Hdr_82A8EB80;

void fn_82A8EB80(int param_1, Hdr_82A8EB80 *param_2, int param_3, int param_4, int *param_5)
{
  uint n;
  uint i;

  n = (*(uint *)(param_1 + 4) < param_2->count) ? *(uint *)(param_1 + 4) : param_2->count;
  for (i = 0; i < n; i++) {
    fn_82A87738(param_1, &param_2->e[i], param_3, param_4, &param_5[i]);
    param_4 += param_2->e[i].size;
  }
}
