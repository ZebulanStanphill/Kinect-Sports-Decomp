typedef struct Node_82891488 { struct Node_82891488 *left; int pad4[4]; struct Ent_82891488 *ent; } Node_82891488;
typedef struct { int pad[2]; Node_82891488 *head; } Cont_82891488;
typedef struct Sub_82891488 { char pad[0x26]; unsigned char flag; } Sub_82891488;
typedef struct Ent_82891488 { char pad[0x34]; struct { char pad[0x38]; Sub_82891488 *sub; } *p34; char pad2[0x5e - 0x38]; unsigned char f5e; } Ent_82891488;
typedef struct Obj_82891488 { struct { int f[3]; unsigned (*f0c)(struct Obj_82891488 *); } *vt; char pad[0x22]; unsigned char flag; } Obj_82891488;

extern Cont_82891488 *fn_828A12E8(int);
extern void fn_82897710(void *, Obj_82891488 *);
extern void fn_8288EC98(Ent_82891488 *, unsigned);
extern void fn_82248B90(Node_82891488 **);

static int ne(Node_82891488 *a, Node_82891488 *b) { if (a != b) return 1; return 0; }

void fn_82891488(int param_1, int param_2, Obj_82891488 *param_3)
{
  Node_82891488 *it;
  Node_82891488 *cur;
  Ent_82891488 *e;
  unsigned v;
  unsigned char c;

  it = fn_828A12E8(param_2)->head->left;
  cur = it;
  for (;;) {
    if (!ne(cur, fn_828A12E8(param_2)->head)) break;
    e = cur->ent;
    fn_82897710(*(void **)((char *)e + 0x34), param_3);
    if (param_3->flag == 0) {
      v = param_3->vt->f0c(param_3);
      if (e->p34 == 0 || e->p34->sub == 0) c = 0;
      else c = e->p34->sub->flag;
      if (c != 0 && e->f5e != 0) fn_8288EC98(e, v);
    }
    fn_82248B90(&it);
    cur = it;
  }
}
