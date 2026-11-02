struct Str_826C9DD0 { int pad[3]; };
struct Rc_826C9DD0 { int obj; int pad; int count; };
struct Sprite_826C9DD0 {
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual unsigned char f11c(int, int *, int);
    virtual void f120(int);
    virtual void f124(int);
    char pad[0x80 - 4];
    int f80;
};
struct Fn_826C9DD0 {
    char pad[0x18];
    int arg;
    int argc;
};

extern "C" {
Sprite_826C9DD0 *fn_826C59F8(Fn_826C9DD0 *);
int *fn_8269F500(Sprite_826C9DD0 *);
void fn_8269B410(void *, const char *, int);
char *fn_826957D0(Fn_826C9DD0 *, int);
void fn_82696D38(Rc_826C9DD0 **, char *, int, int, int);
int fn_82697700(char *, int);
void fn_826944C8(Rc_826C9DD0 *);
}

extern "C" void fn_826C9DD0(Fn_826C9DD0 *f)
{
    Sprite_826C9DD0 *s = fn_826C59F8(f);
    if (s != 0) {
        if (f->argc < 1) {
            int e = s->f80;
            if (e == 0)
                e = (int)fn_8269F500(s);
            fn_8269B410((char *)s + 0xc, "Error: %s, GFx_SpriteGotoAndPlay needs one arg\n", **(int **)(e + 0xc));
        } else {
            char *a = fn_826957D0(f, 0);
            Rc_826C9DD0 *rc;
            int frame = -1;
            if (*a == 5) {
                fn_82696D38(&rc, a, f->arg, -1, 0);
                if (s->f11c(rc->obj, &frame, 1) == 0) {
                    Rc_826C9DD0 *r = rc;
                    if (--r->count == 0)
                        fn_826944C8(r);
                    return;
                }
                {
                    Rc_826C9DD0 *r = rc;
                    if (--r->count == 0)
                        fn_826944C8(r);
                }
            } else {
                frame = fn_82697700(a, f->arg);
                frame = frame - 1;
            }
            s->f120(frame);
            s->f124(0);
        }
    }
}
