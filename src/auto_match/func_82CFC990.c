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
extern unsigned strlen(const char *);
extern void *memcpy(void *, const void *, unsigned);

typedef struct Ctx_82CFC990 {
  char pad[0x10];
  void *heap;
} Ctx_82CFC990;

extern Ctx_82CFC990 *fn_82CE5410();
extern void fn_82CE6310(void *, void *, int, int);

typedef struct Str_82CFC990 {
  char *data;
  int len;
  unsigned cap;
} Str_82CFC990;

Str_82CFC990 *fn_82CFC990(Str_82CFC990 *s, const char *src)
{
  int old = s->len - 1;
  int n = strlen(src);
  int newlen = n + old + 1;
  void *h = fn_82CE5410()->heap;
  int cap = s->cap & 0x3fffffff;
  if (cap < newlen) {
    int nc = newlen < (cap << 1) ? (cap << 1) : newlen;
    fn_82CE6310(h, s, nc, 1);
  }
  s->len = newlen;
  memcpy(s->data + old, src, n + 1);
  return s;
}
