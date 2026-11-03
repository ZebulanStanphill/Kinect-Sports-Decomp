extern int fn_8268CF60(void *, int);
extern unsigned char fn_82695468(void *, int);
extern int fn_826954C0(void *, const char *, int, int);
extern int fn_826957D0(void *, int);
extern int fn_82696958(int, int);
extern int fn_82741A50(void *, int, int);
extern int fn_82741C18(int, int, void *);

typedef struct VT_82742240 { void *f0; void *f4; int (*f8)(void *); } VT_82742240;
typedef struct Sub_82742240 { VT_82742240 *vt; } Sub_82742240;
typedef struct Obj_82742240 { char pad[8]; unsigned f8; char pad2[0xc]; int f18; int f1c; } Obj_82742240;

void fn_82742240(Obj_82742240 *p)
{
  unsigned q;
  int o;
  char b0[32];
  char b1[32];
  int s;
  if (fn_82695468(p, 0xf) == 0) {
    fn_826954C0(p, "Matrix", 0, 0);
  } else {
    q = p->f8 != 0 ? p->f8 - 0x10 : 0;
    if (q != 0 && p->f1c > 0) {
      s = p->f18;
      o = fn_82696958(fn_826957D0(p, 0), s);
      if (((Sub_82742240 *)(o + 0x10))->vt->f8((void *)(o + 0x10)) == 0xf) {
        fn_82741A50(b1, q, p->f18);
        fn_8268CF60(b1, fn_82741A50(b0, o, p->f18));
        fn_82741C18(q, p->f18, b1);
      }
    }
  }
}
