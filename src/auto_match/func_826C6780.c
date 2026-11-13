typedef struct Item_826C6780 Item_826C6780;
typedef struct Vt_826C6780 { char pad[0x44]; Item_826C6780 *(*f44)(Item_826C6780 *); } Vt_826C6780;
struct Item_826C6780 { Vt_826C6780 *vt; };
typedef struct Vt2_826C6780 { int pad[2]; unsigned int (*f8)(void *); } Vt2_826C6780;
typedef struct Sub_826C6780 { Vt2_826C6780 *vt; } Sub_826C6780;
typedef struct Obj_826C6780 { char pad[0xa8]; Item_826C6780 **items; unsigned int count; } Obj_826C6780;
extern void fn_82757DE8(int, void *);

void fn_826C6780(Obj_826C6780 *o, int a)
{
  unsigned int n = o->count;
  int off;
  unsigned int k;
  if (n != 0) {
    off = 0;
    k = n;
    do {
      Item_826C6780 *it = *(Item_826C6780 **)((char *)o->items + off);
      if (it != 0) {
        Sub_826C6780 *sub = (Sub_826C6780 *)it->vt->f44(it);
        unsigned int r = sub->vt->f8(sub);
        if ((r & 0xff00) == 0x8200) {
          fn_82757DE8(a, it);
        }
      }
      k--;
      off += 4;
    } while (k != 0);
  }
}
