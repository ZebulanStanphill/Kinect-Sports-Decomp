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
extern void fn_822848B8(void *);
extern void fn_82359C18(void *);
extern char lbl_821BD014[];
extern char lbl_821BE838[];

typedef struct Dtor_82479600 Dtor_82479600;
typedef struct Del_82479600 {
    struct {
        void (*f0)(struct Del_82479600 *, int);
    } *vt;
} Del_82479600;
typedef struct Sub_82479600 {
    char pad0[0x14];
    Del_82479600 *m14;
    char pad18[0x38 - 0x18];
    char m38[0x1c];
    void *m54;
} Sub_82479600;
struct Dtor_82479600 {
    void *vt;
    char pad4[0xc];
    Sub_82479600 sub;
};

static __forceinline void SubDtor(Sub_82479600 *s)
{
    Del_82479600 *d;
    if (s->m54 != 0) {
        fn_822848B8(s->m54);
        s->m54 = 0;
    }
    d = s->m14;
    if (d != 0) {
        d->vt->f0(d, 1);
    }
    fn_82359C18(s->m38);
}

void fn_82479600(Dtor_82479600 *t)
{
    t->vt = lbl_821BD014;
    SubDtor(&t->sub);
    t->vt = lbl_821BE838;
}
