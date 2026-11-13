typedef struct Msg_82D82A68 { unsigned char tag; int *obj; int value; } Msg_82D82A68;
extern void fn_82DA6530(int, Msg_82D82A68 *);

int *fn_82D82A68(int param_1, int *param_2, int param_3)
{
  Msg_82D82A68 m;

  if (*(int *)(param_1 + 0x94) != 0) {
    m.obj = param_2;
    m.value = param_3;
    m.tag = 0x24;
    fn_82DA6530(*(int *)(param_1 + 0x88), &m);
  }
  else {
    (*(void (**)(int *, int))(*param_2 + 0xc))(param_2, param_3);
  }
  return param_2;
}
