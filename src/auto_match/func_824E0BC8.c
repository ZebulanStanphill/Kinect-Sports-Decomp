typedef struct { int a; float b; } E;
typedef struct {
  int pad0;
  E *first;
  E *begin;
  E *end;
  int pad10[4];
  float limit;
} S;

static unsigned int S_size(S *p) { return p->end - p->begin; }

int fn_824E0BC8(S *p)
{
  if (S_size(p) > 0 && p->limit > p->first->b) {
    return 1;
  }
  return 0;
}
