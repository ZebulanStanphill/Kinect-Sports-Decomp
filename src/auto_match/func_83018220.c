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
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82FF82A8(void *, void *);
extern int fn_830178D8(void *, unsigned int);
extern int fn_83019B78(void *, unsigned int);

typedef struct Node_83018220 {
  struct Node_83018220 *next;
  unsigned int key;
  int pad8[4];
  int f18;
} Node_83018220;

typedef struct Self_83018220 {
  char pad0[0x6c0];
  int f6c0;
  char pad6c4[0x6e0 - 0x6c4];
  Node_83018220 *head;
  char pad6e4[0x720 - 0x6e4];
  int cs;
} Self_83018220;

typedef struct Pair_83018220 {
  unsigned int first;
  unsigned int second;
} Pair_83018220;

unsigned char fn_83018220(Self_83018220 *self, unsigned int a, unsigned int key, unsigned char flag)
{
  Node_83018220 *n;
  unsigned char r;
  Pair_83018220 p;
  void *cs;

  cs = &self->cs;
  RtlEnterCriticalSection(cs);
  if (flag == 0) {
    for (n = self->head; n != 0; n = n->next) {
      if (n->key == key) {
        r = (fn_83019B78(&n->f18, a) == 0) + 1;
        RtlLeaveCriticalSection(cs);
        return r;
      }
    }
  }
  r = 0x1f;
  if (a != 0) {
    fn_830178D8(self, a);
    p.first = a;
    p.second = key;
    r = (fn_82FF82A8(&self->f6c0, &p) == 0) + 1;
  }
  RtlLeaveCriticalSection(cs);
  return r;
}
