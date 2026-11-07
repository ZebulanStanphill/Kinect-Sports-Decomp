typedef struct Obj_82739E28 {
    int pad0;
    int field4;
    char *field8;
} Obj_82739E28;

typedef struct Inner_82739E28 {
    char pad[0x50];
    int value;
} Inner_82739E28;

extern void fn_82681898(int a, double d);
extern unsigned char fn_82695468(Obj_82739E28 *p, int id);
extern void fn_826954C0(Obj_82739E28 *p, const char *name, int a, int b);

void fn_82739E28(Obj_82739E28 *param_1)
{
    Inner_82739E28 *inner;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    } else {
        inner = param_1->field8 ? (Inner_82739E28 *)(param_1->field8 - 0x10) : 0;
        fn_82681898(param_1->field4, (double)(inner->value % 1000));
    }
}
