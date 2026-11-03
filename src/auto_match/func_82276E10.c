typedef struct Node_82276E10 {
  void *vt;
  int w;
  int s;
  int pad;
  int obj[1];
} Node_82276E10;

typedef struct Out_82276E10 {
  int *obj;
  Node_82276E10 *node;
} Out_82276E10;

typedef struct Cfg_82276E10 {
  char pad[0x24];
  int f24;
  int f28;
} Cfg_82276E10;

extern void fn_82276818(int *, void *, int, int);
extern void fn_822766D0(int *, void *, int);
extern void fn_82276590(int *, void *, int);
extern void fn_822762E8(int *, void *, int, int);
extern void fn_82356F98(void);
extern void fn_82520158(const char *, void *, int);
extern void *fn_8265C9E0(unsigned);
extern int lbl_821A8D8C[];

Out_82276E10 *fn_82276E10(Out_82276E10 *out, Cfg_82276E10 *cfg)
{
  char buf[8];
  Node_82276E10 *node;
  void *mem;
  int a;
  switch (*(unsigned *)(*(int *)((char *)cfg + 0x24) + 4)) {
  case 0:
    fn_82520158("credits_menu_normal", buf, 0);
    a = cfg->f24;
    node = (Node_82276E10 *)fn_8265C9E0(0x148);
    if (node != 0) {
      node->w = 1;
      node->vt = lbl_821A8D8C;
      node->s = 1;
      if (node->obj != 0)
        fn_822762E8(node->obj, buf, a, cfg->f28);
    } else
      node = 0;
    break;
  case 1:
    fn_82520158("credits_menu_twocol", buf, 0);
    a = cfg->f24;
    node = (Node_82276E10 *)fn_8265C9E0(0x140);
    if (node != 0) {
      node->w = 1;
      node->vt = lbl_821A8D8C;
      node->s = 1;
      if (node->obj != 0)
        fn_82276590(node->obj, buf, a);
    } else
      node = 0;
    break;
  case 2:
    fn_82520158("credits_menu_bigtext", buf, 0);
    a = cfg->f24;
    node = (Node_82276E10 *)fn_8265C9E0(0x140);
    if (node != 0) {
      node->w = 1;
      node->vt = lbl_821A8D8C;
      node->s = 1;
      if (node->obj != 0)
        fn_822766D0(node->obj, buf, a);
    } else
      node = 0;
    break;
  case 3:
    fn_82520158("credits_menu_image", buf, 0);
    a = cfg->f24;
    node = (Node_82276E10 *)fn_8265C9E0(0x148);
    if (node != 0) {
      node->w = 1;
      node->vt = lbl_821A8D8C;
      node->s = 1;
      if (node->obj != 0)
        fn_82276818(node->obj, buf, a, cfg->f28);
    } else
      node = 0;
    break;
  default:
    fn_82356F98();
    return out;
  }
  out->node = node;
  out->obj = node->obj;
  return out;
}
