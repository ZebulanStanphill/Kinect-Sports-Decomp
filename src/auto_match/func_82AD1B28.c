typedef struct Node_82AD1B28 Node_82AD1B28;
struct Node_82AD1B28 {
  unsigned pad0 : 1;
  unsigned flag : 1;
  unsigned pad1 : 2;
  unsigned nsrc : 3;
  unsigned pad2 : 12;
  unsigned sel : 8;
  unsigned pad3 : 5;
  unsigned f4;
  Node_82AD1B28 *next;
};
typedef struct { unsigned f0; Node_82AD1B28 *head; unsigned w8; } Obj_82AD1B28;

static int notNull(Node_82AD1B28 *p) { if (p) return 1; return 0; }

void fn_82AD1B28(Obj_82AD1B28 *o)
{
  Node_82AD1B28 *n;
  unsigned m = 0;

  for (n = o->head; notNull(n); n = n->next) {
    unsigned char on = n->flag || n->nsrc != 0;
    if (on) {
      unsigned sub = 0;
      unsigned i = 0;
      if (n->nsrc != 0) {
        unsigned sh = 0;
        do {
          i++;
          sub = (1 << (n->sel >> sh & 3)) | sub;
          sh += 2;
        } while (i < n->nsrc);
      }
      m = sub | m;
    }
  }
  m = (m & 0xffff1fff) | ((unsigned)(0x8da691691448ULL >> m >> m >> m) & 7) << 13;
  o->w8 = (o->w8 & 0xfffe3fe1) | ((m << 1) & 0x1c000) | ((m << 1) & 0x1e);
}
