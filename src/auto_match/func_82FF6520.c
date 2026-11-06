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
typedef struct Obj_82FF6520 { int a, b; int f8; } Obj_82FF6520;
typedef struct Ent_82FF6520 { unsigned key; Obj_82FF6520 *value; } Ent_82FF6520;
typedef struct Map_82FF6520 { int pad; Ent_82FF6520 *begin; Ent_82FF6520 *end; } Map_82FF6520;
static int ne_82FF6520(Ent_82FF6520 *a, Ent_82FF6520 *b) { return a != b; }
static Obj_82FF6520 **find_82FF6520(Map_82FF6520 *m, unsigned key)
{
  Ent_82FF6520 *e;
  for (e = m->begin; e != m->end && e->key != key; e++) {}
  return ne_82FF6520(e, m->end) ? &e->value : 0;
}
int fn_82FF6520(Map_82FF6520 *m, unsigned key)
{
  Obj_82FF6520 **p = find_82FF6520(m, key);
  if (p != 0) return (*p)->f8;
  return 0;
}
