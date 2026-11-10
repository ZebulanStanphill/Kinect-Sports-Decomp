extern void fn_8289F160(unsigned int *out, void *tbl, int *key);
extern unsigned char fn_82887D30(int a, int b, unsigned short c);
extern char lbl_83212A00[];

struct Node_82882E60;
typedef struct Link_82882E60 { struct Link_82882E60 *next, *prev; } Link_82882E60;
typedef struct VT_82882E60 {
  void *s0;
  int (*get)(struct Node_82882E60 *self);
} VT_82882E60;
typedef struct Node_82882E60 {
  VT_82882E60 *vt;
  char pad4[4];
  Link_82882E60 link;
  char pad10[0x24 - 0x10];
  unsigned char flag;
  char pad25;
  unsigned short id;
  char pad28[0x30 - 0x28];
  struct Node_82882E60 *next;
} Node_82882E60;
typedef struct List_82882E60 {
  int key;
  char pad4[4];
  Link_82882E60 head;
} List_82882E60;
typedef struct Tbl_82882E60 { int pad0; unsigned int end; } Tbl_82882E60;
typedef struct Ent_82882E60 { char pad0[0x10]; int obj; } Ent_82882E60;

Node_82882E60 *fn_82882E60(List_82882E60 *list, Node_82882E60 *node)
{
  int key;
  unsigned int it;
  int owner;

  key = list->key;
  fn_8289F160(&it, lbl_83212A00, &key);
  if (it != ((Tbl_82882E60 *)lbl_83212A00)->end) {
    owner = ((Ent_82882E60 *)it)->obj;
  } else {
    owner = 0;
  }
  while (node != 0) {
    if (node->flag == 0) break;
    if (fn_82887D30(*(int *)(owner + 0xb4), node->vt->get(node), node->id) != 0) break;
    {
      /* append the node's link before the list's sentinel */
      Link_82882E60 *link = &node->link;
      Link_82882E60 *head = &list->head;
      Link_82882E60 *prev = head->prev;
      link->prev = prev;
      prev->next = link;
      head->prev = link;
      link->next = head;
    }
    node = node->next;
  }
  return node;
}
