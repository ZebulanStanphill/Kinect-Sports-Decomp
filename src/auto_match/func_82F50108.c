typedef struct Block_82F50108 {
  unsigned __int64 v[8];
} Block_82F50108;

extern Block_82F50108 fn_82F4FF38(int a);
extern void fn_82F4ED78(int a, int b, Block_82F50108 s, int c, int d, int e, int f);

void fn_82F50108(int param_1, int param_2, int param_3, int param_4,
                 int param_5, int param_6, int param_7)
{
  fn_82F4ED78(param_1, param_2, fn_82F4FF38(param_1), param_4, param_5, param_6, param_7);
}
