typedef struct { unsigned char type; int obj; float v[3]; } Msg_82D8C080;
typedef struct { int pad[0x54/4]; void (*f40)(void *, float *); } Vt_82D8C080;
typedef struct { int vt0; } Sub_82D8C080;
extern int fn_82D80C48(int, void *);
extern int fn_82D89BD8(int);

void fn_82D8C080(int param_1, float *param_2)
{
  int iVar1;
  Msg_82D8C080 m;

  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x94) == 0)) {
    fn_82D89BD8(param_1);
    (*(void (**)(int, float *))(*(int *)(param_1 + 0xe0) + 0x54))(param_1 + 0xe0, param_2);
  }
  else {
    m.v[0] = param_2[0];
    m.v[1] = param_2[1];
    m.v[2] = param_2[2];
    m.type = 0x1d;
    m.obj = param_1;
    fn_82D80C48(iVar1, &m);
  }
}
