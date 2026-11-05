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
typedef struct Node_82C11EA8 {
    int m0;
    int m4;
    char pad8[4];
    unsigned mc;
    char pad10[0x2c - 0x10];
    void *m2c;
    int m30;
    char pad34[4];
    struct Node_82C11EA8 *m38;
    struct Node_82C11EA8 *m3c;
} Node_82C11EA8;
typedef struct Disp_82C11EA8 Disp_82C11EA8;
struct Disp_82C11EA8 {
    char pad[0x24];
    int (*f24)(Disp_82C11EA8 *, int);
};
typedef struct Q_82C11EA8 {
    char pad0[0x14];
    int count;
    Node_82C11EA8 *head;
    Node_82C11EA8 *tail;
    int m20;
    int state;
} Q_82C11EA8;
typedef struct Mgr_82C11EA8 {
    int heap;
    char pad4[0x14];
    Disp_82C11EA8 *disp;
} Mgr_82C11EA8;

extern void fn_82C10B28(int, int, void *);

int fn_82C11EA8(Mgr_82C11EA8 *m, Q_82C11EA8 *q)
{
    Node_82C11EA8 *node;
    Node_82C11EA8 *n0;
    int hr;
    unsigned cnt;

    hr = 0;
    cnt = 0;
    if (q->state == 2) {
        return 0;
    }
    n0 = q->head;
    q->m20 = 0;
    q->state = 2;
    if (n0 == 0) {
        return 0;
    }
    node = n0;
    for (;;) {
        if (node->m30 == 0 && node->mc == 0 && ++cnt > 1 && node->m4 != 0) {
            q->state = 1;
            return hr;
        }
        if (node->m3c != 0) {
            node->m3c->m38 = 0;
        } else {
            q->tail = 0;
        }
        q->head = node->m3c;
        hr = m->disp->f24(m->disp, node->m0);
        if (hr < 0) {
            break;
        }
        if (node->m2c != 0) {
            fn_82C10B28(m->heap, 0x20, node->m2c);
            fn_82C10B28(m->heap, 0x20, &node->m2c);
        }
        fn_82C10B28(m->heap, 0x20, &node);
        node = q->head;
        q->count--;
        if (node == 0) {
            return hr;
        }
    }
    return hr;
}
