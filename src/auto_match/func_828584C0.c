extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);
extern void fn_82837D98(void *a, int b, void **out);
extern void fn_82851888(void **out);

typedef struct { int f0; int idx; int f8; unsigned short bit; } Arg;
typedef struct { int f0; void *f4; char pad[0x54]; void **tbl; } Self;

void fn_828584C0(Self *param_1, Arg *param_2)
{
  void *obj;

  obj = 0;
  fn_82837D98(param_1->tbl[param_2->idx], 0, &obj);
  if (obj == 0) {
    fn_82851888(&obj);
    fn_8263CBB0(param_1->f4, param_2->bit, obj,
                (unsigned __int64)0x8000000000000000 >> (unsigned int)(param_2->bit + 32));
  } else {
    fn_8263CBB0(param_1->f4, param_2->bit, obj,
                (unsigned __int64)0x8000000000000000 >> (unsigned int)(param_2->bit + 32));
  }
}
