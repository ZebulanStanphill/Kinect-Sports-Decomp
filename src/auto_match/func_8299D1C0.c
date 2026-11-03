typedef struct Node_8299D1C0 {
  char pad0[0x14]; unsigned count; unsigned *idx; char pad1[0xc]; unsigned kind;
} Node_8299D1C0;
typedef struct Root_8299D1C0 {
  char pad0[0x18]; struct Node_8299D1C0 **nodes;
} Root_8299D1C0;
int fn_8299D1C0(Root_8299D1C0 *r, Node_8299D1C0 *n)
{
  unsigned i;
  unsigned *ix;
  if (n->kind != 1) return 1;
  for (i = 0; i < n->count; i++) { ix = n->idx; if (fn_8299D1C0(r, r->nodes[ix[i]]) != 0) return 1; }
  return 0;
}
