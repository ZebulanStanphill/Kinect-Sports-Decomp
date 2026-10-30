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
struct Obj_82675E20;
typedef struct VT_82675E20 {
  void *s[0x11];
  void (*f44)(struct Obj_82675E20 *);
} VT_82675E20;

typedef struct Res_82675E20 {
  char pad[0xd8];
  void *fd8;
} Res_82675E20;

typedef struct Obj_82675E20 {
  VT_82675E20 *vt;
  char pad4[0x18];
  Res_82675E20 *res;
  int a, b;
  int f28[5];
  int f3c[5];
  int f50;
} Obj_82675E20;

extern int fn_8267A0E0(int, int, int, int, int, void *);

int fn_82675E20(char *o, int a, int b, int mode, int n)
{
  Obj_82675E20 *p = (Obj_82675E20 *)o;
  if (p->res != 0 && p->res->fd8 != 0) {
    int r1, r2, r3, ra, rb;
    p->vt->f44(p);
    *(int *)(o + 0x20) = a;
    *(int *)(o + 0x24) = b;
    n = n + 1;
    r1 = fn_8267A0E0(a, b, n, 0, 0x4900002, o + 0x28);
    rb = b >> 1;
    ra = a >> 1;
    r1 |= fn_8267A0E0(ra, rb, n, 0, 0x4900002, o + 0x3c);
    r1 |= fn_8267A0E0(ra, rb, n, 0, 0x4900002, o + 0x48);
    r3 = r1;
    if (mode == 1) {
      *(char *)(o + 0x38) = 1;
      r3 |= fn_8267A0E0(a, b, n, 0, 0x4900002, o + 0x54);
    } else {
      *(char *)(o + 0x38) = 0;
    }
    if (r3 != 0) {
      p->vt->f44(p);
      return 0;
    }
    return 1;
  }
  return 0;
}
