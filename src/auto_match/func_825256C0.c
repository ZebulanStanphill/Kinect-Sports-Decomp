typedef unsigned int uint;

typedef struct {
  char pad[0xb6c];
  void *slots[4];
  void *ctx;
} Self;

extern void fn_82524968(Self *);
extern void fn_82524D30(Self *, uint);
extern void *fn_827EF640(int);
extern void *fn_827F0298(void *, void *, int, int);

void *fn_825256C0(Self *param_1, uint *param_2)
{
  uint i;
  void *mem;
  void *obj;

  for (i = 0; i < 4; i++) {
    if (param_1->slots[i] == 0) break;
  }
  *param_2 = i;
  if (param_1->ctx == 0) {
    fn_82524968(param_1);
  }
  mem = fn_827EF640(0x130);
  if (mem != 0) {
    obj = fn_827F0298(mem, param_1->ctx, 0, 0);
  } else {
    obj = 0;
  }
  param_1->slots[i] = obj;
  fn_82524D30(param_1, i);
  return param_1->slots[i];
}
