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
extern void fn_826959C8(void *);
extern void *fn_826A7398(int);
extern void *fn_826957D0(void *, int);
extern double fn_826972E0(void *, int);
extern void fn_82681898(void *, double);

typedef struct { int pad[3]; unsigned int f0c; int rest[5]; } Ent_82720A88;
typedef struct VT_82720A88 { int pad[0xd0 / 4]; unsigned int (*fd0)(void *); } VT_82720A88;
typedef struct Mgr_82720A88 {
  VT_82720A88 *vt;
  int pad[0x944 / 4 - 1];
  Ent_82720A88 ents[4];
} Mgr_82720A88;
typedef struct Obj_82720A88 {
  int pad0;
  unsigned char *p4;
  int pad8[4];
  int f18;
  int f1c;
} Obj_82720A88;

void fn_82720A88(Obj_82720A88 *o)
{
  unsigned char *p = o->p4;
  Mgr_82720A88 *m;
  unsigned int n;
  Ent_82720A88 *e;

  fn_826959C8(p);
  *p = 0;
  m = (Mgr_82720A88 *)fn_826A7398(o->f18);
  n = 0;
  if (o->f1c > 0) {
    int k = o->f18;
    n = (int)fn_826972E0(fn_826957D0(o, 0), k);
  }
  if (n < m->vt->fd0(m)) {
    if (n >= 4) {
      e = 0;
    } else {
      e = &m->ents[n];
    }
    fn_82681898(o->p4, (double)e->f0c);
  }
}
