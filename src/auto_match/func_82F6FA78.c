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
extern void fn_82F641F8(void *);
extern char lbl_8216A9E0[];

typedef struct Obj_82F6FA78 {
  char pad0[0x24];
  void *f24;
  char pad28[4];
  void *f2c;
  char pad30[4];
  void *f34;
  char pad38[4];
  void *f3c;
  void *f40;
  void *f44;
  void *f48;
  char pad4c[0x10];
  void *f5c;
} Obj_82F6FA78;

void fn_82F6FA78(Obj_82F6FA78 *p)
{
  if (p != 0) {
    if (p->f24 != 0) fn_82F641F8(p->f24);
    if (p->f2c != 0) fn_82F641F8(p->f2c);
    if (p->f34 != 0) fn_82F641F8(p->f34);
    if (p->f3c != 0) fn_82F641F8(p->f3c);
    if (p->f40 != 0) fn_82F641F8(p->f40);
    if (p->f44 != 0) fn_82F641F8(p->f44);
    if (p->f48 != 0) fn_82F641F8(p->f48);
    if (p->f5c != lbl_8216A9E0) fn_82F641F8(p->f5c);
    fn_82F641F8(p);
  }
}
