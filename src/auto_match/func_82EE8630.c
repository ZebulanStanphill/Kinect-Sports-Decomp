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
struct E_82EE8630;
typedef struct { void (*f0)(struct E_82EE8630 *, int); } Vt_82EE8630;
typedef struct E_82EE8630 { Vt_82EE8630 *vt; } E_82EE8630;
typedef struct Link_82EE8630 { struct Link_82EE8630 *next; struct Link_82EE8630 *prev; } Link_82EE8630;
typedef struct {
  void *vt;
  char pad[0x50 - 4];
  unsigned count;
  Link_82EE8630 *head;
  char pad2[0x5c - 0x58];
  char sub[0xa0 - 0x5c];
  void *f_a0;
} Obj_82EE8630;
extern char lbl_8215FF7C[];
extern void fn_82E4FE40(void *);
extern void fn_82E50EA0(void *);
extern void fn_82EE9F80(void *);

void fn_82EE8630(Obj_82EE8630 *o)
{
  Link_82EE8630 *p, *n, *pr;
  E_82EE8630 *e;
  o->vt = lbl_8215FF7C;
  while (o->count != 0) {
    p = o->head;
    --o->count;
    n = p->next;
    pr = p->prev;
    pr->next = n;
    n->prev = pr;
    e = (E_82EE8630 *)((int *)p - 1);
    e->vt->f0(e, 0);
    fn_82E4FE40(e);
  }
  fn_82EE9F80(o->f_a0);
  o->f_a0 = 0;
  fn_82E50EA0(o->sub);
}
