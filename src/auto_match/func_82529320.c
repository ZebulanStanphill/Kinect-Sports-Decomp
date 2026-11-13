typedef struct Item_82529320 { char pad[0xb1c]; unsigned x; unsigned fl; } Item_82529320;
typedef struct Link_82529320 { char pad[4]; struct Link_82529320 *next; int obj; } Link_82529320;
typedef struct Owner_82529320 { char pad[0x48]; Link_82529320 *head; char pad2[0xb20 - 0x4c]; unsigned fl; } Owner_82529320;
extern void fn_825293A8(void *);
extern void fn_82529488(void *, int, void *);

void fn_82529320(Owner_82529320 *p, int flag)
{
  Link_82529320 *n;
  Link_82529320 *cur;
  Item_82529320 *it;

  n = p->head;
  while (n != 0) {
    cur = n;
    if (cur->obj != 0) {
      fn_82529488((void *)cur->obj, flag, p);
    }
    it = (Item_82529320 *)((char *)cur - 0x40);
    n = cur->next;
    if (flag == 0 || ((p->fl & it->fl) != 0 && (it->x != 0 || it->fl == 0))) {
      fn_825293A8(it);
    }
  }
  fn_825293A8(p);
}
