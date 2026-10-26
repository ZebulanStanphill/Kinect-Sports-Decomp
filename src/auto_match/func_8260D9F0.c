typedef struct {
  int a;
  int type;
} T;

int fn_8260D9F0(T **p)
{
  int x = (*p)->type;
  if (x != 0) {
    return x == 12 ? 3 : 4;
  }
  return 2;
}
