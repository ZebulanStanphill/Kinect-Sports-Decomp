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
typedef struct { char pad[4]; unsigned count; } Cont_82793530;
typedef struct { char pad[0xc]; void *rc; char pad2[0x6c - 0x50 - 0x10]; Cont_82793530 *cont; unsigned idx; } It_82793530;
typedef struct { char pad[0x8]; unsigned len; unsigned elem; } Elem_82793530;
typedef struct { char pad[8]; unsigned f08; int f0c; } Item_82793530;
typedef struct { char b[0x30]; } Str_82793530;
extern void *fn_8267BF50(void *);
extern void fn_8267C4F0(void *);
extern void fn_826FDED0(Str_82793530 *, void *);
extern void fn_826FDF58(Str_82793530 *);
extern void fn_82726AB8(Str_82793530 *, ...);
extern void fn_8278CD58(void *, Str_82793530 *, int);
extern void *fn_8278D688(Str_82793530 *, int, Str_82793530 *);
extern void fn_82791BD8(It_82793530 *, void *, void *, unsigned);
extern Item_82793530 *fn_82791CF0(It_82793530 *);
extern void fn_82791DF0(It_82793530 *);

void *fn_82793530(void *out, char *src, unsigned start, unsigned end)
{
  It_82793530 it;
  Str_82793530 str;
  Str_82793530 tmp;
  Item_82793530 *e;
  int n;
  unsigned cnt;

  fn_82791BD8(&it, src + 0x10, src, start);
  if (end < start) end = start;
  if ((int)end == -1) n = 0x7fffffff; else n = end - start;
  fn_826FDED0(&str, fn_8267BF50(src));
  cnt = 0;
  while (n > 0 && it.idx < it.cont->count) {
    e = fn_82791CF0(&it);
    if (e->f0c != 0) {
      if (cnt++ == 0) {
        fn_82726AB8(&str, e->f0c);
      } else {
        fn_82726AB8(&str, fn_8278D688(&tmp, e->f0c, &str));
        fn_826FDF58(&tmp);
      }
    }
    n = n - e->f08;
    fn_82791DF0(&it);
  }
  fn_8278CD58(out, &str, 0);
  fn_826FDF58(&str);
  if (it.rc != 0) fn_8267C4F0(it.rc);
  return out;
}
