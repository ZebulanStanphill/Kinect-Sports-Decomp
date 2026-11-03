typedef struct Obj_827171A8 Obj_827171A8;
struct Obj_827171A8 {
  struct {
    char pad0[0x38];
    int (*f38)(Obj_827171A8 *self);
    void (*f3c)(Obj_827171A8 *self);
  } *vt;
  char pad4[0x66 - 4];
  unsigned char flags;
  char pad67[0xa4 - 0x67];
  Obj_827171A8 **children;
  unsigned int count;
};

void fn_827171A8(Obj_827171A8 *o)
{
  unsigned char b = o->vt->f38(o) != 0;
  unsigned int i;
  Obj_827171A8 *c;
  unsigned char on;

  if ((o->flags & 1) != 0 || b == 0) {
    i = 0;
    if (o->count > 0) {
      do {
        c = o->children[i];
        if (c != 0) {
          on = (o->flags & 1) != 0 || b != 0;
          if (on != 0) {
            c->flags = c->flags | 1;
          } else {
            c->flags = c->flags & 0xfe;
          }
          c->vt->f3c(c);
        }
        i = i + 1;
      } while (i < o->count);
    }
  }
}
