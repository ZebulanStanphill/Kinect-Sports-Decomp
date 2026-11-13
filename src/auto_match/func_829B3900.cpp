struct Node_829B3860 {
  int pad0[1];
  int f4;
  int f8;
  int pad_c[(0x14 - 0xc) / 4];
  int f14;
  int pad18[(0x5c - 0x18) / 4];
  unsigned int f5c;
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
  int pad14[2];
  int *cnt2;
  int *base2;
  int *out2;
  void Walk(int b, int idx);
  void Collect(int b, int idx);
};

void Obj_829B3860::Collect(int b, int idx)
{
  Obj_829B3860 *self = this;
  Node_829B3860 *n = self->in->nodes[idx];
  if ((self->in->flags[n->f4]->f4 & 0x20) == 0 && n->f5c != 0) {
    if (self->out2 != 0) {
      self->out2[self->base2[b] + self->cnt2[b]] = idx;
    }
    self->cnt2[b] = self->cnt2[b] + 1;
  }
  if (n->f14 != -1) {
    self->Walk(b, n->f14);
  }
}
