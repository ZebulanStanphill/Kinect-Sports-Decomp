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
typedef struct I2_82E753C0 I2_82E753C0;
typedef struct Data_82E753C0 {
    char pad0[0x10];
    unsigned short m10;
} Data_82E753C0;
struct I2_82E753C0 {
    struct {
        char pad0[8];
        unsigned long (*f8)(I2_82E753C0 *);
        char pad0c[0x98 - 0xc];
        Data_82E753C0 *(*f98)(I2_82E753C0 *);
    } *vt;
};
typedef struct I1_82E753C0 I1_82E753C0;
struct I1_82E753C0 {
    struct {
        int (*f0)(I1_82E753C0 *, void *, I2_82E753C0 **);
        char pad4[4];
        unsigned long (*f8)(I1_82E753C0 *);
    } *vt;
};
typedef struct Dev_82E753C0 Dev_82E753C0;
struct Dev_82E753C0 {
    struct {
        char pad0[0x90];
        int (*f90)(Dev_82E753C0 *, I1_82E753C0 **);
    } *vt;
};
typedef struct Obj_82E753C0 {
    char pad0[0x68];
    int m68;
    char pad6c[4];
    void *m70;
    int m74;
} Obj_82E753C0;

extern int fn_82E5FD40(I1_82E753C0 *, void *);
extern void *fn_82E50BE8(int, int, int, int, int);
extern void *memcpy(void *, const void *, unsigned);
extern char lbl_821531C8[];

int fn_82E753C0(Obj_82E753C0 *o, Dev_82E753C0 *dev)
{
    I1_82E753C0 *i1;
    I2_82E753C0 *i2;
    Data_82E753C0 *d;
    int hr;
    int sz;

    if (dev == 0) {
        return 0x80070057;
    }
    i1 = 0;
    i2 = 0;
    hr = dev->vt->f90(dev, &i1);
    if (hr >= 0) {
        if (i1 == 0) {
            hr = 0xC00D36BB;
            goto L;
        }
        o->m68 = fn_82E5FD40(i1, (char *)o + 0x6c);
        hr = i1->vt->f0(i1, lbl_821531C8, &i2);
        if (hr >= 0) {
            d = i2->vt->f98(i2);
            sz = d->m10 + 0x12;
            o->m74 = sz;
            o->m70 = fn_82E50BE8(sz, 0, 0, 0, 0);
            if (o->m70 == 0) {
                hr = 0x8007000E;
            } else {
                memcpy(o->m70, d, o->m74);
            }
        }
    }
    if (i1 != 0) {
        i1->vt->f8(i1);
        i1 = 0;
    }
L:
    if (i2 != 0) {
        i2->vt->f8(i2);
    }
    return hr;
}
