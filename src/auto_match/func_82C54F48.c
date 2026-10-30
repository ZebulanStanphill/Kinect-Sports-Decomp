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
extern int fn_82BA02A8(unsigned, void *);
extern int fn_82C53970(unsigned);
extern int fn_82C563B0(unsigned, unsigned);
extern int fn_82CBBD70(void *);
extern int fn_82F641F8(void *);
extern void *memset(void *, int, unsigned);

typedef struct { unsigned *data; unsigned cap; unsigned n; } Stk_82C54F48;
typedef struct {
  unsigned f0;
  Stk_82C54F48 a;
  Stk_82C54F48 b;
  int f1c;
  unsigned f20;
  unsigned ctx;
} Obj_82C54F48;

static unsigned popb_82C54F48(Stk_82C54F48 *s)
{
  unsigned n;
  unsigned v;
  if (s->n == 0) return 0;
  n = s->n - 1;
  s->n = n;
  v = s->data[n];
  s->data[n] = 0;
  return v;
}

static unsigned pop_82C54F48(Stk_82C54F48 *s)
{
  unsigned n;
  unsigned v;
  if (s->n == 0) return 0;
  n = s->n - 1;
  s->n = n;
  v = s->data[n];
  s->data[n] = 0;
  return v;
}

void fn_82C54F48(Obj_82C54F48 *p)
{
  unsigned item;
  char flag;

  if (p != 0) {
    if (p->f1c != -1) {
      item = pop_82C54F48(&p->a);
      flag = (char)popb_82C54F48(&p->b);
      while (item != 0) {
        if ((flag & 1) != 0) {
          memset((void *)item, 0, 0xb330);
        }
        fn_82C563B0(p->ctx + 8, item);
        item = pop_82C54F48(&p->a);
        flag = (char)popb_82C54F48(&p->b);
      }
    }
    fn_82CBBD70(&p->a);
    fn_82CBBD70(&p->b);
    if (p->f0 != 0) {
      fn_82C53970(p->f0);
      p->f0 = 0;
    }
    fn_82BA02A8(p->ctx + 8, p);
    fn_82F641F8(p);
  }
}
