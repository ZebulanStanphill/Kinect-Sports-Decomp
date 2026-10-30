typedef struct Rec_82537B80 { char pad0[0x10]; unsigned id; char pad1[4]; unsigned char kind; char pad2[7]; unsigned code; int value; } Rec_82537B80;
typedef struct List_82537B80 { unsigned n; Rec_82537B80 *rec; } List_82537B80;
typedef struct Obj_82537B80 { char pad0[0x1c]; unsigned err; List_82537B80 *list; } Obj_82537B80;
extern unsigned fn_82A1E740(Obj_82537B80 *, int, int);
int fn_82537B80(Obj_82537B80 *o)
{
  if (o->list != 0) {
    unsigned char ok;
    do {
      if (o->list == 0) {
        ok = 1;
      } else {
        unsigned r = fn_82A1E740(o, 0, 1);
        if (r == 0x3e4) {
          ok = 0;
        } else {
          o->err = r;
          ok = 1;
        }
      }
    } while (!ok);
    if (o->err == 0 && o->list->n > 0) {
      Rec_82537B80 *r = o->list->rec;
      if (r->id == 0x63e80044 && r->kind == 6 && r->code == 1000)
        return r->value;
    }
  }
  return 0;
}
