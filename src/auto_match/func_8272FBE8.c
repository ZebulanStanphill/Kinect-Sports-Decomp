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
struct Obj_8272FBE8;
typedef struct VT_8272FBE8 {
  void *s[16];
  int (*f40)(struct Obj_8272FBE8 *);
} VT_8272FBE8;

typedef struct Obj_8272FBE8 {
  VT_8272FBE8 *vt;
  char pad[0x88];
  struct {
    unsigned a : 14;
    unsigned f : 2;
    unsigned b : 16;
  } w8c;
  char pad90[0xc8 - 0x90];
  unsigned short flags;
} Obj_8272FBE8;

extern void fn_8272F9D8(Obj_8272FBE8 *, int);

void fn_8272FBE8(Obj_8272FBE8 *o, unsigned char v)
{
  o->w8c.f = v;
  o->flags |= 0x4000;
  fn_8272F9D8(o, o->vt->f40(o));
}
