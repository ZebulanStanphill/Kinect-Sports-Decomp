typedef struct Iface_82A40F88 Iface_82A40F88;
struct Iface_82A40F88 {
  struct {
    char pad0[8];
    void (*f08)(Iface_82A40F88 *self);
    char pad1[0x14 - 0xc];
    void (*f14)(Iface_82A40F88 *self);
  } *vt;
};
typedef struct Node_82A40F88 {
  unsigned int key;
  struct Node_82A40F88 *next;
} Node_82A40F88;
typedef struct {
  char pad0[0x74];
  Iface_82A40F88 lock;
  char pad1[0xac - 0x78];
  unsigned int m_ac;
  char pad2[0x218 - 0xb0];
  char list[0x230 - 0x218];
  Node_82A40F88 *head;
} Obj_82A40F88;

static __forceinline Node_82A40F88 *Find(Node_82A40F88 *p, unsigned key) { for (; p != 0; p = p->next) if (p->key == key) return p; return 0; }
extern unsigned int fn_82A1BB18(void);
extern void fn_82A47B28(void *list, Node_82A40F88 *n);

void fn_82A40F88(Obj_82A40F88 *o, unsigned int key)
{
  Iface_82A40F88 *l;
  Node_82A40F88 *n;

  if (key != 0 && fn_82A1BB18() != o->m_ac) {
    l = &o->lock;
    l->vt->f08(l);
    n = Find(o->head, key);
    if (n != 0) fn_82A47B28(o->list, n);
    l->vt->f14(l);
  }
}
