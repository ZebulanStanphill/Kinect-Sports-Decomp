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
typedef struct Str_825382D8 { char b[0x1c]; } Str_825382D8;
typedef struct Entry_825382D8 { unsigned __int64 key; char name[0x18]; int f20; unsigned flags; unsigned __int64 v; char rest[0x78 - 0x30]; } Entry_825382D8;
typedef struct Pair_825382D8 { unsigned __int64 key; Str_825382D8 name; int f; unsigned __int64 q; int z; } Pair_825382D8;
extern void *fn_82230110(void *, void *);
extern void fn_82240378(void *, void *);
extern void fn_82230300(void *, int, int);
extern void fn_82537C48(void *, void *);

int *fn_825382D8(int *param_1, Entry_825382D8 *param_2, Entry_825382D8 *param_3, int param_4)
{
  char tmp[0x20];
  Pair_825382D8 p;
  Entry_825382D8 *e;
  if (param_2 != param_3) {
    e = param_2;
    do {
      if ((e->flags & 1) == 0) {
        unsigned __int64 v = e->v;
        int f = e->f20;
        void *s = fn_82230110(tmp, e->name);
        p.key = e->key;
        fn_82240378(&p.name, s);
        p.f = f;
        p.q = v;
        p.z = 0;
        fn_82230300(s, 1, 0);
        fn_82537C48((void *)(param_4 + 0x20), &p);
        fn_82230300(&p.name, 1, 0);
      }
      e++;
    } while (e != param_3);
  }
  *param_1 = param_4;
  return param_1;
}
