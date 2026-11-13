typedef struct Float3_8239FA00 {
    float x, y, z;
} Float3_8239FA00;

typedef struct Settings_8239FA00 {
    Float3_8239FA00 g[5];   /* 15 camera floats */
} Settings_8239FA00;

typedef struct Table_8239FA00 {
    char pad000[0x17c];
    Settings_8239FA00 settings;     /* 0x17c */
} Table_8239FA00;

typedef struct Self_8239FA00 {
    char pad000[0x240];
    void *owner;                    /* 0x240 */
    Settings_8239FA00 settings;     /* 0x244 */
    char pad280[4];
    Table_8239FA00 *table;          /* 0x284 */
} Self_8239FA00;

extern Table_8239FA00 lbl_831D2980;
extern int fn_82397F30(void *owner);
extern void fn_8239E318(Self_8239FA00 *self);
extern void fn_8239E540(Self_8239FA00 *self);

static __forceinline void CopyFloat3(Float3_8239FA00 *dst, const Float3_8239FA00 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static __forceinline void Copy(Settings_8239FA00 *dst, const Settings_8239FA00 *src)
{
    CopyFloat3(&dst->g[0], &src->g[0]);
    CopyFloat3(&dst->g[1], &src->g[1]);
    CopyFloat3(&dst->g[2], &src->g[2]);
    CopyFloat3(&dst->g[3], &src->g[3]);
    CopyFloat3(&dst->g[4], &src->g[4]);
}

void fn_8239FA00(Self_8239FA00 *self)
{
    if (fn_82397F30(self->owner) != 0) {
        Copy(&self->settings, &lbl_831D2980.settings);
        self->table = &lbl_831D2980;
    } else {
        fn_8239E318(self);
    }
    fn_8239E540(self);
}
