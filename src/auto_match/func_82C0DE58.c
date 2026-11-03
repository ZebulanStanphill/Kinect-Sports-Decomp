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
typedef struct Self_82C0DE58 Self_82C0DE58;
typedef struct A_82C0DE58 A_82C0DE58;
typedef struct P_82C0DE58 P_82C0DE58;
typedef struct Q_82C0DE58 Q_82C0DE58;
typedef struct R_82C0DE58 R_82C0DE58;

typedef struct SelfVT_82C0DE58 {
  char pad0[0x60];
  int (*f60)(Self_82C0DE58 *);
  char pad64[0xa8 - 0x64];
  int (*fa8)(Self_82C0DE58 *);
  char padac[0xd0 - 0xac];
  int (*fd0)(Self_82C0DE58 *);
  char padd4[4];
  int (*fd8)(Self_82C0DE58 *);
  char paddc[0x104 - 0xdc];
  int (*f104)(Self_82C0DE58 *);
} SelfVT_82C0DE58;

struct Self_82C0DE58 {
  SelfVT_82C0DE58 *vt;
  char pad4[0x2c - 4];
  A_82C0DE58 *a;
  char pad30[0xf8 - 0x30];
  unsigned int limit;
  char padfc[0x10c - 0xfc];
  int h;
};

typedef struct AVT_82C0DE58 {
  char pad0[0x3c];
  int (*f3c)(A_82C0DE58 *, int, P_82C0DE58 **, int);
  char pad40[4];
  int (*f44)(A_82C0DE58 *, int, Q_82C0DE58 **, int);
  int (*f48)(A_82C0DE58 *, unsigned int *, unsigned int *);
} AVT_82C0DE58;
struct A_82C0DE58 {
  AVT_82C0DE58 *vt;
};

typedef struct PVT_82C0DE58 {
  char pad0[8];
  int (*f08)(P_82C0DE58 *);
  int (*f0c)(P_82C0DE58 *);
  char pad10[4];
  int (*f14)(P_82C0DE58 *);
  char pad18[0x48 - 0x18];
  int (*f48)(P_82C0DE58 *, R_82C0DE58 *);
  char pad4c[0x50 - 0x4c];
  int (*f50)(P_82C0DE58 *);
  char pad54[0x78 - 0x54];
  int (*f78)(P_82C0DE58 *, int, int *);
  char pad7c[0x88 - 0x7c];
  int (*f88)(P_82C0DE58 *, unsigned int, unsigned int);
} PVT_82C0DE58;
struct P_82C0DE58 {
  PVT_82C0DE58 *vt;
};

typedef struct QVT_82C0DE58 {
  char pad0[8];
  int (*f08)(Q_82C0DE58 *);
} QVT_82C0DE58;
struct Q_82C0DE58 {
  QVT_82C0DE58 *vt;
};

typedef struct RVT_82C0DE58 {
  char pad0[8];
  int (*f08)(R_82C0DE58 *);
  char pad0c[0x38 - 0xc];
  int (*f38)(R_82C0DE58 *, int);
  char pad3c[0x54 - 0x3c];
  int (*f54)(R_82C0DE58 *);
} RVT_82C0DE58;
struct R_82C0DE58 {
  RVT_82C0DE58 *vt;
};

typedef struct L_82C0DE58 {
  P_82C0DE58 *p;
  Q_82C0DE58 *q;
  unsigned int b;
  unsigned int a;
  unsigned int out;
} L_82C0DE58;

extern int fn_82A1E438(int);
extern unsigned int fn_82C0BD48(Q_82C0DE58 *);
extern R_82C0DE58 *fn_82C0BDA8(Q_82C0DE58 *);
extern int fn_82C0BEA8(Q_82C0DE58 *);

void fn_82C0DE58(Self_82C0DE58 *s)
{
  L_82C0DE58 L;
  R_82C0DE58 *r;
  int st;
  int res;
  PVT_82C0DE58 *pv;

  st = s->vt->f104(s);
  while ((st & 4) == 0) {
    s->a->vt->f3c(s->a, 0, &L.p, 0);
    if (L.p != 0) {
      s->a->vt->f44(s->a, 0, &L.q, 0);
      st = s->vt->f104(s);
      while ((st & 6) == 0) {
        L.p->vt->f0c(L.p);
        if (fn_82C0BD48(L.q) > s->limit) {
          r = fn_82C0BDA8(L.q);
          r->vt->f38(r, 1);
          s->a->vt->f48(s->a, &L.a, &L.b);
          L.p->vt->f88(L.p, L.a, L.b);
          L.p->vt->f48(L.p, r);
          pv = L.p->vt;
          res = pv->f78(L.p, r->vt->f54(r) - 8, (int *)&L.out);
          if (res < 0) {
            r->vt->f08(r);
            L.p->vt->f14(L.p);
            s->vt->f60(s);
            break;
          }
          r->vt->f08(r);
          fn_82C0BEA8(L.q);
          L.p->vt->f14(L.p);
          s->vt->fd0(s);
          if (L.out == 0) break;
        } else {
          L.p->vt->f14(L.p);
          s->vt->fa8(s);
        }
        st = s->vt->f104(s);
      }
      L.p->vt->f50(L.p);
      if (L.p != 0) {
        L.p->vt->f08(L.p);
        L.p = 0;
      }
      if (L.q != 0) {
        L.q->vt->f08(L.q);
        L.q = 0;
      }
    }
    st = s->vt->f104(s);
    if ((st & 4) != 0) break;
    s->vt->fd8(s);
    fn_82A1E438(s->h);
    st = s->vt->f104(s);
  }
  s->vt->fd8(s);
}
