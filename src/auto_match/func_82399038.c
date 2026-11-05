typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Obj_82399038 {
    char pad[0x28];
    int playerId;
    int teamId;
    char pad2[0x80 - 0x30];
    __vector4 pos;
} Obj_82399038;
extern unsigned lbl_831C996C;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, unsigned);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);
void fn_82399038(Obj_82399038 *o)
{
    unsigned counter = lbl_831C996C;
    int pid = o->playerId;
    int tid = o->teamId;
    __vector4 pos = o->pos;
    if (*fn_8225F670() != 0) {
        if (fn_8225FDE0(0x1c, 1) == 0 && fn_82E1CAD0(0x1c) != 0) {
            fn_82E1CB88("MatchCounter", counter);
            fn_8225FCE8("PlayerPosition", pos);
            fn_82E1CB88("TeamId", tid);
            fn_82E1CB88("PlayerId", pid);
            fn_82E1CCA8();
        }
    }
}
