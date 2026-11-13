typedef struct Node Node;
struct Node {
  char pad0[0x14];
  unsigned int f14;
  char pad18[0x10];
  Node **children;
  int count;
};
extern int fn_82CFBC28(const char *a, unsigned int b);
static __inline const char *GetName(Node *n) { return (const char *)(n->f14 & ~1); }

Node *fn_82E06158(Node *param_1,unsigned int param_2)

{
  int i;
  Node *child;
  Node *r;
  
  if (param_2 != 0) {
    for (i = 0; i < param_1->count; i++) {
      child = param_1->children[i];
      if (GetName(child) != 0 && fn_82CFBC28(GetName(child), param_2) == 0) {
        return child;
      }
      r = fn_82E06158(child,param_2);
      if (r != 0) {
        return r;
      }
    }
  }
  return 0;
}
