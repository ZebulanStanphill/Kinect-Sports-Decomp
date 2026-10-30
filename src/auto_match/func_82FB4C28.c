typedef struct Obj_82FB4C28 Obj_82FB4C28;
typedef struct Item_82FB4C28 { char pad0[0x1c]; void *h; char pad1[0x10]; unsigned flags; char pad2[0x10]; unsigned char b; } Item_82FB4C28;
typedef struct Node_82FB4C28 { struct Node_82FB4C28 *next; Item_82FB4C28 *item; } Node_82FB4C28;
struct Obj_82FB4C28 { char pad0[0x3c]; char sub[0x14]; Node_82FB4C28 *head; char pad1[0xc]; unsigned count; char pad2[0x10]; unsigned char flag; };
extern void fn_82FA9050(void);
extern void fn_82FA9208(void *);
extern void fn_8300CA08(void *);
static void Rel(void **r) { void *p = *r; *r = 0; if (p != 0) fn_82FA9208(p); }
void fn_82FB4C28(Obj_82FB4C28 *o)
{
  fn_82FA9050();
  if (o->count > 0) {
    Node_82FB4C28 *n;
    for (n = o->head; n != 0; n = n->next) {
      Item_82FB4C28 *it = n->item;
it->b = 0; it->flags &= 0x7fffffff; Rel(&it->h);
    }
  }
  fn_8300CA08(o->sub);
  if (o->flag != 0) {
    o->flag = 0;
    fn_82FA9208((char *)o - 4);
  }
}