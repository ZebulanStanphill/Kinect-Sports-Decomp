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


typedef struct Node_82AD1AC8 {
    unsigned int w;                  /* 0x00 */
    struct Node_82AD1AC8 *next;      /* 0x04 */
} Node_82AD1AC8;

typedef struct List_82AD1AC8 {
    Node_82AD1AC8 *head;             /* 0x00 */
} List_82AD1AC8;

static int notNull(Node_82AD1AC8 *p)
{
    if (p) return 1;
    return 0;
}

Node_82AD1AC8 *fn_82AD1AC8(List_82AD1AC8 *l, int id)
{
    Node_82AD1AC8 *p;
    unsigned char ok;
    unsigned int w;
    p = l->head;
    while (notNull(p)) {
        w = p->w;
        if ((w & 0x40000000) == 0 && (w & 0xe000000) == 0) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok && ((w >> 13) & 0xfff) == id + 1U) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok) {
            return p;
        }
        p = p->next;
    }
    return 0;
}
