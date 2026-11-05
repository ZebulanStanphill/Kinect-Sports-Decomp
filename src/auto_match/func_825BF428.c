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
typedef struct Node_825BF428 {
    struct Node_825BF428 *next;
    struct Node_825BF428 *prev;
} Node_825BF428;
typedef struct Vec_825BF428 {
    int **first;
    int **last;
    int **end;
} Vec_825BF428;
typedef struct Obj_825BF428 {
    char pad0[4];
    Node_825BF428 *head;
    int size;
    char padc[4];
    Vec_825BF428 v;
} Obj_825BF428;

extern void fn_8265CA20(void *);

void fn_825BF428(Obj_825BF428 *o)
{
    Vec_825BF428 *v = &o->v;
    Node_825BF428 *h;
    Node_825BF428 *n;
    Node_825BF428 *nx;
    int **p;

    if (v->first != 0) {
        for (p = v->first; p != v->last; p++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    h = o->head;
    n = h->next;
    h->next = h;
    o->head->prev = o->head;
    o->size = 0;
    while (n != o->head) {
        nx = n->next;
        fn_8265CA20(n);
        n = nx;
    }
    fn_8265CA20(o->head);
}
