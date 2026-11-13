typedef struct Obj_825E48D0 {
    char pad0[0x70];
    int cam;                 /* 0x70 */
    char pad74[0x1f0 - 0x74];
    int active;              /* 0x1f0 */
    int pad1f4;
    int enabled;             /* 0x1f8 */
} Obj_825E48D0;

extern void fn_825603C8(int a, int *cam, int c);
extern void fn_825604A0(int *cam);
extern void fn_825605B0(int a, const char *name);
extern void fn_82592238(Obj_825E48D0 *o, int *msg);

void fn_825E48D0(Obj_825E48D0 *o, int *msg)
{
    switch (*msg) {
    case 0x52:
        if (o->enabled != 0 && o->active != 0) {
            fn_825604A0(&o->cam);
            o->active = 0;
        }
        break;
    case 0x53:
        if (o->enabled != 0 && o->active == 0) {
            fn_825603C8(0, &o->cam, 0);
            fn_825605B0(0, "UI Cam");
            o->active = 1;
        }
        break;
    }
    fn_82592238(o, msg);
}
