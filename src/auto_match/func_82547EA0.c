extern int strcmp(const char *, const char *);
extern char lbl_821C4BF8[];
typedef struct Ent_82547EA0 { char name[0x14]; void *f14; } Ent_82547EA0;
typedef struct Res_82547EA0 { int a; unsigned magic; } Res_82547EA0;
extern Ent_82547EA0 *fn_827D5070(int);
extern void fn_82837BA0(int, void *);
extern void fn_82837D98(void *, int, Res_82547EA0 **);
extern void fn_822315A0(void *);
typedef struct Obj_82547EA0 { int a; void *b; } Obj_82547EA0;
void fn_82547EA0(Obj_82547EA0 *o)
{
  Ent_82547EA0 *e = fn_827D5070(o->a);
  Res_82547EA0 *r;
  if (strcmp(e->name, lbl_821C4BF8) == 0) {
    fn_82837BA0(0, e->f14);
    fn_82837D98(e->f14, 0, &r);
    r->magic = 0xf00b1ee5;
  }
  if (o->b != 0) fn_822315A0(o->b);
}
