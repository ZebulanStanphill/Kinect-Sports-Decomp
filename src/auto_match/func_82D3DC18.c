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
struct Obj;
typedef struct VT { void *f0, *f1, *f2, *f3, *f4, *f5; int (*f6)(struct Obj *, char *, int); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct Ent { Obj *obj; int b; int c; int d; } Ent;
typedef struct S { char pad[0x18]; Ent *ents; int count; } S;

int fn_82D3DC18(S *s, char *name)
{
  int i;
  if (*name != 0 && s->count > 0xfc) {
    return -1;
  }
  if (s->count >= 0xfff) {
    return -1;
  }
  for (i = 0; i < s->count; i++) {
    Ent *e = s->ents + i;
    e->c = e->obj->vt->f6(e->obj, name, 0x100);
    s->ents[i].d = s->count;
    if (s->ents[i].c == -1) return -1;
  }
  return 0x70;
}
