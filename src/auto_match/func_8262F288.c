//BODY
typedef struct Item_8262F288 {
  char pad[0x20];
  unsigned int f20;
  unsigned int f24;
  char pad2[0xb1c - 0x28];
  unsigned int fb1c;
  unsigned int fb20;
} Item_8262F288;
typedef struct Pair_8262F288 { Item_8262F288 *item; int x; } Pair_8262F288;
typedef struct Node_8262F288 { struct Node_8262F288 *prev; struct Node_8262F288 *next; } Node_8262F288;
typedef struct Obj_8262F288 {
  char pad[0x310];
  Pair_8262F288 *begin;
  Pair_8262F288 *end;
  char pad2[1000 - 0x318];
  Node_8262F288 head;
} Obj_8262F288;

extern void fn_82529320(void *, int);
extern void fn_825298E8(void *);
extern unsigned char fn_8288B760(unsigned int);

void fn_8262F288(Obj_8262F288 *o, unsigned int mask)
{
  Pair_8262F288 *it;
  Pair_8262F288 *end;
  Item_8262F288 *e;
  Node_8262F288 *n;
  Node_8262F288 *cur;
  unsigned char c;

  it = o->begin;
  end = o->end;
  for (; it < end; it++) {
    e = it->item;
    if (e->f20 == 0) {
      c = e->f24 != 0;
    } else {
      c = fn_8288B760(e->f20);
    }
    if (c != 0 && (mask == 0 || (e->fb20 & mask) != 0) && (e->fb1c != 0 || e->fb20 == 0)) {
      fn_82529320(e, 1);
    }
  }
  n = &o->head;
  while ((cur = n->next) != 0) {
    e = (Item_8262F288 *)((char *)cur - 0x30);
    if (e->f20 == 0) {
      c = e->f24 != 0;
    } else {
      c = fn_8288B760(e->f20);
    }
    if (c != 0 && (mask == 0 || (e->fb20 & mask) != 0) && (e->fb1c != 0 || e->fb20 == 0)) {
      fn_825298E8(e);
    } else {
      n = cur;
    }
  }
}
