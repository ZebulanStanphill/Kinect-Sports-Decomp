typedef struct Self_82E1E630 {
    char pad0[0x48];
    void *f48;
} Self_82E1E630;

extern void fn_82E21A00(void *p);
extern void fn_82E21700(void *p, float dt);
extern void fn_82E21AC0(void *p);

void fn_82E1E630(Self_82E1E630 *self, float dt)
{
    fn_82E21A00(self->f48);
    fn_82E21700(self->f48, dt);
    fn_82E21AC0(self->f48);
}
