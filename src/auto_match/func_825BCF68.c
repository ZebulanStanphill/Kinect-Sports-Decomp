typedef struct Node_825BCF68 { struct Node_825BCF68 *next; int pad[2]; void *val; } Node_825BCF68;
typedef struct { int a; void *rc; } El_825BCF68;
typedef struct {
  void *vt;
  char pad04[0x40];
  void *rc44;
  int pad48;
  void *rc4c;
  int pad50;
  void *rc54;
  int pad58;
  char sub5c[4];
  Node_825BCF68 *head;
  char pad64[0x164];
  void *rc1c8;
  char pad1cc[0x18];
  void *f1e4;
  char pad1e8[0x34];
  El_825BCF68 *vbeg;
  El_825BCF68 *vend;
  El_825BCF68 *vcap;
} Obj_825BCF68;
extern void fn_822315A0(void *);
extern void fn_82522ED8(void *);
extern void fn_825BF428(void *);
extern void fn_8265CA20(void *);
extern void fn_827D9A90(void *);
extern char lbl_821C8D10[];

void fn_825BCF68(Obj_825BCF68 *o)
{
  Node_825BCF68 *n;
  El_825BCF68 *e;
  El_825BCF68 *end;
  o->vt = lbl_821C8D10;
  for (n = o->head->next; n != o->head; n = n->next)
    if (n->val != 0)
      fn_8265CA20(n->val);
  if (o->f1e4 != 0)
    fn_82522ED8(o->f1e4);
  if (o->vbeg != 0) {
    end = o->vend;
    for (e = o->vbeg; e != end; e++)
      if (e->rc != 0)
        fn_822315A0(e->rc);
    fn_8265CA20(o->vbeg);
  }
  {
    El_825BCF68 **pb = &o->vbeg;
    pb[1] = 0;
    pb[2] = 0;
    pb[0] = 0;
  }
  if (o->rc1c8 != 0)
    fn_822315A0(o->rc1c8);
  fn_825BF428(o->sub5c);
  if (o->rc54 != 0)
    fn_822315A0(o->rc54);
  if (o->rc4c != 0)
    fn_822315A0(o->rc4c);
  if (o->rc44 != 0)
    fn_822315A0(o->rc44);
  fn_827D9A90(o);
}
