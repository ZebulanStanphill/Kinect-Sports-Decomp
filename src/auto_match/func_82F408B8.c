/* this-adjusting thunk: back to the outer object (-0xc), then to its virtual base; flag 0x80 added to the last argument */
extern void fn_82F40E88(char *p, int a, int b, int c, int d, int e);

void fn_82F408B8(char *p, int a, int b, int c, int d, int e)
{
  fn_82F40E88(p + (*(int **)(p - 0xc))[1] - 0xc, a, b, c, d, e | 0x80);
}
