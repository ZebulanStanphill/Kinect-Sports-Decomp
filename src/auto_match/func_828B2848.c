typedef struct Item_828B2848 Item_828B2848;
typedef struct ItemVt_828B2848 {
  void (*dtor)(Item_828B2848 *, int);
  void *(*f4)(Item_828B2848 *);
  unsigned (*f8)(Item_828B2848 *);
  void *pad[15];
  unsigned __int64 (*f48)(Item_828B2848 *);
} ItemVt_828B2848;
struct Item_828B2848 { ItemVt_828B2848 *vt; };
typedef struct Node_828B2848 {
  struct Node_828B2848 *next;
  struct Node_828B2848 *prev;
  Item_828B2848 *item;
} Node_828B2848;
typedef struct List_828B2848 {
  Node_828B2848 *head;
  int size;
} List_828B2848;
typedef struct Obj_828B2848 {
  int pad[3];
  List_828B2848 list;
} Obj_828B2848;

extern void fn_8265CA20(void *);
extern void fn_828B25C8(Obj_828B2848 *);
extern unsigned char fn_828B2D18(Item_828B2848 *, unsigned __int64 *);
extern unsigned char fn_828B2E68(Item_828B2848 *);
extern void fn_828B4690(Item_828B2848 *, Item_828B2848 *);
extern void fn_828B4BA8(void *, unsigned);

void fn_828B2848(Obj_828B2848 *o, Item_828B2848 *p)
{
  unsigned __int64 id;
  Node_828B2848 *n;
  List_828B2848 *l;
  Item_828B2848 *it;
  unsigned r;
  id = p->vt->f48(p);
  l = &o->list;
  n = l->head->next;
  if (n != l->head) {
    do {
      it = n->item;
      if (fn_828B2D18(it, &id) != 0) {
        fn_828B4690(it, p);
        if (fn_828B2E68(it) == 0) {
          return;
        }
        if (n != l->head) {
          n->prev->next = n->next;
          n->next->prev = n->prev;
          fn_8265CA20(n);
          l->size = l->size - 1;
        }
        r = it->vt->f8(it);
        if (r != 0) {
          n = l->head->next;
          if (n != l->head) {
            do {
              void *q = n->item->vt->f4(n->item);
              if (q != 0) {
                fn_828B4BA8(q, r);
              }
              n = n->next;
            } while (n != l->head);
          }
        }
        it->vt->dtor(it, 1);
        fn_828B25C8(o);
        return;
      }
      n = n->next;
    } while (n != l->head);
  }
}
