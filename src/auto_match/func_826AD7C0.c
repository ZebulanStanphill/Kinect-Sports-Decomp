typedef struct Big_826AD7C0 { char pad[0x288]; int v288; } Big_826AD7C0;
typedef struct Sub_826AD7C0 { Big_826AD7C0 *big; } Sub_826AD7C0;
typedef struct Owner_826AD7C0 { char pad[0x78]; Sub_826AD7C0 sub; } Owner_826AD7C0;
typedef struct Vt_826AD7C0 { void *slot[23]; Owner_826AD7C0 *(*getOwner)(void *self); } Vt_826AD7C0;
typedef struct Obj_826AD7C0 { Vt_826AD7C0 *vt; } Obj_826AD7C0;
typedef struct Str_826AD7C0 { int a; int b; char *str; unsigned int len; } Str_826AD7C0;
typedef struct Self_826AD7C0 { int a; int s; } Self_826AD7C0;
extern void *fn_8267B890();
extern void *fn_826AA930();
extern void fn_826C7030();
extern void fn_8267C498();

void fn_826AD7C0(Self_826AD7C0 *self, Obj_826AD7C0 *obj)
{
  int si = self->s;
  if (si != 0) {
    Str_826AD7C0 *s = (Str_826AD7C0 *)si;
    unsigned char empty;
    if (s->len < 1 || *s->str == 0) {
      empty = 1;
    } else {
      empty = 0;
    }
    if (!empty) {
      Owner_826AD7C0 *ow = obj->vt->getOwner(obj);
      void *mem = fn_8267B890(ow->sub.big->v288, 0x20, 0);
      void *r;
      if (mem != 0) {
        r = fn_826AA930(mem, &ow->sub, (void *)self->s);
      } else {
        r = 0;
      }
      fn_826C7030(obj, r, 2);
      if (r != 0) {
        fn_8267C498(r);
      }
    }
  }
}
