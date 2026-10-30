typedef struct { int a; int b; int c; } Node_827E3D60;
typedef struct { int pad; int head; } Owner_827E3D60;
extern void *fn_8265C9E0(unsigned);
extern void fn_827E40D0(void *, int, void *);

static Node_827E3D60 *Node_init(Node_827E3D60 *n)
{
  n->b = 0;
  n->c = 0;
  return n;
}

int fn_827E3D60(Owner_827E3D60 *self, Node_827E3D60 **out)
{
  Node_827E3D60 *mem = (Node_827E3D60 *)fn_8265C9E0(0x28);
  Node_827E3D60 *n = mem ? Node_init(mem) : 0;
  *out = n;
  fn_827E40D0(&self->head, self->head, out);
  return 0;
}
