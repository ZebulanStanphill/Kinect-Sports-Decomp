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
typedef struct Obj_82F3F3A0 {
  char pad0[0xc];
  void *f0c;
  char pad10[0x10];
  unsigned __int64 total;
  char pad28[0x20];
  void *p48, *p4c, *p50, *p54, *p58;
  unsigned short n5c, n5e, n60, n62, n64;
} Obj_82F3F3A0;

int fn_82F3F3A0(Obj_82F3F3A0 *o, unsigned __int64 *a, unsigned __int64 *b)
{
  unsigned __int64 t;
  if (o->f0c == 0) return 0xc00d36b6;
  t = 0x22;
  if (o->p48 != 0) t = (unsigned)o->n5c * 2 + t;
  if (o->p4c != 0) t = (unsigned)o->n5e * 2 + t;
  if (o->p50 != 0) t = (unsigned)o->n60 * 2 + t;
  if (o->p54 != 0) t = (unsigned)o->n62 * 2 + t;
  if (o->p58 != 0) t = (unsigned)o->n64 * 2 + t;
  o->total = t;
  if (a != 0) *a = t;
  if (b != 0) *b = o->total;
  return 0;
}
