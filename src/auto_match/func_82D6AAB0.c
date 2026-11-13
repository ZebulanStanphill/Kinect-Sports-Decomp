typedef struct Funcs_82D6A198 {
    void *create;
    void *penetrations;
    void *closest;
    void *cast;
    unsigned char flipped;
    unsigned char predictive;
} Funcs_82D6A198;

extern void fn_82D59158(void *dispatcher, Funcs_82D6A198 *funcs, int a, int b);
extern void fn_82D6A888(void);
extern void fn_82D6A7C8(void);
extern void fn_82D6A7F0(void);
extern void fn_82D6A800(void);

void fn_82D6AAB0(void *dispatcher)
{
    Funcs_82D6A198 funcs;

    funcs.flipped = 0;
    funcs.create = (void *)fn_82D6A888;
    funcs.penetrations = (void *)fn_82D6A7C8;
    funcs.closest = (void *)fn_82D6A7F0;
    funcs.cast = (void *)fn_82D6A800;
    funcs.predictive = 1;
    fn_82D59158(dispatcher, &funcs, 0x1e, -1);
    fn_82D59158(dispatcher, &funcs, -1, 0x1e);
}
