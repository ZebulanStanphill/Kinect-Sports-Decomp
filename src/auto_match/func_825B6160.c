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
//BODY
typedef struct VO { struct { char pad[0x24]; int (*f24)(struct VO *); } *vt; } VO;
typedef struct { int pad; VO *o; } P;
typedef struct { char pad[0x20]; int f20; } R;
extern int fn_82817C98(int, int *);
extern int fn_828182C0(int, int, int, int *);

int fn_825B6160(P *p, int a)
{
  R *r;
  int ok;
  int u;
  int out;
  r = (R *)p->o->vt->f24(p->o);
  ok = fn_828182C0(r->f20, a, 0, &u);
  if (ok != 0) {
    fn_82817C98(u, &out);
    return out;
  }
  return -1;
}