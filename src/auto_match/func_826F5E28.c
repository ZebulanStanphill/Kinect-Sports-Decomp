typedef struct Obj Obj;
typedef void (*fn_t)();
typedef struct Owner Owner;
struct Owner {
  fn_t *vt;
};
struct Obj {
  fn_t *vt;
  char pad4[0x1c];
  Owner *owner;
  char pad24[0x54];
  Obj *next;
};

typedef struct {
  char pad[0xafc];
  Obj *head;
} Mgr;

extern void fn_8267C498(Obj *o);

void fn_826F5E28(Mgr *m)
{
  Obj *o;
  Obj *next;

  o = m->head;
  if (o != 0) {
    do {
      next = o->next;
      o->next = 0;
      o->vt[0x74 / 4](o);
      if (o->owner != 0) {
        o->owner->vt[0x7c / 4](o->owner, o);
      }
      fn_8267C498(o);
      o = next;
    } while (o != 0);
    m->head = 0;
  }
}
