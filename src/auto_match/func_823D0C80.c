#include "xdk/vectorintrinsics.h"

typedef struct Config_823D0C80 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823D0C80;

typedef struct Self_823D0C80 {
    char pad0[0x84];
    void *target; /* 0x084 */
    char pad88[0x438];
    void *body; /* 0x4c0 */
    char pad4C4[0x4dc];
    int busy; /* 0x9a0 */
} Self_823D0C80;

typedef struct Other_823D0C80 {
    char pad0[0xbd0];
    __vector4 position; /* 0xbd0 */
    char padBE0[0x50];
    __vector4 velocity; /* 0xc30 */
} Other_823D0C80;

typedef struct Sp_823D0C80 {
    void *px;
    void *rep;
} Sp_823D0C80;

typedef struct IndexList_823D0C80 {
    int count;      /* 0x0 */
    int indices[7]; /* 0x4 */
} IndexList_823D0C80;

typedef struct Params_823D0C80 {
    IndexList_823D0C80 first;  /* 0x0 */
    IndexList_823D0C80 second; /* 0x20 */
    int field40;               /* 0x40 */
    int field44;               /* 0x44 */
    int field48;               /* 0x48 */
} Params_823D0C80;

typedef struct Command_823D0C80 {
    Params_823D0C80 params; /* 0x00 */
    __vector4 a;            /* 0x50 */
    __vector4 b;            /* 0x60 */
    __vector4 c;            /* 0x70 */
    unsigned int index;     /* 0x80 */
} Command_823D0C80;

/* The vectors come before the command: the callee compiles the same either way, but only this order
   gives this caller its 0x150-byte frame. */

extern Config_823D0C80 *lbl_832975B0;
extern Config_823D0C80 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823D0C80 *fn_822EFBF0(Sp_823D0C80 *out, void *target);
extern void fn_82250D10(Params_823D0C80 *params);
extern void fn_823E7788(Self_823D0C80 *self, __vector4 a, __vector4 b, __vector4 c,
                        Command_823D0C80 *command);
extern void fn_823D0DD8(Self_823D0C80 *self, Command_823D0C80 *command);
extern void fn_823EAF68(void *target, Command_823D0C80 *command);
extern void fn_824FE498(Other_823D0C80 *other, __vector4 a);

static __forceinline Config_823D0C80 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

int fn_823D0C80(Self_823D0C80 *self, Other_823D0C80 *other, __vector4 a, __vector4 b, __vector4 c)
{
    Command_823D0C80 command;
    Sp_823D0C80 sp;
    void *target;

    if (self->busy == 0) {
        fn_82250D10(&command.params);
        command.a = __VMXGetReg(77);
        command.b = __VMXGetReg(77);
        command.c = __VMXGetReg(77);
        fn_823E7788(self, a, b, c, &command);
        if (GetConfig()->enabled) {
            target = self->target;
            if (target != 0) {
                fn_823EAF68(fn_822EFBF0(&sp, target)->px, &command);
                if (sp.rep != 0) {
                    fn_822315A0(sp.rep);
                }
            }
        } else {
            if (self->body != 0) {
                fn_824FE498(other, command.a);
                other->position = command.c;
                other->velocity = __VMXGetReg(77);
            }
            fn_823D0DD8(self, &command);
        }
        return 1;
    }
    return 0;
}
