typedef struct Obj_82628DF0 {
    char pad[0xc];
    int id;               /* 0x0c */
    int arg;              /* 0x10 */
    int active;           /* 0x14 */
} Obj_82628DF0;

extern void *lbl_8326B7C8;
extern void fn_827DBA00(void *mgr, int id, int zero, int a, int b, int c, int d, int e,
                        int arg, int f, int g, int h);

void fn_82628DF0(Obj_82628DF0 *self, int a, int b, int c, int d, int e, int f, int g)
{
    if (self->active != 0) {
        fn_827DBA00(lbl_8326B7C8, self->id, 0, a, b, c, d, e, self->arg, f, g, 0);
    }
}
