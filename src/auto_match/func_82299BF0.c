typedef struct Value_82299BF0 {
    int ctx;
    int type;
    union { double d; int i; } v;
} Value_82299BF0;

extern void fn_82273CD8(Value_82299BF0 *, int);
extern void fn_82273C88(Value_82299BF0 *);
extern void fn_82672C20(int, const char *, Value_82299BF0 *, int);
extern void fn_82F64988(void *, int, void *);
extern void fn_8229A0B8(void *);

void fn_82299BF0(char *o, void *p2, void *p3)
{
    int mode = *(int *)(o + 0x1210);
    int flag = 1;
    if (mode >= 0 && (mode <= 3 || (mode > 7 && mode <= 10)))
        flag = 0;
    if (*(int *)(o + 0x1228) == 0 || (flag != 0 && *(int *)(o + 0x1214) != 2)) {
        fn_82F64988(o + 0xc, 0x100, p2);
        fn_82F64988(o + 0x20c, 0x400, p3);
        *(int *)(o + 0x1214) = 2;
        fn_8229A0B8(o);
    } else {
        Value_82299BF0 v[3];
        Value_82299BF0 *p;
        int i;
        double d;
        for (i = 0; i < 3; i++) {
            v[i].ctx = 0;
            v[i].type = 0;
        }
        d = (double)*(unsigned *)(o + 8);
        fn_82273CD8(&v[0], 3);
        v[0].v.d = d;
        fn_82273CD8(&v[1], 5);
        v[1].v.i = (int)p2;
        fn_82273CD8(&v[2], 5);
        v[2].v.i = (int)p3;
        fn_82672C20(*(int *)o, "_root.mainCtrl.displayGamertagCaption", v, 3);
        *(int *)(o + 0x1224) = 0;
        *(int *)(o + 0x120c) = 3;
        *(int *)(o + 0x1220) = 1;
        p = v + 3;
        i = 2;
        do {
            p--;
            fn_82273C88(p);
        } while (--i >= 0);
    }
}
