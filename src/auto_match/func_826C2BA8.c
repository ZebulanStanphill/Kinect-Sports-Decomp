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

typedef struct { unsigned int **p; unsigned int idx; } It826C;
typedef struct { int **key; int *val; } Pr826C;
extern void fn_826C0FB8(It826C *, void *, int *);
extern int fn_826C23D0();
extern int fn_826C3768();
extern int fn_82695FA0();
extern unsigned char fn_826A8E58();

void fn_826C2BA8(void *self, int *key, int *val)
{
  struct { It826C it; Pr826C k; } L;
  char *e;
  fn_826C0FB8(&L.it, self, key);
  L.k.key = 0;
  L.k.val = 0;
  if (fn_826A8E58(&L.it, &L.k) == 0) {
    e = (char *)(L.it.idx * 0x30 + (unsigned)*L.it.p) + 0x18;
    fn_826C3768(e, val);
    fn_82695FA0(e + 0x10, val + 4);
  } else {
    L.k.key = (int **)key;
    L.k.val = val;
    fn_826C23D0(self, self, &L.k, *(int *)(*key + 0xc));
  }
}