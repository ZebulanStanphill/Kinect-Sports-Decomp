typedef struct Node_func_82AF6538 {
  unsigned *item;
  struct Node_func_82AF6538 *next;
} Node_func_82AF6538;

typedef struct {
  char pad[0x14];
  Node_func_82AF6538 *list;
} Owner_func_82AF6538;

typedef struct {
  unsigned *owner;
  unsigned flag;
} Ref_func_82AF6538;

extern void *fn_82ABE250(void *, int, int);
extern unsigned char fn_82AF5350(void *, unsigned *, void *);
extern void fn_82AF53F0(void *, unsigned *);

void fn_82AF6538(void *a, unsigned *p, char *o, int n)
{
  Ref_func_82AF6538 *r;
  Owner_func_82AF6538 *ow;
  Node_func_82AF6538 *node;
  unsigned char ok;

  p[2] = p[2] | 0x4000;
  *p = (*p & 0xe0001fff) | (((*p & 0xffffe000) + n * 0x2000) & 0x1fffe000);
  r = *(Ref_func_82AF6538 **)(o + 0x20);
  if (r != 0 && r->flag == 0) {
    ow = (Owner_func_82AF6538 *)r->owner;
    if ((((unsigned *)ow)[2] & 0x2000) != 0) {
      ok = fn_82AF5350(a, p, ow);
      fn_82AF53F0(a, p);
      if (ok == 0) {
        node = (Node_func_82AF6538 *)fn_82ABE250(a, 8, 0x31);
        node->item = p;
        node->next = ow->list;
        ow->list = node;
      }
    }
  }
}
