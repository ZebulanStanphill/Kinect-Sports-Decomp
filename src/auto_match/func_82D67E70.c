typedef struct Pair { unsigned short x, y; } Pair;
typedef struct Set { Pair e[8]; unsigned char pad; unsigned char count; char pad2[0x1e]; char tail[4]; } Set;
typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void *s[5]; void (*f14)(Obj *, unsigned short, int); } ObjVt;
typedef struct Hdr { char a, b, flag; } Hdr;
char *fn_82D67E70(Hdr *h, Set *s, Obj *o, int a) {
  int i;
  for (i = 0; i < s->count; i++) {
    if (s->e[i].y != 0xffff) o->vt->f14(o, s->e[i].y, a);
  }
  s->count = 0;
  h->flag = 0;
  return s->tail;
}
