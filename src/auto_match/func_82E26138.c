typedef struct { unsigned id; char pad[0x20]; } E;
extern unsigned lbl_8214C3F0[];
extern E lbl_83187510[];
int fn_82E26138(unsigned x, unsigned *out)
{
  unsigned *p = lbl_8214C3F0;
  unsigned i = 0;
  unsigned v;
  for (; i != 0xc; i += 4, p++) if (x == *p) { if (out == 0) return 0; v = 1; goto L; }
  {
  E *q = lbl_83187510;
  unsigned j = 0;
  for (; j != 0x804; j += 0x24, q++) if (x == q->id) { if (out != 0) *out = 1; return 1; }
  }
  if (out != 0) {
    v = 0;
L:
    *out = v;
  }
  return 0;
}
