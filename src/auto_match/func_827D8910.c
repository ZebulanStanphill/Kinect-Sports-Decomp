extern int fn_827E8580();
extern int fn_82811400();
extern int memcpy();

typedef struct {
  int a;
  unsigned char b[24];
} Rec;

int fn_827D8910(int param_1, unsigned char *param_2)
{
  Rec r;

  fn_82811400(r.b, 0x10);
  r.a = *(int *)param_2;
  memcpy(r.b, param_2 + 4, 0x18);
  fn_827E8580(param_1, &r);
  return param_1;
}
