typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct Rc_8270FBD8 {
  int a, b;
  int refs;
} Rc_8270FBD8;
typedef struct Sb_8270FBD8 {
  const char *str;
  int len;
  char pad[0x18];
} Sb_8270FBD8;
typedef struct Ent_8270FBD8 {
  int pad[2];
  int v0;
  int v1;
  int v2;
  int v3;
  int *p30;
} Ent_8270FBD8;
typedef struct Obj_8270FBD8 {
  int pad0;
  int f4;
  unsigned f8;
  int padc[3];
  int f18;
  int f1c;
} Obj_8270FBD8;

extern void fn_82681838(int, Rc_8270FBD8 **);
extern void fn_8268AFD8(Sb_8270FBD8 *);
extern void fn_8268B1F0(Sb_8270FBD8 *, int, int);
extern void fn_8268C4C0(Sb_8270FBD8 *, int, int, int);
extern void fn_826944C8(Rc_8270FBD8 *);
extern Rc_8270FBD8 *fn_82694610(int, const char *, int);
extern unsigned char fn_82695468(Obj_8270FBD8 *, int);
extern void fn_826954C0(Obj_8270FBD8 *, const char *, int, int);
extern int fn_826957D0(Obj_8270FBD8 *, int);
extern void fn_82696D38(int **, int, int, int, int);
extern int lbl_831E7E64;
extern char lbl_82005EA4[];
extern char lbl_82196582[];

void fn_8270FBD8(Obj_8270FBD8 *p)
{
  int *ent;
  int *q;
  int *rr;
  int h;
  int hd;
  int *ref;
  Rc_8270FBD8 *r;
  Rc_8270FBD8 *tmp;
  Sb_8270FBD8 sb;
  int i;
  const char *s;

  if (fn_82695468(p, 8) == 0) {
    fn_826954C0(p, lbl_82005EA4, 0, 0);
  } else {
    ent = p->f8 != 0 ? (int *)(p->f8 - 0x10) : 0;
    q = (int *)ent[0xc];
    fn_8268C4C0(&sb, q[0], q[4], lbl_831E7E64);
    i = 0;
    if (p->f1c > 0) {
      do {
        h = p->f18;
        hd = fn_826957D0(p, i);
        fn_82696D38(&ref, hd, h, -1, 0);
        fn_8268B1F0(&sb, *ref, -1);
        rr = ref;
        if (--rr[2] == 0) {
          fn_826944C8((Rc_8270FBD8 *)rr);
        }
        i++;
      } while (i < p->f1c);
    }
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
}
