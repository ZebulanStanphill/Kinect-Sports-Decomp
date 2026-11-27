#include "xdk/vectorintrinsics.h"

typedef struct Config_823D0FF8 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823D0FF8;

typedef struct Self_823D0FF8 {
    char pad0[0x84];
    void *target; /* 0x084 */
    char pad88[0x44];
    int key; /* 0x0cc */
    char padD0[0x8d0];
    int busy; /* 0x9a0 */
    char pad9A4[0x3ad];
    unsigned char disabled; /* 0xd51 */
} Self_823D0FF8;

typedef struct Sp_823D0FF8 {
    void *px;
    void *rep;
} Sp_823D0FF8;

typedef struct IndexList_823D0FF8 {
    int count;      /* 0x0 */
    int indices[7]; /* 0x4 */
} IndexList_823D0FF8;

typedef struct Params_823D0FF8 {
    IndexList_823D0FF8 first;  /* 0x0 */
    IndexList_823D0FF8 second; /* 0x20 */
    int field40;               /* 0x40 */
    int field44;               /* 0x44 */
    int field48;               /* 0x48 */
} Params_823D0FF8;

typedef struct Command_823D0FF8 {
    Params_823D0FF8 params; /* 0x00 */
    __vector4 a;            /* 0x50 */
    __vector4 b;            /* 0x60 */
    int key;                /* 0x70 */
    unsigned char enabled;  /* 0x74 */
} Command_823D0FF8;

extern Config_823D0FF8 *lbl_832975B0;
extern Config_823D0FF8 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823D0FF8 *fn_822EFBF0(Sp_823D0FF8 *out, void *target);
extern void fn_82250D10(Params_823D0FF8 *params);
extern void fn_823E7368(Self_823D0FF8 *self, Command_823D0FF8 *command, __vector4 a, __vector4 b);
extern void fn_823D1138(Self_823D0FF8 *self, Command_823D0FF8 *command);
extern void fn_823EB078(void *target, Command_823D0FF8 *command);

static __forceinline Config_823D0FF8 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

int fn_823D0FF8(Self_823D0FF8 *self, int key, __vector4 a, __vector4 b)
{
    Command_823D0FF8 command;
    Sp_823D0FF8 sp;
    void *target;

    if (self->busy == 0) {
        fn_82250D10(&command.params);
        command.a = __VMXGetReg(77);
        command.b = __VMXGetReg(77);
        command.key = -1;
        fn_823E7368(self, &command, a, b);
        command.key = key;
        command.a = a;
        command.b = b;
        command.enabled = self->disabled == 0;
        if (GetConfig()->enabled) {
            target = self->target;
            if (target != 0 && self->key == key) {
                fn_823EB078(fn_822EFBF0(&sp, target)->px, &command);
                if (sp.rep != 0) {
                    fn_822315A0(sp.rep);
                }
            }
        } else {
            fn_823D1138(self, &command);
        }
        return 1;
    }
    return 0;
}
