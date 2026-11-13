// Built with link-time code generation together with its "ltcg_units" (objects.json):
// o stays in volatile r8 across fn_82FB48E8, which LTCG knows leaves it alone.
typedef struct VT_82FB4CB8 {
  void *s[9];
  void (*f24)(struct Node_82FB4CB8 *);
} VT_82FB4CB8;
typedef struct Node_82FB4CB8 {
  VT_82FB4CB8 *vt;
  char pad[0x30];
  unsigned char flags;
} Node_82FB4CB8;
typedef struct Owner_82FB4CB8 {
  char pad[0x1c];
  Node_82FB4CB8 *node;
} Owner_82FB4CB8;
typedef struct List_82FB4CB8 {
  struct List_82FB4CB8 *next;
  Owner_82FB4CB8 *owner;
} List_82FB4CB8;
typedef struct Obj_82FB4CB8 {
  char pad[0xc];
  void *fc;
  char pad2[0x44];
  List_82FB4CB8 *list;
  char pad3[0x1c];
  int *f74;
} Obj_82FB4CB8;
extern unsigned char fn_82FB48E8(void *p);

void fn_82FB4CB8(Obj_82FB4CB8 *o)
{
  unsigned char ok;
  List_82FB4CB8 *l;
  Node_82FB4CB8 *n;

  if (*o->f74 != 0) {
    ok = 1;
  } else if (o->fc != 0) {
    ok = fn_82FB48E8(o->fc);
  } else {
    ok = 0;
  }
  if (ok == 0) {
    for (l = o->list; l != 0; l = l->next) {
      n = l->owner->node;
      if (n != 0 && (n->flags & 0x80) != 0) {
        n->vt->f24(n);
      }
    }
  }
}
