typedef struct Obj_82486BC0 Obj_82486BC0;

typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    void (*f14)(Obj_82486BC0 *self);
} Vtbl_82486BC0;

struct Obj_82486BC0 {
    Vtbl_82486BC0 *vt;
    int state;
    int unk8;
    float startTime;
};

extern float fn_82522FF0(void);
extern void fn_82486CA8(int state, void *out);
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int a, int b);
extern unsigned char fn_82E1CAD0(int a);
extern void fn_82E1CB08(const char *name, void *value, int c);
extern void fn_82E1CC60(const char *name, float value);
extern void fn_82E1CCA8(void);

void fn_82486BC0(Obj_82486BC0 *param_1, int param_2)
{
    float duration;
    char oldState[32];
    char newState[32];

    duration = fn_82522FF0() - param_1->startTime;
    fn_82486CA8(param_1->state, oldState);
    fn_82486CA8(param_2, newState);
    if (*fn_8225F670() != 0) {
        if (fn_8225FDE0(0x62, 1) == 0 && fn_82E1CAD0(0x62) != 0) {
            fn_82E1CB08("OldState", oldState, 0);
            fn_82E1CB08("NewState", newState, 0);
            fn_82E1CC60("Duration", duration);
            fn_82E1CCA8();
        }
    }
    param_1->vt->f14(param_1);
}
