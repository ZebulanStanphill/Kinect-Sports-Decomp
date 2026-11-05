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
typedef struct Dev_82700C78 Dev_82700C78;
struct Dev_82700C78 {
    struct {
        char pad[0x5c];
        int (*f5c)(Dev_82700C78 *);
    } *vt;
};
typedef struct Self_82700C78 {
    char pad0[0x68];
    Dev_82700C78 *m68;
} Self_82700C78;
typedef struct Px_82700C78 {
    char pad0[8];
    unsigned rc;
} Px_82700C78;
typedef struct Rep_82700C78 {
    char pad0[4];
    int cnt;
} Rep_82700C78;
typedef struct Sp_82700C78 {
    Px_82700C78 *px;
    int rep;
    char str[0x10];
} Sp_82700C78;
typedef struct Tmp_82700C78 {
    char b[0x10];
} Tmp_82700C78;

extern Rep_82700C78 *fn_8269A678(Rep_82700C78 *, Self_82700C78 *);
extern void fn_82695750(Tmp_82700C78 *, void *);
extern int fn_826AEC60(Tmp_82700C78 *, int, void *, int, int, int, int);
extern void fn_82696330(Tmp_82700C78 *);
extern void fn_8267C498(Rep_82700C78 *);
extern void fn_826824B0(Px_82700C78 *);

int fn_82700C78(Self_82700C78 *o, int a, Sp_82700C78 *sp, int b, int c, int d)
{
    Tmp_82700C78 t;
    Px_82700C78 *px;
    Rep_82700C78 *rep;
    void *ptr;
    int h;
    int r;

    if (o->m68 != 0) {
        if (sp->px != 0) {
            sp->px->rc = (sp->px->rc + 1) & 0x8fffffff;
        }
        rep = 0;
        px = sp->px;
        if (sp->rep != 0) {
            Rep_82700C78 *t2 = fn_8269A678((Rep_82700C78 *)sp->rep, o);
            if (t2 != 0) {
                t2->cnt = t2->cnt + 1;
            }
            rep = t2;
        }
        if (px != 0) {
            ptr = (char *)px + 0x10;
        } else if (rep != 0) {
            ptr = (char *)rep + 0x68;
        } else {
            ptr = 0;
        }
        h = o->m68->vt->f5c(o->m68);
        fn_82695750(&t, sp->str);
        r = fn_826AEC60(&t, b, ptr, h, c, d, a);
        fn_82696330(&t);
        if (rep != 0) {
            fn_8267C498(rep);
        }
        if (px != 0) {
            fn_826824B0(px);
        }
        return r;
    }
    return 0;
}
