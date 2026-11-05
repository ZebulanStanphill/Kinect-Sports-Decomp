typedef struct Node_8270B030 {
  int m0;
  struct Node_8270B030 *c[2];
  int mc;
  unsigned key;
} Node_8270B030;

Node_8270B030 *fn_8270B030(Node_8270B030 **param_1, unsigned param_2)
{
  Node_8270B030 *n;
  Node_8270B030 *best;
  Node_8270B030 *alt;
  Node_8270B030 *c0;
  unsigned bestd;
  unsigned d;
  unsigned k;

  n = *param_1;
  best = 0;
  bestd = 0xffffffff;
  if (n == 0) {
    return best;
  }
  alt = 0;
  k = param_2;
  for (;;) {
    d = param_2 - n->key;
    if (n->key <= param_2 && d < bestd) {
      best = n;
      bestd = d;
      if (d == 0) {
        return n;
      }
    }
    c0 = n->c[0];
    n = n->c[k >> 31];
    if (c0 != 0 && c0 != n) {
      alt = c0;
    }
    if (n == 0) break;
    k = k << 1;
  }
  n = alt;
  if (n == 0) {
    return best;
  }
  do {
    d = param_2 - n->key;
    if (n->key <= param_2 && d < bestd) {
      bestd = d;
      best = n;
    }
    n = n->c[n->c[1] != 0];
  } while (n != 0);
  return best;
}
