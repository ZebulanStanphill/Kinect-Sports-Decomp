typedef int (*code)();

typedef struct Obj_822464E8 Obj_822464E8;
typedef struct ObjVt_822464E8 {
    char pad0[0x60];
    void (*f60)(Obj_822464E8 *);
} ObjVt_822464E8;
struct Obj_822464E8 {
    ObjVt_822464E8 *vt;
};

typedef struct Self_822464E8 {
    char pad0[8];
    Obj_822464E8 *obj;       /* 0x08 */
    char pad0c[0x38 - 0x0c];
    void *p38;               /* 0x38 */
    unsigned char b3c;       /* 0x3c */
    char pad3d[3];
    int i40;                 /* 0x40 */
    unsigned char b44;       /* 0x44 */
    char pad45[3];
    void *p48;               /* 0x48 */
    char pad4c[4];
    unsigned char b50;       /* 0x50 */
} Self_822464E8;

typedef struct Inst_822464E8 {
    char pad0[4];
    unsigned char b4;        /* 0x04 */
    char pad5[0x58 - 5];
    void *p58;               /* 0x58 */
} Inst_822464E8;

typedef struct Glob_83265988 {
    void *p;                 /* 0x00 */
    char pad4[0x44 - 4];
    unsigned char b44;       /* 0x44 */
    unsigned char b45;       /* 0x45 */
} Glob_83265988;

typedef struct Glob_832960A0 {
    int a;
    int b;
} Glob_832960A0;

extern void fn_82246748(Self_822464E8 *self, int code);
extern void fn_822467D8(Self_822464E8 *self);
extern void fn_82246970(Self_822464E8 *self);
extern void fn_82246C58(Self_822464E8 *self);
extern int fn_82247000(void *p);
extern Inst_822464E8 *fn_82250A18(void);
extern int fn_823AB470(void *p);
extern void *fn_82512B08(int a, int b);
extern void fn_82512B70(void *p);
extern void fn_82513668(void);
extern unsigned int fn_8289F0B8(Obj_822464E8 *o);
extern unsigned char fn_828ACC40(Obj_822464E8 *o);
extern unsigned char fn_828ACCB0(Obj_822464E8 *o);
extern unsigned char fn_828ACCE8(Obj_822464E8 *o);
extern unsigned char fn_828ACD00(Obj_822464E8 *o);
extern unsigned char fn_828AD740(Obj_822464E8 *o);
extern unsigned char fn_828ADBB8(Obj_822464E8 *o);

extern Glob_83265988 lbl_83265988;
extern Glob_832960A0 lbl_832960A0;
extern Inst_822464E8 *lbl_832975B0;

static __forceinline Inst_822464E8 *GetInst_822464E8(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

static __forceinline unsigned char Check_822464E8(void)
{
    if (lbl_83265988.p != 0 && fn_823AB470(lbl_83265988.p) == 2)
        return 1;
    return 0;
}

void fn_822464E8(Self_822464E8 *self)
{
    int code;

    fn_82513668();
    if (lbl_832960A0.b != 0) {
        return;
    }
    if (self->b50 != 0) {
        fn_82246C58(self);
        self->b50 = 0;
    }
    if (self->b3c != 0) {
        fn_82246748(self, self->i40);
        self->b3c = 0;
        self->i40 = 0;
    }
    if (fn_828ACC40(self->obj) == 0 && fn_828ACCB0(self->obj) == 0) {
        if (fn_828ACCE8(self->obj) != 0) {
            if (fn_828ADBB8(self->obj) == 0) {
                if (lbl_83265988.b45 == 0) {
                    self->obj->vt->f60(self->obj);
                    code = 0x19;
                } else if (lbl_83265988.b44 != 0) {
                    self->obj->vt->f60(self->obj);
                    code = 0x1a;
                } else if (!Check_822464E8()) {
                    code = 0x1b;
                } else {
                    if (self->p38 == 0)
                        goto done;
                    if (self->b44 != 0)
                        fn_82246970(self);
                    else
                        fn_822467D8(self);
                    if (fn_828AD740(self->obj) == 0)
                        goto done;
                    if (fn_82247000(self->p38) != 4)
                        goto done;
                    if (fn_8289F0B8(self->obj) == 2)
                        goto done;
                    self->obj->vt->f60(self->obj);
                    code = 0x22;
                }
                fn_82246748(self, code);
            }
        } else {
            fn_828ACD00(self->obj);
        }
    }
done:
    if (GetInst_822464E8()->b4 != 0 &&
        (fn_828ACCE8(self->obj) != 0 || fn_828ACCB0(self->obj) != 0 ||
         fn_828ACD00(self->obj) != 0)) {
        if (GetInst_822464E8()->p58 == 0) {
            if (self->p48 == 0) {
                self->p48 = fn_82512B08(1, 0);
            }
            return;
        }
    }
    if (self->p48 != 0) {
        fn_82512B70(self->p48);
        self->p48 = 0;
    }
}
