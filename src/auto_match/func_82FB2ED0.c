typedef struct Rec {
  void *kind;
  int a4;
  void *children;
  int ac;
  unsigned short a10;
  unsigned short a12;
  unsigned short a14;
  unsigned char a16;
  unsigned char a17;
} Rec;

typedef struct Node Node;
typedef struct NodeVtbl {
  void (*destroy)(Node *self, int flags);
} NodeVtbl;

struct Node {
  void *vtbl;
  Node *parent;
  int f8;
  unsigned short fc;
  unsigned short fe;
  int f10;
  int f14;
  int f18;
  int f1c;
  int f20;
  unsigned char f24;
  unsigned char f25;
  unsigned char f26;
  unsigned short f28;
};

extern void *fn_82FA5060(int heap, int size);
extern void fn_82FA5190(int heap, void *p);
extern void fn_82FB76F8(Node *n);
extern Node **fn_830080D8(void *list);
extern char lbl_8216D59C[];
extern char lbl_8216D5A4[];
extern int lbl_831BC768;

int fn_82FB2ED0(int ctx, Node *parent, Rec **cursor, unsigned int count)
{
  unsigned int i;
  Rec *rec;
  Node *n;
  Node **slot;
  int heap;

  for (i = 0; i < count; i++) {
    rec = *cursor;
    *cursor = rec + 1;
    if (rec->kind == 0) {
      n = (Node *)fn_82FA5060(lbl_831BC768, 0x2c);
      if (n == 0) {
        return 2;
      }
      n->parent = parent;
      n->vtbl = lbl_8216D5A4;
      n->f8 = 0;
      n->fe = 0x32;
      n->f10 = 0;
      n->f14 = 0;
      n->f18 = 0;
      n->f1c = 0;
      n->f20 = 0;
      n->f24 = 0;
      n->f25 = 1;
      n->f26 = 0;
      n->f28 = 0;
      slot = fn_830080D8((char *)parent + 0x10);
      if (slot == 0) {
        heap = lbl_831BC768;
        (*(*(NodeVtbl **)n)->destroy)(n, 0);
        fn_82FA5190(heap, n);
        return 2;
      }
      *slot = n;
      n->f28 = rec->a14;
      n->fc = rec->a10;
      n->fe = rec->a12;
      n->f1c = rec->ac;
      n->f24 = 0;
      n->f25 = rec->a17;
      n->f8 = rec->a4;
      if (rec->children != 0 && fn_82FB2ED0(ctx, n, cursor, (unsigned int)rec->children) != 1) {
        return 2;
      }
    }
    else {
      n = (Node *)fn_82FA5060(lbl_831BC768, 0x14);
      if (n == 0) {
        return 2;
      }
      n->parent = parent;
      n->vtbl = lbl_8216D59C;
      n->f8 = 0;
      n->fe = 0x32;
      slot = fn_830080D8((char *)parent + 0x10);
      if (slot == 0) {
        heap = lbl_831BC768;
        (*(*(NodeVtbl **)n)->destroy)(n, 0);
        fn_82FA5190(heap, n);
        return 2;
      }
      *slot = n;
      n->fc = rec->a10;
      n->fe = rec->a12;
      n->f10 = (int)rec->kind;
      n->f8 = rec->a4;
      fn_82FB76F8(parent);
    }
    if (rec->a12 != 0x32) {
      *((unsigned char *)parent + 0x24) = 1;
    }
  }
  return 1;
}
