struct Obj_830066E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void w58();
    virtual void w59();
    virtual void w60();
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void w69();
    virtual void w70();
    virtual void w71();
    virtual void v72();
    int pad[15];
    unsigned mask;
};
extern "C" {
void fn_83006528(Obj_830066E0 *, unsigned, int, int, int);
void fn_830182F0(void *, Obj_830066E0 *, int, int, unsigned char *);
extern void *lbl_832642FC;
void fn_830066E0(Obj_830066E0 *o, unsigned p2, int p3, int bit, int p5)
{
    if (p2 == 0) {
        unsigned char flag = 0;
        if (lbl_832642FC != 0) {
            fn_830182F0(lbl_832642FC, o, bit, p5, &flag);
        }
        if (flag == 0) {
            o->mask = o->mask & ~(1 << bit);
        }
        o->v20();
        o->v72();
    } else {
        fn_83006528(o, p2, p3, bit, p5);
    }
}
}
