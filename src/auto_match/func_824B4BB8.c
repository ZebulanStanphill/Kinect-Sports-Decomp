typedef struct V3_824B4BB8 {
    int a, b, c;
} V3_824B4BB8;
typedef struct Obj_824B4BB8 {
    void *vt;
    char pad[0x44];
    float f48;
    V3_824B4BB8 v;
} Obj_824B4BB8;
extern void *fn_8265C9E0(int);
extern void fn_824B4310(void *, void *);
extern char lbl_821C022C[];
extern V3_824B4BB8 lbl_821CA1A0;
extern float lbl_821CC160;

Obj_824B4BB8 *fn_824B4BB8(void *param_1)
{
    Obj_824B4BB8 *p = (Obj_824B4BB8 *)fn_8265C9E0(0x58);
    if (p != 0) {
        float f;
        fn_824B4310(p, param_1);
        f = lbl_821CC160;
        p->vt = lbl_821C022C;
        p->f48 = f;
        p->v = lbl_821CA1A0;
        return p;
    }
    return 0;
}
