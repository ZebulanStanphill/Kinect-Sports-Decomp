struct K_82C2A820;
struct O_82C2A820;
typedef struct O_82C2A820 { void *s[2]; int (*release)(struct O_82C2A820 *, struct K_82C2A820 *); } O_82C2A820;
typedef struct K_82C2A820 { char pad[8]; unsigned __int64 t; } K_82C2A820;
typedef struct N_82C2A820 { K_82C2A820 *key; struct N_82C2A820 *prev; struct N_82C2A820 *next; } N_82C2A820;
typedef struct L_82C2A820 {
  char pad0[0x10];
  N_82C2A820 *head;
  N_82C2A820 *first;
  unsigned count;
  char pad1[0x14];
  int x;
  O_82C2A820 *obj;
  char pad2[0x3c];
  int sz;
  int total;
} L_82C2A820;
typedef struct A_82C2A820 { char pad[0x2c]; L_82C2A820 *l; } A_82C2A820;
static __forceinline int notNull_82C2A820(void *p)
{
  if (p) return 1;
  return 0;
}
extern int fn_82C10B28(int, int, N_82C2A820 **);

int fn_82C2A820(A_82C2A820 *param_1, unsigned __int64 param_2)
{
  L_82C2A820 *l = param_1->l;
  int r = 0;
  N_82C2A820 *cur;
  N_82C2A820 *nxt;
  cur = 0;
  if (l->count == 0) {
    return r;
  } else {
    cur = l->first;
    if (cur != l->head) {
      while (notNull_82C2A820(cur) && cur->key->t < param_2) {
        nxt = cur->next;
        r = l->obj->release(l->obj, cur->key);
        if (r < 0) return r;
        l->total = l->total - l->sz;
        cur->next->prev = cur->prev;
        if (cur->prev != 0) {
          cur->prev->next = cur->next;
        } else {
          l->first = cur->next;
        }
        if (--l->count == 0) {
          l->head->prev = 0;
          l->first = 0;
        }
        r = fn_82C10B28(l->x, 0x1f, &cur);
        if (r < 0) return r;
        cur = nxt;
        if (nxt == l->head) return r;
      }
    }
  }
  return r;
}
