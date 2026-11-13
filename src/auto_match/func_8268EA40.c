typedef struct Link_8268EA40 {
  struct Link_8268EA40 *next;
  struct Link_8268EA40 *prev;
  char pad[0x1c];
  int count;
} Link_8268EA40;

typedef struct Sub_8268EA40 {
  int pad0;
  int pad4;
  int count;
} Sub_8268EA40;

typedef struct Obj_8268EA40 {
  char pad[0xc];
  Sub_8268EA40 sub;
} Obj_8268EA40;

extern void fn_8268E408(void *, void *, void *);
extern void fn_8268E490(void *, void *);
extern void fn_8268E5C8(void *, void *);

void fn_8268EA40(Obj_8268EA40 *o, char *x)
{
  Link_8268EA40 *n = *(Link_8268EA40 **)(x + 0x10);
  Sub_8268EA40 *s = &o->sub;
  Link_8268EA40 *nx;
  s->count = s->count - n->count;
  nx = n->next;
  if (nx != n) {
    Link_8268EA40 *pv = n->prev;
    pv->next = nx;
    nx->prev = pv;
    fn_8268E408(s, n, nx);
  } else {
    fn_8268E490(s, n);
  }
  fn_8268E5C8((char *)o + 0x10, n);
}
