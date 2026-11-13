typedef struct VT_83008CA8 { int pad[0x26]; void (*f98)(void *, int); } VT_83008CA8;
typedef struct I_83008CA8 { VT_83008CA8 *vt; } I_83008CA8;
typedef struct S_83008CA8 { int pad[1]; I_83008CA8 *f4; } S_83008CA8;
typedef struct O_83008CA8 { int pad[5]; I_83008CA8 *f14; unsigned short pad2; unsigned short f1a; int pad3[0x44/4-7]; S_83008CA8 *f44; } O_83008CA8;
void fn_83008CA8(O_83008CA8 *o)
{
  I_83008CA8 *p = o->f14;
  o->f1a = o->f1a - 1;
  if (p != 0) p->vt->f98(p, 3);
  if (o->f44 != 0 && o->f44->f4 != 0) {
    o->f44->f4->vt->f98(o->f44->f4, 3);
  }
}
