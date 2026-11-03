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
extern void fn_827E02A8(void *);
extern unsigned int fn_827E0250(void *, void *);
extern void fn_827E0438(void *, void *, unsigned int);
extern void fn_827E0C38(void *, int);
extern void fn_827E8720(void *, void *, void *);

typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Hd { Node *head; } Hd;
typedef struct M { int pad; Node *head; } M;

Node **fn_827E1118(Node **out, M *m, Node *first, Node *last)
{
  Node **hp = &m->head;
  Node *cur;
  char buf[1];
  if (first == m->head->next && last == m->head) {
    fn_827E02A8(hp);
    fn_827E0C38(m, 8);
    *out = (*hp)->next;
  } else {
    while (first != last) {
      cur = first;
      first = first->next;
      fn_827E0438(m, cur, fn_827E0250(m, (char *)cur + 8));
      fn_827E8720(buf, &m->head, cur);
    }
    *out = first;
  }
  return out;
}
