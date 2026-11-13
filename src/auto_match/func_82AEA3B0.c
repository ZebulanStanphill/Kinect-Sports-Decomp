extern void fn_82AC8CE8(unsigned int *, unsigned int);
extern void fn_82AE9DE0(unsigned int *, unsigned int);

typedef struct Link_82AEA3B0 {
  unsigned int prev;
  unsigned int next;
} Link_82AEA3B0;
#define LINK_82AEA3B0(n) ((Link_82AEA3B0 *)(((n) & ~1u) + 0x24))

void fn_82AEA3B0(unsigned int *param_1, unsigned int param_2)
{
  unsigned int a = *param_1;
  Link_82AEA3B0 *x;
  Link_82AEA3B0 *y;

  param_1 = param_1 + 1;
  fn_82AE9DE0(param_1, a);
  fn_82AC8CE8(param_1, param_2);
  fn_82AC8CE8(param_1, a);
  x = LINK_82AEA3B0(a);
  y = LINK_82AEA3B0(param_2);
  y->next = x->next;
  LINK_82AEA3B0(x->next)->prev = (unsigned int)&y->next;
  y->prev = (unsigned int)&x->next;
  x->next = (unsigned int)y - 0x24;
}
