struct Obj_82EDDF88 {
  char pad0[0x247c];
  int t[5][256];
  int *clamp;
  int mode;
  void Build();
};
extern "C" int lbl_83248EC8[];

void Obj_82EDDF88::Build()
{
  Obj_82EDDF88 *o = this;
  int i, off, n;
  int a0, a1, a2, a3, a4;
  int *p;
  if (o->mode == 0) {
    a4 = -0x12a150;
    a3 = -0x1023480;
    a2 = -0x322580;
    a1 = -0x680f80;
    a0 = -0xcc4a80;
    for (i = 0; i < 256; i++) {
      o->t[0][i] = a0 >> 16;
      o->t[1][i] = a1 >> 16;
      o->t[2][i] = a2 >> 16;
      o->t[3][i] = a3 >> 16;
      o->t[4][i] = a4 >> 16;
      a0 += 0x19895;
      a1 += 0xd01f;
      a2 += 0x644b;
      a3 += 0x20469;
      a4 += 0x12a15;
    }
  } else {
    a4 = -0x12b400;
    a3 = -0x10f7280;
    a2 = -0x447b00;
    a1 = -0x1b6700;
    a0 = -0xe65f00;
    for (i = 0; i < 256; i++) {
      o->t[0][i] = a0 >> 16;
      o->t[2][i] = a1 >> 16;
      o->t[1][i] = a2 >> 16;
      o->t[3][i] = a3 >> 16;
      o->t[4][i] = a4 >> 16;
      a0 += 0x1ccbe;
      a1 += 0x36ce;
      a2 += 0x88f6;
      a3 += 0x21ee5;
      a4 += 0x12b40;
    }
  }
  off = -0x858;
  i = -0x216;
  o->clamp = lbl_83248EC8 + 0x216;
  for (n = 0x42c; n != 0; n--) {
    int v = i < 0 ? 0 : (i > 0xff ? 0xff : i);
    i++;
    *(int *)(off + (int)o->clamp) = v;
    off += 4;
  }
}
