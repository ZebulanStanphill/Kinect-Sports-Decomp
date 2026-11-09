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


typedef struct Node_82BBFE50 {
    int pad0;
    struct Node_82BBFE50 *next;   /* 0x04 */
    struct Node_82BBFE50 *prev;   /* 0x08 */
} Node_82BBFE50;

typedef struct Owner_82BBFE50 {
    char pad0[0xc];
    Node_82BBFE50 anchor;         /* 0x0c */
} Owner_82BBFE50;

void fn_82BBFE50(Owner_82BBFE50 *o, Node_82BBFE50 *n)
{
    Node_82BBFE50 *at = &o->anchor;
    Node_82BBFE50 *next;

    next = at->next;
    n->next = next;
    if (next != 0) {
        next->prev = n;
    }
    n->prev = at;
    at->next = n;
}
