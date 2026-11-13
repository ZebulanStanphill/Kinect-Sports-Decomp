typedef struct Tmp_8227B548 {
    int pad0;
    unsigned rc;
} Tmp_8227B548;
typedef struct Obj_8227B548 {
    char pad0[0xa48];
    int m48;
    float m4c;
    int pad50;
    int m54;
    char pad58[8];
    int m60;
} Obj_8227B548;

extern int *fn_82279C58(Tmp_8227B548 *, Obj_8227B548 *);
extern void fn_82672C20(int, const char *, int, int);
extern void fn_822315A0(unsigned);

void fn_8227B548(Obj_8227B548 *o)
{
    Tmp_8227B548 t;

    if (o->m48 != 0) {
        if (o->m60 == 0) {
            fn_82672C20(*fn_82279C58(&t, o), "_root.mainCtrl.show", 0, 0);
            if (t.rc != 0) {
                fn_822315A0(t.rc);
            }
            o->m48 = 1;
            o->m4c = 0.0f;
        }
    } else {
        o->m54 = 1;
    }
}
