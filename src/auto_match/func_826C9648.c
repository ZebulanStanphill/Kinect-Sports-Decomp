struct Node_826C9648;
typedef struct NodeVt_826C9648 {
  int pad[9];
  struct Node_826C9648 *(*f24)(struct Node_826C9648 *, void *, void *, unsigned int);
} NodeVt_826C9648;
typedef struct Node_826C9648 {
  NodeVt_826C9648 *vt;
  int pad[5];
  unsigned int f18;
} Node_826C9648;
typedef struct Found_826C9648 {
  Node_826C9648 *obj;
  unsigned int val;
} Found_826C9648;
typedef struct Key_826C9648 {
  int v;
  int pad;
} Key_826C9648;
typedef struct Ref_826C9648 {
  int pad[3];
  int *first;
} Ref_826C9648;
typedef struct Item_826C9648 {
  int pad;
} Item_826C9648;
typedef struct Owner_826C9648 {
  int pad0[3];
  char sub[0x70];
  int f7c;
  int f80;
  int pad1[0xe];
  unsigned int fbc;
} Owner_826C9648;

extern void fn_826DCF88(Found_826C9648 *, int, Key_826C9648 *);
extern int fn_8269F500(Owner_826C9648 *);
extern void fn_826C8D00(void *, const char *, int, int);
extern void fn_826C7308(Owner_826C9648 *, void *, Node_826C9648 *, void *);
extern void fn_8267C498(Node_826C9648 *);

void fn_826C9648(Owner_826C9648 *o, char *item, void *arg)
{
  Key_826C9648 key;
  Found_826C9648 found;
  int ref;
  unsigned int id;
  Node_826C9648 *n;
  key.v = *(int *)(item + 0x44);
  fn_826DCF88(&found, o->f7c, &key);
  if (found.obj == 0) {
    id = *(unsigned short *)(item + 0x46);
    ref = o->f80 ? o->f80 : fn_8269F500(o);
    fn_826C8D00(o->sub - 0, "%s, Sprite::ReplaceDisplayObject(): unknown cid = %d\n", **(int **)(ref + 0xc), id);
  } else {
    key.v = *(int *)(item + 0x44);
    n = found.obj->vt->f24(found.obj, o, &key, found.val);
    fn_826C7308(o, item, n, arg);
    n->f18 = o->fbc;
    fn_8267C498(n);
  }
}
