typedef struct { void **vt; } Obj_830249F0;
typedef struct {
  int a;
  int b;
  Obj_830249F0 *obj;
  int c;
  unsigned char flags;
  char pad[3];
} Ent_830249F0;
typedef struct {
  char pad0[0x1c];
  Ent_830249F0 e[1];
} Mgr_830249F0;
typedef void (*Fn1)(void *, void *);
typedef void (*Fn0)(void *);

void fn_830249F0(char *p, int i)
{
  if (*(int *)(p + 0x74) == 1) {
    Ent_830249F0 *e = (Ent_830249F0 *)(p + 0x1c) + i;
    if (e->obj != 0) {
      unsigned f = ((unsigned char *)p)[0x6c] | e->flags;
      if ((f & 0x80) == 0) {
        ((Fn1)e->obj->vt[4])(e->obj, p + 0x100);
      } else if ((f & 0x40) == 0) {
        ((Fn0)e->obj->vt[2])(e->obj);
      }
      e->flags = (e->flags >> 1 & 0x40) | (e->flags & 0xbf);
    }
  }
}
