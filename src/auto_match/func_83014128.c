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
typedef struct Entry {
  uint key;
  int pad4;
  int value[8];
} Entry;
typedef struct Map {
  Entry *begin;
  Entry *end;
} Map;
extern Entry *fn_82FA8200();

static __inline int Found(Map *m, Entry *p) { return p != m->end; }
static __inline int *Get(Map *m, Entry *p) { return Found(m, p) ? p->value : 0; }
int *fn_83014128(Map *param_1,uint param_2)

{
  Entry *e;
  Entry *p;
  int *r;
  
  for (p = param_1->begin; p != param_1->end && p->key != param_2; p++) {
  }
  r = Get(param_1, p);
  if (r == 0) {
    e = fn_82FA8200();
    if (e != 0) {
      r = e->value;
      e->key = param_2;
    }
  }
  return r;
}
