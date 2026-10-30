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

typedef struct S_82DF2E48 { int p0, p1; unsigned *data; int count; char pad[0x30]; unsigned char flag; } S_82DF2E48;
extern char *fn_82D899A0(void *, unsigned);
extern void fn_82D94918(S_82DF2E48 *, unsigned);
extern void fn_82D94470(S_82DF2E48 *, int);

static int find(S_82DF2E48 *s, unsigned k)
{
  int i = 0; unsigned *p;
  if (0 < s->count) { p = s->data; do { if (*p == k) return i; i++; p++; } while (i < s->count); }
  return -1;
}
void fn_82DF2E48(S_82DF2E48 *a, S_82DF2E48 *b, unsigned k)
{
  char tmp[4];
  int ia = find(a, k);
  if (find(b, k) != -1) return;
  if (ia == -1) return;
  b->flag = b->flag || *fn_82D899A0(tmp, k);
  fn_82D94918(b, k);
  fn_82D94470(a, ia);
}
