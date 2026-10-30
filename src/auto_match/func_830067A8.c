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
typedef struct Vt_830067A8 { char pad[0x5c]; void (*f5c)(void *, void *); } Vt_830067A8;
typedef struct Ent_830067A8 {
  int f0, f4, f8, fc, f10;
  unsigned char f14; char p15[3];
  int f18, f1c;
  unsigned char f20; char p21[3];
  int f24, f28;
  unsigned char f2c; char p2d[3];
  int f30, f34;
  unsigned char f38; char p39[3];
  unsigned char f3c; char p3d[3];
} Ent_830067A8;
typedef struct Obj_830067A8 {
  Vt_830067A8 *vt; int f4, f8, fc, f10, f14, f18, f1c, f20, f24;
  Ent_830067A8 *tab;
  char p2c[0x12]; unsigned char f3e;
} Obj_830067A8;
extern Ent_830067A8 *fn_82FA5060(int, int);
extern void fn_83006528(Obj_830067A8 *, int, int, int, int);
extern Ent_830067A8 *fn_83008038(Ent_830067A8 *);
extern int fn_830195D8(void *, unsigned, unsigned, int);
extern int lbl_831BC768;

int fn_830067A8(Obj_830067A8 *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, unsigned param_8, unsigned param_9)
{
  Ent_830067A8 *e;
  int r;
  if (param_1->tab == 0) {
    e = fn_82FA5060(lbl_831BC768, 0x40);
    param_1->tab = e;
    if (e != 0) {
      e->f0 = 0; e->f4 = 0; e->f8 = 0; e->fc = -1; e->f10 = 0; e->f14 = 0;
      e->f18 = -1; e->f1c = 0; e->f20 = 0;
      e->f24 = -1; e->f28 = 0; e->f2c = 0;
      e->f30 = -1; e->f34 = 0; e->f38 = 0; e->f3c = 0;
    }
    if (param_1->tab == 0) {
      return 0x34;
    }
  }
  r = 1;
  fn_83006528(param_1, param_2, param_3, param_5, param_6);
  e = fn_83008038(param_1->tab);
  if (e != 0) {
    e->f0 = param_2;
    e->f4 = param_3;
    e->fc = param_5;
    e->f10 = param_6;
    e->f8 = param_4;
    if (param_8 != 0 && param_9 != 0) {
      r = fn_830195D8(&e->f14, param_8, param_9, param_7);
    }
    if ((param_1->f3e & 0x80) != 0 || param_1->f10 == 0) {
      param_1->vt->f5c(param_1, e);
    }
  } else {
    r = 2;
  }
  return r;
}
