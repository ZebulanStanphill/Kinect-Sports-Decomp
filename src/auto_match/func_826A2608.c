typedef struct Rc_826A2608 {
  int a, b;
  int refs;
} Rc_826A2608;
typedef struct Sb_826A2608 {
  const char *str;
  int len;
  char pad[0x18];
} Sb_826A2608;
typedef struct Obj_826A2608 {
  int pad0;
  int f4;
  unsigned f8;
  int padc[3];
  int f18;
  int f1c;
} Obj_826A2608;

extern void fn_82681838(int, void *);
extern void fn_8268AFB0(Sb_826A2608 *, int);
extern void fn_8268AFD8(Sb_826A2608 *);
extern void fn_826944C8(Rc_826A2608 *);
extern Rc_826A2608 *fn_82694610(int, const char *, int);
extern unsigned char fn_82695468(Obj_826A2608 *, int);
extern void fn_826954C0(Obj_826A2608 *, const char *, int, int);
extern void fn_826A1E40(int *, int, Sb_826A2608 *, const char *);
extern unsigned char fn_826A25C0(int *);
extern char lbl_82196FAC[];
extern char lbl_82196582[];

void fn_826A2608(Obj_826A2608 *p)
{
  int *ent;
  int m;
  Rc_826A2608 *r;
  Rc_826A2608 *tmp;
  Sb_826A2608 sb;
  const char *s;

  if (fn_82695468(p, 7) == 0) {
    fn_826954C0(p, "Array", 0, 0);
  } else {
    ent = p->f8 != 0 ? (int *)(p->f8 - 0x10) : 0;
    ent[0x11]++;
    if (fn_826A25C0(ent) != 0) {
      m = *(int *)(p->f18 + 0x78);
      fn_82681838(p->f4, (void *)(m + 8));
    } else {
      m = *(int *)(p->f18 + 0x78);
      fn_8268AFB0(&sb, *(int *)(m + 0x288));
      fn_826A1E40(ent, p->f18, &sb, lbl_82196FAC);
      s = sb.str;
      if (s == 0) {
        s = lbl_82196582;
      }
      r = fn_82694610(*(int *)(p->f18 + 0x78) + 0x254, s, sb.len);
      { int c = r->refs; tmp = r; r->refs = c + 1; }
      fn_82681838(p->f4, &tmp);
      if (--r->refs == 0) {
        fn_826944C8(r);
      }
      fn_8268AFD8(&sb);
    }
    ent[0x11]--;
  }
}
