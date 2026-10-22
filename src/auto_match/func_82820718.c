typedef unsigned int uint;

typedef struct Elem {
    unsigned char b[0x21];
} Elem;

typedef struct Info {
    unsigned char pad[0x50];
    unsigned char unk50;
    unsigned char count;
} Info;

typedef struct Obj {
    unsigned char pad[0x1c];
    Info *info;
    unsigned char pad2[0x10];
    Elem *elems;
} Obj;

extern int fn_82814D10(Obj *);
extern int fn_82814D28(Obj *);
extern int fn_82820EF8(void *, int);

void fn_82820718(Obj *param_1)
{
    Info *info;
    uint i;
    unsigned char *e;
    int *p;
    int n;

    info = param_1->info;
    for (i = 0; i < info->count; i++) {
        e = param_1->elems[i].b;
        *(int *)(e + 0x15) = 0;
        *(int *)(e + 0x19) = 0;
        *(int *)(e + 0xd) = 0;
        if (fn_82814D10(param_1) != 0) {
            fn_82820EF8(e + 0xd, 4);
            fn_82820EF8(e, 4);
            fn_82820EF8(e + 5, 4);
            fn_82820EF8(e + 9, 4);
            fn_82820EF8(e + 0x1d, 4);
        }
    }
    p = (int *)((char *)info + 0x50);
    n = 2;
    do {
        p[3] = 0;
        p[4] = 0;
        p += 5;
        *p = 0;
    } while (--n != 0);
    if (fn_82814D10(param_1) != 0) {
        fn_82814D28(param_1);
    }
}
