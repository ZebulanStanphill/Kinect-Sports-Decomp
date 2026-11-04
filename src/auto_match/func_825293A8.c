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
typedef struct Node_825293A8 { int prev; int next; } Node_825293A8;
typedef struct Obj_825293A8 Obj_825293A8;
typedef struct Vt_825293A8 { int pad[3]; void (*f0c)(Obj_825293A8 *, void *); } Vt_825293A8;
typedef struct Owner_825293A8 { char pad[0x3f0]; Node_825293A8 head; } Owner_825293A8;
struct Obj_825293A8 {
  Vt_825293A8 *vt;
  char pad0[0x30 - 4];
  int x30;
  char pad1[4];
  Node_825293A8 link;
  char pad2[0xc];
  Owner_825293A8 *owner;
  char pad3[0xb24 - 0x50];
  unsigned char flag;
};
typedef struct Msg_825293A8 { int id; int size; } Msg_825293A8;
extern void fn_825298E8(Obj_825293A8 *);
extern void fn_8252AE68(Obj_825293A8 *, int);

static __forceinline int isz_825293A8(int v) { return v == 0; }
void fn_825293A8(Obj_825293A8 *p)
{
  Node_825293A8 *q;
  if (p->owner == 0 && p->x30 != 0) {
    fn_825298E8(p);
  }
  else {
    q = &p->link;
    if (q->prev == 0) {
      if (p->owner != 0 && p->flag == 0) {
        Msg_825293A8 m;
        m.id = 0x4b;
        m.size = 8;
        p->vt->f0c(p, &m);
      }
      if (q->prev == 0 && isz_825293A8(p->link.prev)) {
        Node_825293A8 *n = &p->owner->head;
        while (n->next != 0) {
          n = (Node_825293A8 *)n->next;
        }
        n->next = (int)q;
        q->prev = (int)n;
        q->next = 0;
        fn_8252AE68(p, 1);
        *(int *)((char *)p + 0x8ac) = 0;
        *(int *)((char *)p + 0x98c) = 0;
      }
    }
  }
}
