typedef struct Msg_82D81000 { unsigned char tag; int a; unsigned short b; unsigned char c; } Msg_82D81000;
extern void fn_82DA6530(int, Msg_82D81000 *);

void fn_82D81000(int param_1, int param_2, unsigned param_3, unsigned param_4)
{
  Msg_82D81000 m;

  if (*(int *)(param_1 + 0x94) != 0) {
    m.a = param_2;
    m.tag = 0x17;
    m.b = param_3;
    m.c = param_4;
    fn_82DA6530(*(int *)(param_1 + 0x88), &m);
    return;
  }
  (*(void (**)(int, int, unsigned, int, unsigned))(**(int **)(param_1 + 8) + 0x30))(*(int *)(param_1 + 8), param_2, param_3, param_1, param_4);
}
