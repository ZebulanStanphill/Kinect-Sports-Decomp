typedef struct Node {
  struct Node *next;
  int pad[2];
  int c;
  int a;
  int b;
  int d;
} Node;

typedef struct List {
  int pad;
  Node *head;
} List;

typedef struct Vec {
  char *begin;
  char *end;
} Vec;

typedef struct Item {
  int pad0[3];
  int id;
  char pad1[0x48 - 0x10];
  Vec *vec;
  int pad2;
  List *list;
  unsigned char enabled;
} Item;

typedef struct Rec {
  int id;
  int d;
  int c;
  int a;
  int b;
} Rec;

extern void fn_823E2D30(Node **it);
extern void fn_82820EF8(void *p, int n);
extern void fn_828223C8(void *p, Item **out);
extern unsigned char fn_82827750(int s);
extern void fn_8282D818(int s, Rec **out, int size, int n);

void fn_82832768(int param_1)
{
  Item *item;
  Node *head;
  Node *n;
  Node *it;
  Rec *r;
  int *pid;
  void *p;

  fn_828223C8((void *)(param_1 + 0x2fc), &item);
  while (item != 0) {
    if ((item->vec->end - item->vec->begin) / 0x14 != 0 && item->enabled != 0) {
      head = item->list->head;
      n = head->next;
      it = n;
      if (n != head) {
        pid = &item->id;
        do {
        fn_8282D818(param_1, &r, 0x14, 1);
        r->a = n->a;
        r->b = n->b;
        r->id = *pid;
        r->c = n->c;
        r->d = n->d;
        if (fn_82827750(param_1) != 0) {
          fn_82820EF8(&r->d, 4);
          fn_82820EF8(&r->a, 4);
          fn_82820EF8(&r->id, 4);
          fn_82820EF8(&r->b, 4);
          fn_82820EF8(&r->c, 4);
        }
        *(int *)(param_1 + 0x3c) += 1;
          fn_823E2D30(&it);
          n = it;
        } while (n != head);
      }
    }
    fn_828223C8(item, &item);
  }
}
