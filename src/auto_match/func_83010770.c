typedef struct Node {
  char pad[0xc];
  void *key;
  struct Node *next;
  struct Node *alt;
} Node;

struct Obj;
typedef struct Vtbl {
  void (*f0)(struct Obj *);
  void (*f4)(struct Obj *);
  void (*Release)(struct Obj *);
} Vtbl;

typedef struct Obj {
  Vtbl *vtbl;
  int a;
  int b;
  int c;
  Node *first;
  Node *alt;
} Obj;

extern Obj *fn_82FAB9C0();
extern unsigned int lbl_832642E0;

unsigned char fn_83010770(int param_1, void *a, void *b)
{
  unsigned char found;
  Obj *o;
  Node *n;
  Node *alt;

  found = 0;
  if (a != 0 && b != 0) {
    if (a == b) {
      return 1;
    }
    o = fn_82FAB9C0(lbl_832642E0 + 4, b);
    if (o != 0) {
      alt = o->alt;
      for (n = o->first; n != 0; n = n->next) {
        if (a == n->key) {
          found = 1;
          break;
        }
        if (alt == 0) {
          alt = n->alt;
        }
      }
      if (!found) {
        for (; alt != 0; alt = alt->alt) {
          if (a == alt->key) {
            found = 1;
            break;
          }
        }
      }
      o->vtbl->Release(o);
    }
  }
  return found;
}
