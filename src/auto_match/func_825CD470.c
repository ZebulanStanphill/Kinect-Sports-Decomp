typedef struct Sub_825CD470 {
  char pad0[0xc0];
  unsigned int a;
  unsigned int b;
  unsigned int c;
  char pad1[0xd8 - 0xcc];
  unsigned int cur;
} Sub_825CD470;

void fn_825CD470(char *param_1)
{
  Sub_825CD470 *s = (Sub_825CD470 *)(param_1 + 0xa10);
  unsigned int v;

  if (param_1[0xb2d] == 0) {
    return;
  }
  v = s->cur;
  if (v == 0) {
    s->cur = s->a;
  } else if (v == s->a) {
    s->cur = s->b;
  } else if (v == s->b) {
    s->cur = s->c;
  } else {
    s->cur = s->a;
  }
}
