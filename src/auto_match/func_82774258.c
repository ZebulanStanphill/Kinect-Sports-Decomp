extern int fn_8267BE38();
typedef struct { int x; int pad[7]; } Elem;
typedef struct { int a; unsigned int n; Elem e[1]; } Blk;

void fn_82774258(Blk **param_1)
{
  unsigned int i;
  unsigned int n;
  if (*param_1 != 0) {
    n = (*param_1)->n;
    for (i = 0; i <= n; i++) {
      if ((*param_1)->e[i].x != -2) {
        (*param_1)->e[i].x = -2;
      }
    }
    fn_8267BE38(*param_1);
    *param_1 = 0;
  }
}
