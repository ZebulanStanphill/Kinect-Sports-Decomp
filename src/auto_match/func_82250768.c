extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
typedef struct Val_82250768 { char str[0x20]; void *rep; } Val_82250768;
typedef struct Node_82250768 { struct Node_82250768 *left, *parent, *right; Val_82250768 v; char pad[4]; char color, isnil; } Node_82250768;
static void vd(Val_82250768 *v) { if (v->rep != 0) fn_822315A0(v->rep); fn_82230300(v->str, 1, 0); }
void fn_82250768(void *param_1, Node_82250768 *root)
{
  Node_82250768 *p;
  for (p = root; !p->isnil; root = p) {
    fn_82250768(param_1, p->right);
    p = p->left;
    vd(&root->v);
    fn_8265CA20(root);
  }
}
