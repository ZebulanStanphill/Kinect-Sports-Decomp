extern int fn_8224EFC8();
extern unsigned int *fn_8288DFB8();
extern int fn_828901B8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();

typedef struct { int a; int b; } S8;
typedef struct { S8 s; int id; } Val;
typedef struct { S8 h; S8 out; S8 a; S8 c; S8 d; Val b; int pad; Val e; } Frame;

void fn_828920B0(char *p1, char *p2)
{
  Frame f;
  char *src = p2 + 0x14;
  char *cont;
  char *node;
  Val *v;
  unsigned int *it;

  fn_828B5580(&f.a, src);
  fn_828B5580(&f.b.s, &f.a);
  f.b.id = (int)p2;
  node = (char *)fn_8224EFC8(p1 + 0x24);
  v = (Val *)(node + 0xc);
  if (v != 0) {
    fn_828B5580(&v->s, &f.b.s);
    v->id = f.b.id;
  }
  fn_828901B8(&f.out, p1 + 0x24, node, 0);
  fn_828B55B0(&f.b.s);
  fn_828B55B0(&f.a);
  fn_828B5580(&f.d, src);
  fn_828B5580(&f.e.s, &f.d);
  f.e.id = (int)p2;
  fn_828B5580(&f.c, src);
  f.h.a = fn_828B55F8(&f.c);
  cont = p1 + 0x24;
  if (f.h.a != 0x8000) {
    it = fn_8288DFB8(&f.out, p1 + 0x34, &f.h);
    cont = (char *)*it + 0x10;
  }
  node = (char *)fn_8224EFC8(cont);
  v = (Val *)(node + 0xc);
  if (v != 0) {
    fn_828B5580(&v->s, &f.e.s);
    v->id = f.e.id;
  }
  fn_828901B8(&f.h, cont, node, 0);
  fn_828B55B0(&f.c);
  fn_828B55B0(&f.e.s);
  fn_828B55B0(&f.d);
}
