typedef struct Sub_82355ED8 { char pad[0x30]; int *begin; int *end; } Sub_82355ED8;
typedef struct VtA_82355ED8 { int pad[9]; void (*f24)(void *); } VtA_82355ED8;
typedef struct A_82355ED8 { VtA_82355ED8 *vt; char pad[0x30 - 4]; int *begin; int *end; } A_82355ED8;
typedef struct Glob_82355ED8 { char pad[0x20]; int f20; } Glob_82355ED8;
typedef struct B_82355ED8 { char pad[0x84c]; int f84c; char pad2[0x8c8 - 0x850]; unsigned f8c8; } B_82355ED8;
typedef struct Item_82355ED8 { char pad[0x20]; char f20[4]; char pad2[0x22c - 0x24]; int f22c; } Item_82355ED8;
typedef struct Obj_82355ED8 {
    char pad[0x14];
    B_82355ED8 *b;
    A_82355ED8 *a;
    char pad2[0x2ac - 0x1c];
    int *p2ac;
    char pad3[0x350 - 0x2b0];
    int f350;
    char pad4[0x3a8 - 0x354];
    int f3a8;
    int f3ac;
} Obj_82355ED8;
extern float lbl_82192604;
extern float lbl_821CA45C[];
extern unsigned lbl_832765BC;
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern void fn_825604A0(void *);
extern void fn_823545A8(Obj_82355ED8 *);
extern Glob_82355ED8 *fn_82292AE8(void);
extern void fn_82292BC0(int, int, int);
extern void fn_82292C30(int);
extern void fn_8254EDB0(int, int, float, float);
extern int fn_82535298(int *, int, char *, char *);
extern void fn_82672C20(int, const char *, int, int);
void fn_82355ED8(Obj_82355ED8 *o)
{
    A_82355ED8 *a;
    int *p;
    unsigned rc;
    int stk[4];
    if (o->f350 != 0) {
        a = o->a;
        for (p = a->begin; p != a->end; p += 2) {
            Item_82355ED8 *it = (Item_82355ED8 *)*p;
            if (it->f22c != 0) {
                fn_825604A0(it->f20);
                it->f22c = 0;
            }
        }
        o->f350 = 0;
    }
    fn_823545A8(o);
    if (o->a != 0) o->a->vt->f24(o->a);
    if (fn_82292AE8()->f20 == 0 && lbl_832765BC == 0) {
        fn_82292BC0(0, 0, 0);
        fn_82292C30(5);
    }
    rc = o->b->f8c8;
    if (rc != 0) fn_8254EDB0(rc, 0, lbl_82192604, lbl_821CA45C[1]);
    if (&o->f3a8 != 0 ? o->f3a8 != 0 : 0) {
        stk[0] = o->f3a8;
        o->f3ac = fn_82535298(stk, o->b->f84c, lbl_83296BC0, lbl_83296BD0);
    }
    p = o->p2ac;
    if (p != 0 && *p != 1) {
        *p = 1;
        fn_82672C20(p[2], "_root.transOut", 0, 0);
    }
}
