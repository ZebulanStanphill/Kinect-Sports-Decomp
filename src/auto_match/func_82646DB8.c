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
extern int fn_82637398(void *, int);
extern unsigned int *fn_82643B08(void *);
extern int fn_82645110();
extern int fn_8264F1D8(void *, unsigned int);

typedef struct {
    char pad[0xc];
    unsigned int *wp;
    unsigned int *wend;
} Buf_82646DB8;

static unsigned int *Next_82646DB8(Buf_82646DB8 *b)
{
    unsigned int *p = b->wp;
    if (p + 1 > b->wend) {
        p = fn_82643B08(b);
    }
    return p;
}

typedef struct {
    char pad0[0x2abc];
    unsigned char flags_a;
    unsigned char flags_b;
    char pad1[0x2c3c - 0x2abe];
    unsigned int shift;
    char pad2[0x3500 - 0x2c40];
    Buf_82646DB8 buf;
} Ctx_82646DB8;

int fn_82646DB8(Ctx_82646DB8 *c)
{
    unsigned int *p;
    c->flags_b = c->flags_b & 0x7f;
    fn_82645110();
    p = Next_82646DB8(&c->buf);
    *p = 0x85000000;
    c->buf.wp = p + 1;
    if ((c->flags_a & 0x20) == 0) {
        if (fn_8264F1D8(c, 0x1000000 << c->shift) != 0) {
            fn_82637398(c, 0);
            return 0x8007000e;
        }
        if ((c->flags_b & 0x40) == 0) {
            fn_82637398(c, 0);
        }
    }
    return 0;
}
