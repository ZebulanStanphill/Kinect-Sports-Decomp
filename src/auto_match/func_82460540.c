typedef struct Info_82460540 {
    char pad0[0x3c];
    float x; /* 0x3c */
    float y; /* 0x40 */
    float pad44;
    float z; /* 0x48 */
} Info_82460540;

typedef struct View_82460540 {
    char pad0[0x3fc];
    void *target; /* 0x3fc */
    char pad400[0x70];
    float x; /* 0x470 */
    float y; /* 0x474 */
} View_82460540;

typedef struct Owner_82460540 {
    char pad0[0x28];
    Info_82460540 *info; /* 0x28 */
    char pad2C[0x8];
    int id;              /* 0x34 */
    View_82460540 *view; /* 0x38 */
} Owner_82460540;

extern double __fctid(double);
extern double __fcfid(double);
extern void fn_8265CA20(void *p);
extern Info_82460540 *fn_82467200(int id);
extern void fn_82469800(void *target, unsigned int x, unsigned int y, unsigned int z);

static __forceinline float RoundDown(float value)
{
    return (float)__fcfid(__fctid(value - 0.49999999));
}

void fn_82460540(Owner_82460540 *self)
{
    Info_82460540 *info;
    View_82460540 *view;
    float x;
    float y;
    float z;

    if (self->info != 0) {
        fn_8265CA20(self->info);
        self->info = 0;
    }
    info = fn_82467200(self->id);
    self->info = info;
    z = info->z;
    y = info->y;
    view = self->view;
    x = info->x;
    view->x = x;
    view->y = y;
    fn_82469800(view->target, (unsigned int)RoundDown(x), (unsigned int)RoundDown(y),
                (unsigned int)RoundDown(z));
}
