typedef struct Node { struct Node *next; unsigned key; void *value; } Node;
typedef struct Obj { void **vt; } Obj;
extern void *lbl_831BC768;
extern void *fn_82FA5060(void *, int);
extern void fn_82FA5190(void *, void *);
extern int fn_83034920();
extern Obj *fn_83034A58(void *, unsigned);
extern Node *fn_8301B1E8(void *, unsigned);
typedef void (*Fn)(Obj *, int);
static void **Find(char *self, unsigned key)
{
  Node *n = *(Node **)(self + (key % 0xc1 + 10) * 4);
  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}
void *fn_8301A830(char *self, unsigned key)
{
  void *mem;
  Obj *o;
  Node *slot;
  void *heap;
  void **pv = Find(self, key);
  if (pv != 0) return *pv;
  mem = fn_82FA5060(lbl_831BC768, 0x60);
  if (mem != 0) {
    o = fn_83034A58(mem, key);
    if (o != 0) {
      if (fn_83034920() == 1 && (slot = fn_8301B1E8(self + 0x24, key)) != 0) {
        *(Obj **)slot = o;
        return o;
      }
      heap = lbl_831BC768;
      (*(Fn)o->vt[0])(o, 0);
      fn_82FA5190(heap, o);
      o = 0;
    }
  } else {
    o = 0;
  }
  return o;
}
