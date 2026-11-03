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
typedef struct Obj_822F9398 Obj_822F9398;
typedef struct VT_822F9398 {
  int pad[15];
  unsigned int (*f3c)(Obj_822F9398 *);
} VT_822F9398;
struct Obj_822F9398 {
  VT_822F9398 *vt;
};

typedef struct Ent_822F9398 {
  char pad0[0x178];
  float f178;
  char pad17c[8];
  int f184;
  char pad188[4];
  int f18c;
  char pad190[0x10];
  int f1a0;
} Ent_822F9398;

typedef struct Mid_822F9398 {
  char pad0[0x1e4];
  Ent_822F9398 *ent;
  char pad1e8[0xf8];
  Obj_822F9398 *obj;
} Mid_822F9398;

typedef struct Cfg_822F9398 {
  char pad0[0x14];
  float f14;
  float f18;
  float f1c;
  float f20;
} Cfg_822F9398;

typedef struct Top_822F9398 {
  int f0;
  Mid_822F9398 *mid;
  int f8;
  Cfg_822F9398 *cfg;
} Top_822F9398;

double fn_822F9398(Top_822F9398 *p)
{
  Ent_822F9398 *e;
  float r;
  float a;

  e = p->mid->ent;
  if (p->mid->obj->vt->f3c(p->mid->obj) == 0) {
    r = p->cfg->f14;
  } else if (e->f184 != 0) {
    r = p->cfg->f1c;
  } else if (e->f1a0 == 0 || e->f18c == 0) {
    a = p->cfg->f1c;
    r = (p->cfg->f20 - a) * e->f178 + a;
  } else {
    r = p->cfg->f18;
  }
  return r;
}
