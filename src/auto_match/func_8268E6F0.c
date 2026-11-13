typedef struct Node_8268E6F0 { char pad[0x18]; struct Node_8268E6F0 *child[2]; } Node_8268E6F0;

Node_8268E6F0 *fn_8268E6F0(Node_8268E6F0 **root, unsigned int size)
{
  Node_8268E6F0 *t = *root;
  Node_8268E6F0 *best = 0;
  unsigned int bestdiff = 0xffffffff;
  Node_8268E6F0 *rst;
  Node_8268E6F0 *rt;
  unsigned int k;
  if (t == 0) {
    return best;
  }
  rst = 0;
  k = size;
  for (;;) {
    unsigned int diff = size - (unsigned int)t;
    if ((unsigned int)t <= size && diff < bestdiff) {
      best = t;
      bestdiff = diff;
      if (diff == 0) {
        return t;
      }
    }
    rt = t->child[0];
    t = t->child[k >> 31];
    if (rt != 0 && rt != t) {
      rst = rt;
    }
    if (t == 0) {
      break;
    }
    k = k << 1;
  }
  t = rst;
  if (t == 0) {
    return best;
  }
  do {
    unsigned int diff = size - (unsigned int)t;
    if ((unsigned int)t <= size && diff < bestdiff) {
      bestdiff = diff;
      best = t;
    }
    t = t->child[t->child[1] != 0];
  } while (t != 0);
  return best;
}
