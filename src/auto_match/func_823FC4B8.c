typedef struct SP_823FC4B8 { unsigned int first; unsigned int second; } SP;
extern int fn_8223AAC0(unsigned int);
extern SP *fn_82365BD8(SP *, SP *);
extern void fn_823FD420(void *, SP *, SP *, SP *, SP *);
extern char lbl_821AD588[];
typedef struct Obj_823FC4B8 { void *vt; int f4; int f8; char sub[1]; } Obj;
Obj * fn_823FC4B8(Obj *o, SP *a, SP *b, SP *c, SP *d)
{
  o->f4 = 1;
  o->vt = lbl_821AD588;
  o->f8 = 1;
  if (o->sub != 0) {
    struct { SP p, t58, t60, t68; } L;
    unsigned int rc = c->second;
    unsigned int ptr = c->first;
    L.p.first = 0;
    L.p.second = 0;
    if (rc != 0 && (unsigned char)fn_8223AAC0(rc) != 0) {
      L.p.second = rc;
      L.p.first = ptr;
    }
    fn_823FD420(o->sub, fn_82365BD8(&L.t68, a), fn_82365BD8(&L.t60, b), &L.p, fn_82365BD8(&L.t58, d));
  }
  return o;
}
