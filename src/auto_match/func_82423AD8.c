typedef struct {
  void *begin;
  int x4;
  void *end;
  int xc;
  int x10;
  int x14;
  int x18;
  int x1c;
} State;

int fn_82423AD8(int a, int b, State *s)
{
  int r = 2;
  if (s->begin == s->end) {
    r = 9;
  } else if (s->x1c != 0) {
    r = 5;
  } else if (s->x10 != 0) {
    r = 4;
  } else if (s->x14 != 0) {
    r = 3;
  }
  return r;
}
