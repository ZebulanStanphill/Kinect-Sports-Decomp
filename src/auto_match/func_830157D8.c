typedef struct Obj_830157D8 { int pad; char sub[1]; } Obj_830157D8;
typedef struct Ent_830157D8 { char pad[0x20]; char flag; } Ent_830157D8;
extern Ent_830157D8 *fn_82FFE0F0(void *, unsigned);
extern void fn_82FEC6E0(int, int);

int fn_830157D8(Obj_830157D8 *p, unsigned a, int b)
{
  Ent_830157D8 *e = fn_82FFE0F0(p->sub, a);
  if (e != 0) {
    e->flag = (char)b;
    fn_82FEC6E0(a, b);
    return 1;
  }
  return 2;
}
