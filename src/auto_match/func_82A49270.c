typedef struct Item_82A49270 { char pad[0xfc]; unsigned lo; unsigned len; } Item_82A49270;
typedef struct Node_82A49270 { Item_82A49270 *item; struct Node_82A49270 *next; } Node_82A49270;
typedef struct Parent_82A49270 { char pad[0x3f74]; Node_82A49270 *head; } Parent_82A49270;
typedef struct Self_82A49270 {
  char pad0[0x30];
  Parent_82A49270 *parent;
  char pad1[0x1c0 - 0x34];
  unsigned f1c0;
  char pad2[0x1d4 - 0x1c4];
  unsigned f1d4;
  char pad3[0x1dc - 0x1d8];
  unsigned f1dc;
  char pad4[0x1f0 - 0x1e0];
  char a[0x28];
  char b[1];
} Self_82A49270;
extern void fn_82A44008();
extern void fn_82A45C40();
extern void fn_82A48EE8();
extern unsigned fn_82A40BA8();
extern void fn_82A4F4E0();

void fn_82A49270(Self_82A49270 *s)
{
  unsigned v;
  Node_82A49270 *node;
  Node_82A49270 *cur;
  Item_82A49270 *item;
  unsigned r;

  fn_82A44008(s);
  if (s->f1d4 != 0) {
    fn_82A45C40(s->f1d4);
    s->f1d4 = 0;
  }
  v = s->f1c0;
  if (v != 0) {
    node = s->parent->head;
    do {
      cur = node;
      if (node != 0) {
        node = node->next;
        item = cur->item;
      } else {
        item = 0;
      }
    } while (v < item->lo || v >= item->len + item->lo);
    fn_82A48EE8(item, v);
  }
  while ((r = fn_82A40BA8(s->a)) != 0) {
    if (r != 0) {
      fn_82A4F4E0(r);
    }
  }
  while ((r = fn_82A40BA8(s->b)) != 0) {
    if (r != 0) {
      fn_82A4F4E0(r);
    }
  }
  if (s->f1dc != 0) {
    fn_82A4F4E0(s->f1dc);
    s->f1dc = 0;
  }
}
