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


typedef struct Ent_827590F0 {
  unsigned char b;
  unsigned char pad[3];
  unsigned int w;
} Ent_827590F0;
typedef struct Obj_827590F0 {
  char pad[9];
  unsigned char seed;
  unsigned short count;
  Ent_827590F0 *ents;
} Obj_827590F0;

unsigned int fn_827590F0(Obj_827590F0 *o)
{
  unsigned int h = o->seed;
  unsigned int i;
  for (i = 0; i < o->count; i++) {
    h = (o->ents[i].w >> 16) ^ o->ents[i].b ^ o->ents[i].w ^ h;
  }
  return h;
}
