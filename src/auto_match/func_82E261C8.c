typedef struct { unsigned id; char pad[0x20]; } E;
extern unsigned lbl_8214C3FC[];
extern E lbl_83187510[];
int fn_82E261C8(unsigned x, unsigned *out)
{
  unsigned *p = lbl_8214C3FC;
  unsigned i = 0;
  unsigned v;
  for (; i != 0xc; i += 4, p++) if (x == *p) { if (out == 0) return 1; v = 1; goto L; }
  {
  E *q = lbl_83187510;
  unsigned j = 0;
  for (; j != 0x804; j += 0x24, q++) if (x == q->id) { if (out != 0) *out = 1; return 0; }
  }
  if (out != 0) {
    v = 0;
L:
    *out = v;
  }
  return 1;
}
