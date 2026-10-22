typedef struct Obj Obj;
typedef void *(*fn_t)();
struct Obj {
  fn_t *vt;
};

typedef struct { char pad[0x108]; int count; } D;
typedef struct { char pad[0x20]; D *d; } C;
typedef struct { char pad[0xc]; C *c; } B;
typedef struct { char pad[0x1c]; B *b; } A;

typedef struct { int pad; int key; } P1;
typedef struct { char pad[0x1c]; int id; } P3;

extern A *fn_826D7568(int a, int b);
extern void fn_826C6F30(Obj *o, A *a);

void fn_826D7728(P1 *p1, Obj *o, P3 *p3, unsigned char check)
{
  A *a;
  int id;

  id = p3->id;
  a = fn_826D7568(id, p1->key);
  if (a != 0 && a->b->c->d->count > 0 &&
      (!check || a != o->vt[0x48 / 4](o))) {
    fn_826C6F30(o, a);
  }
}
