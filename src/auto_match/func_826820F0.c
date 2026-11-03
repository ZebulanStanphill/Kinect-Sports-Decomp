typedef struct Obj_826820F0 Obj_826820F0;
struct Obj_826820F0 {
  struct {
    void (*f0)(Obj_826820F0 *self, int arg);
  } *vt;
  Obj_826820F0 *next;
  unsigned int flags;
};

unsigned int fn_826820F0(Obj_826820F0 *o)
{
  unsigned int f = o->flags;
  Obj_826820F0 *head;

  if ((f & 0x70000000) == 0x20000000 && (unsigned char)(f >> 31) == 0) {
    o->flags = f & 0x8fffffff;
    o->vt->f0(o, 3);
    head = o->next;
    if ((o->flags & 0x70000000) != 0x40000000) {
      o->next = *(Obj_826820F0 **)((char *)head + 0x14);
      *(Obj_826820F0 **)((char *)head + 0x14) = o;
      o->flags = (o->flags & 0x8fffffff) | 0x40000000;
    }
    return 1;
  }
  return 0;
}
