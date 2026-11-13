typedef struct Settings_824CCC68 {
    int pad0;
    unsigned char enabled;
} Settings_824CCC68;

typedef struct Flag_824CCC68 Flag_824CCC68;
typedef struct FlagVt_824CCC68 {
    void *s[15];
    unsigned char (*get)(Flag_824CCC68 *self);   /* 0x3c */
} FlagVt_824CCC68;
struct Flag_824CCC68 {
    FlagVt_824CCC68 *vt;
};

typedef struct Target_824CCC68 Target_824CCC68;
typedef struct TargetVt_824CCC68 {
    void *s0;
    char *(*owner)(Target_824CCC68 *self);       /* 0x04 */
    char *(*world)(Target_824CCC68 *self);       /* 0x08 */
} TargetVt_824CCC68;
struct Target_824CCC68 {
    TargetVt_824CCC68 *vt;
};

typedef struct Obj_824CCC68 Obj_824CCC68;
typedef struct ObjVt_824CCC68 {
    void *s[5];
    int (*isActive)(Obj_824CCC68 *self);         /* 0x14 */
} ObjVt_824CCC68;
struct Obj_824CCC68 {
    ObjVt_824CCC68 *vt;
    int pad4[4];
    Target_824CCC68 *target;                     /* 0x14 */
    int pad18[2];
    int mode;                                    /* 0x20 */
    int pad24[44];
    int state;                                   /* 0xd4 */
};

extern Settings_824CCC68 *lbl_832975B0;
extern Settings_824CCC68 *fn_82250A18(void);
extern void fn_824CDAE8(Target_824CCC68 *target, int mode, float dt);
extern int fn_824CD030(Obj_824CCC68 *self);
extern unsigned char fn_8288B760(Target_824CCC68 *target);
extern void fn_828AAF70(void *list, unsigned char on);

void fn_824CCC68(Obj_824CCC68 *self, float dt)
{
    Target_824CCC68 *target;
    int state;

    if ((lbl_832975B0 ? lbl_832975B0 : fn_82250A18())->enabled == 0) {
        return;
    }
    target = self->target;
    if (target == 0) {
        return;
    }
    if (self->vt->isActive(self) != 0) {
        fn_824CDAE8(target, self->mode, dt);
    }
    if (fn_824CD030(self) != 0) {
        state = self->state;
        if (fn_8288B760(target)) {
            char *world = target->vt->world(target);
            fn_828AAF70(world + 0x7d4, state != 0);
        }
    } else {
        Flag_824CCC68 *flag = (Flag_824CCC68 *)(target->vt->owner(target) + 0x7d4);
        self->state = flag->vt->get(flag);
    }
}
