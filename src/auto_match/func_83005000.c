typedef struct S S;
typedef void (*vfn)(S *, unsigned char);
struct S {
  vfn *vt;
  char pad[0x39];
  unsigned char b7 : 5;
  unsigned char flag : 1;
};

void fn_83005000(S *param_1, unsigned char param_2)
{
  vfn f = param_1->vt[0xdc / 4];
  param_1->flag = param_2;
  f(param_1, param_2);
}
