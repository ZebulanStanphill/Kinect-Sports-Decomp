typedef union Key_82896AD8 {
  unsigned w;
  struct { unsigned short a; unsigned short b; } h;
} Key_82896AD8;

typedef struct Node_82896AD8 {
  char pad[0xc];
  unsigned val;
} Node_82896AD8;

typedef struct Frame_82896AD8 {
  Key_82896AD8 key;
  Node_82896AD8 *it;
  char ret[8];
} Frame_82896AD8;

extern void fn_8288BD68(Node_82896AD8 **);
extern void fn_8288C358(unsigned);
extern int *fn_8288CD40(char *, int, Key_82896AD8 *);
extern void fn_82891180(unsigned, Key_82896AD8 *);
extern unsigned fn_82896400(int, unsigned *);

void fn_82896AD8(int param_1)
{
  Frame_82896AD8 f;
  Node_82896AD8 *item;
  unsigned s;
  unsigned i;
  unsigned short n;
  int *p;

  item = **(Node_82896AD8 ***)(param_1 + 0x98);
  f.it = item;
  if (item != *(Node_82896AD8 **)(param_1 + 0x98)) {
    do {
      s = fn_82896400(param_1 + 0x7c, &item->val);
      fn_8288C358(s);
      f.key.w = item->val;
      p = fn_8288CD40(f.ret, param_1 + 0x94, &f.key);
      i = 0;
      n = *(unsigned short *)(*p + 0x2e);
      if (n != 0) {
        do {
          f.key.h.a = (unsigned short)i;
          fn_82891180(s, &f.key);
          i = i + 1;
        } while (i < n);
      }
      fn_8288BD68(&f.it);
      item = f.it;
    } while (item != *(Node_82896AD8 **)(param_1 + 0x98));
  }
}
