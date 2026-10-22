extern void fn_82868268(void);
extern void fn_82868328(void);
extern void fn_828683E8(void);
extern void fn_828684A8(void);
extern void fn_82868648(void);
extern void fn_82868708(void);
extern void fn_828687C8(void);

typedef struct Obj {
    char pad[0x490];
    void *p490;
    void *p494;
    void *p498;
    void *p49C;
    void *p4A0;
    void *p4A4;
    void *p4A8;
} Obj;

int fn_82866580(Obj *o)
{
    if (o->p4A8 != 0) {
        o->p4A8 = 0;
        fn_82868328();
    }
    if (o->p4A4 != 0) {
        o->p4A4 = 0;
        fn_828683E8();
    }
    if (o->p4A0 != 0) {
        o->p4A0 = 0;
        fn_82868268();
    }
    if (o->p49C != 0) {
        o->p49C = 0;
        fn_828687C8();
    }
    if (o->p498 != 0) {
        o->p498 = 0;
        fn_82868708();
    }
    if (o->p494 != 0) {
        o->p494 = 0;
        fn_82868648();
    }
    if (o->p490 != 0) {
        o->p490 = 0;
        fn_828684A8();
    }
    return 0x200a0000;
}
