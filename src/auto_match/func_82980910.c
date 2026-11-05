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
typedef struct Node_82980910 Node_82980910;
typedef struct Src_82980910 Src_82980910;
struct Src_82980910 {
    struct {
        int pad0;
        Node_82980910 *(*f4)(Src_82980910 *);
    } *vt;
};
struct Node_82980910 {
    char pad0[0x10];
    int m10;
    char pad14[4];
    Node_82980910 *m18;
    Node_82980910 *m1c;
    char pad20[0x10];
    int m30;
};
typedef struct Ctx_82980910 {
    char pad0[0x70];
    int m70;
    char pad74[4];
    struct {
        char pad0[0x1c];
        int m1c;
    } *m78;
} Ctx_82980910;

extern void *fn_82930318(int);
extern Node_82980910 *fn_82932B38(void *);
extern void *fn_829304E0(void *, Node_82980910 *, int, const char *);

void *fn_82980910(Ctx_82980910 *c, Src_82980910 *a, Src_82980910 *b)
{
    void *mem;
    Node_82980910 *n;
    void *r;
    Node_82980910 *t;

    c->m78->m1c = 1;
    mem = fn_82930318(0x34);
    if (mem != 0) {
        n = fn_82932B38(mem);
    } else {
        n = 0;
    }
    if (n != 0) {
        n->m10 = 0xd;
        n->m30 = c->m70;
        c->m70 = c->m70 + 1;
        if (b != 0) {
            t = b->vt->f4(b);
            n->m1c = t;
            if (t == 0) {
                return 0;
            }
        }
        if (a != 0) {
            t = a->vt->f4(a);
            n->m18 = t;
            if (t == 0) {
                return 0;
            }
        }
        mem = fn_82930318(0x14);
        if (mem != 0) {
            r = fn_829304E0(mem, n, 0, "CaseStmts");
        } else {
            r = 0;
        }
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
