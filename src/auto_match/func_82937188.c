extern void *fn_82930318(int);
extern void fn_82930358(void *);
extern char lbl_82031798[];
typedef struct { void *vt; int p4, p8; int next; int a; int b; } Node;
typedef struct { char pad[0x148]; Node *head; } Obj;
Node *fn_82937188(Obj *self, int b, int a)
{
  Node *mem, *p;
  mem = (Node *)fn_82930318(0x18);
  if (mem != 0) {
    fn_82930358(mem);
    mem->a = -1;
    mem->vt = lbl_82031798;
    mem->b = -1;
    p = mem;
  } else {
    p = 0;
  }
  p->a = a;
  p->b = b;
  p->next = self->head;
  self->head = p;
  return p;
}
