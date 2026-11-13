struct Obj;
typedef struct VT { void *f0, *f1, *f2, *f3, *f4, *f5; int (*f6)(struct Obj *, char *, int); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct Ent { Obj *obj; int b; int c; int d; } Ent;
typedef struct S { char pad[0x18]; Ent *ents; int count; } S;

int fn_82D3DC18(S *s, char *name)
{
  int i;
  if (*name != 0 && s->count > 0xfc) {
    return -1;
  }
  if (s->count >= 0xfff) {
    return -1;
  }
  for (i = 0; i < s->count; i++) {
    Ent *e = s->ents + i;
    e->c = e->obj->vt->f6(e->obj, name, 0x100);
    s->ents[i].d = s->count;
    if (s->ents[i].c == -1) return -1;
  }
  return 0x70;
}
