typedef struct Target_828ADCE8 Target_828ADCE8;

typedef struct TargetVtbl_828ADCE8 {
    void *slots[3];
    void (*start)(Target_828ADCE8 *self, int a2, int a6, int a7, int a8, unsigned char a12, unsigned char a13,
                  unsigned char a14, unsigned char a15, unsigned char flag, unsigned char a16,
                  unsigned char a17, unsigned char a18, int time, int clock, unsigned char a20,
                  unsigned char a21); /* 0xc */
} TargetVtbl_828ADCE8;

struct Target_828ADCE8 {
    TargetVtbl_828ADCE8 *vt;
};

typedef struct Obj_828ADCE8 {
    char pad0[0x60];
    char sub60[0x24];        /* 0x60 */
    int state;               /* 0x84 */
    char pad88[4];           /* 0x88 */
    Target_828ADCE8 *target; /* 0x8c */
    char pad90[0xc];         /* 0x90 */
    unsigned char active;    /* 0x9c */
} Obj_828ADCE8;

extern void fn_828ADBE0(Obj_828ADCE8 *self, unsigned char a, unsigned char b, unsigned char c, int d, int e,
                        int obj, unsigned char g);
extern void fn_828ECFB8(Target_828ADCE8 *target, int a2, int a6, int a7, int a8, unsigned char a20,
                        unsigned char a21);
extern int fn_82610EF0(void *clock);
extern int fn_823AA2A8(void *clock);
extern void fn_828ACDB8(Obj_828ADCE8 *self, int value);

int fn_828ADCE8(Obj_828ADCE8 *self, int a2, int a3, int a4, int state, int a6, int a7, int a8,
                unsigned char a9, unsigned char a10, unsigned char direct, unsigned char a12,
                unsigned char a13, unsigned char a14, unsigned char a15, unsigned char a16, unsigned char a17,
                unsigned char a18, int a19, unsigned char a20, unsigned char a21, unsigned char a22)
{
    fn_828ADBE0(self, a9, a10, 0, a3, a4, a19, a22);
    self->active = 1;
    if (direct == 0) {
        fn_828ECFB8(self->target, a2, a6, a7, a8, a20, a21);
        fn_828ACDB8(self, 1);
        self->state = state;
        return 1;
    } else {
        Target_828ADCE8 *target = self->target;

        target->vt->start(target, a2, a6, a7, a8, a12, a13, a14, a15, 1, a16, a17, a18,
                          fn_823AA2A8(self->sub60), fn_82610EF0(self->sub60), a20, a21);

        fn_828ACDB8(self, 1);
        self->state = state;
        return 1;
    }
}
