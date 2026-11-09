typedef struct Funcs_82D6A198 {
    void *create;
    void *penetrations;
    void *closest;
    void *cast;
    unsigned char flipped;
    unsigned char predictive;
} Funcs_82D6A198;

extern void fn_82D59158(void *dispatcher, Funcs_82D6A198 *funcs, int a, int b);
extern void fn_82D6A0E8(void);
extern void fn_82D74E60(void);
extern void fn_82D75010(void);
extern void fn_82D75FD0(void);

void fn_82D6A198(void *dispatcher)
{
    Funcs_82D6A198 funcs;

    funcs.create = (void *)fn_82D6A0E8;
    funcs.penetrations = (void *)fn_82D74E60;
    funcs.closest = (void *)fn_82D75010;
    funcs.cast = (void *)fn_82D75FD0;
    funcs.flipped = 0;
    funcs.predictive = 1;
    fn_82D59158(dispatcher, &funcs, 0x12, 0x12);
}
