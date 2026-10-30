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
typedef struct Ent_83028018 { int f0, f4, f8; int a, b; void *obj; int f18, f1c; } Ent_83028018;
typedef struct Vec_83028018 { Ent_83028018 *begin, *end; } Vec_83028018;
typedef struct Own_83028018 { char pad[0x64]; Vec_83028018 v; } Own_83028018;
extern void _blkmov(void *dst, void *src, unsigned int n);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;

void fn_83028018(Own_83028018 *o, int key1, int key2)
{
  Vec_83028018 *v = &o->v;
  Ent_83028018 *q = v->begin;
  int *pl;
  if (q != v->end) {
    pl = &q->f1c;
    do {
      if (pl[-4] == key1 && (unsigned)pl[-3] == (unsigned)key2) {
        if ((unsigned)pl[-2] != 0) {
          fn_82FA5190(lbl_831BC768, (void *)pl[-2]);
          pl[-2] = 0;
        }
        pl[-1] = 0;
        *pl = 0;
        {
          Ent_83028018 *last = v->end - 1;
          if (q < last) {
            _blkmov(q, pl + 1, ((((((unsigned int)((char *)last - (char *)q) - 1) >> 3) & 0x1ffffffc) + 4) * 8) & 0xffffffe0);
          }
        }
        v->end--;
      } else {
        q++;
        pl += 8;
      }
    } while (q != o->v.end);
  }
}
