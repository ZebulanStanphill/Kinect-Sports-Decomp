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
extern int fn_82F1E698();


typedef struct P { char pad[0x2d0]; unsigned count; char pad2[0xaf0-0x2d4]; int mode; char pad3[0x1e54-0xaf4]; char *ents; } P;
void fn_82F1ED80(P *p, unsigned a, unsigned b, int idx, int out)
{
  char *e = p->ents + idx * 0x114;
  unsigned i;
  unsigned s = a;
  unsigned n = b;
  int o = out;
  for (; s < n; s++) {
    for (i = 0; i < p->count; i++) {
      if (*(int *)(e + 0x74) != 0 || p->mode == 0 || p->mode == 4)
        fn_82F1E698(p, i, s, e, o);
      e += 0x114;
      o += 0x600;
    }
  }
}
