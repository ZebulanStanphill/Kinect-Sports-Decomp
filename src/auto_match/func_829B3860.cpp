struct Node_829B3860 {
  int pad0[1];
  int f4;
  int f8;
  int pad_c[(0x30 - 0xc) / 4];
  int f30;
  int pad34;
  int f38;
  int pad3c[(0x74 - 0x3c) / 4];
  int f74;
};
struct Flag_829B3860 {
  int pad0;
  unsigned int f4;
};
struct In_829B3860 {
  int pad0[4];
  Flag_829B3860 **flags;
  Node_829B3860 **nodes;
};
struct Obj_829B3860 {
  int pad0;
  In_829B3860 *in;
  int *cnt;
  int *base;
  int *out;
  void Walk(int b, int idx);
};

void Obj_829B3860::Walk(int b, int idx)
{
  Node_829B3860 *n = in->nodes[idx];
  if (n->f38 != -1) {
    Walk(b, n->f38);
    return;
  }
  n->f74 = b;
  n->f30 = -1;
  if ((in->flags[n->f4]->f4 & 0x10) == 0) {
    if (out != 0) {
      out[base[b] + cnt[b]] = idx;
    }
    cnt[b] = cnt[b] + 1;
  }
  if (n->f8 != -1) {
    Walk(b, n->f8);
  }
}
