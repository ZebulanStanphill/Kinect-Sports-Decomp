typedef struct Float3_8239E110 {
    float x;
    float y;
    float z;
} Float3_8239E110;

typedef struct Settings_8239E110 {
    Float3_8239E110 g[5]; /* 15 camera floats */
} Settings_8239E110;

typedef struct Table_8239E110 {
    char pad000[0x1b8];
    char alternate[0xb8]; /* 0x1b8 */
} Table_8239E110;

typedef struct Camera_8239E110 {
    void *vtable; /* 0x000 */
    char pad004[0x23c];
    void *owner;                /* 0x240 */
    Settings_8239E110 settings; /* 0x244 */
    void *alternate;            /* 0x280 */
    Table_8239E110 *table;      /* 0x284 */
    int enabled;                /* 0x288 */
    int state;                  /* 0x28c */
    char pad290[0x4];
    int special; /* 0x294 */
    int timer;   /* 0x298 */
    char pad29c[0x4];
    int targetIds[5]; /* 0x2a0 */
    char pad2b4[0x10];
    int current;      /* 0x2c4 */
    void *targets[4]; /* 0x2c8 */
} Camera_8239E110;

extern char lbl_821B51E8[];
extern Table_8239E110 lbl_831D2980;

extern void fn_82366908(Camera_8239E110 *self, void *parent, const char *name);
extern void *XMemSet(void *dest, int value, unsigned int count);
extern void fn_8239E318(Camera_8239E110 *self);
extern void *fn_8251F720(void *id, int flags);

Camera_8239E110 *fn_8239E110(Camera_8239E110 *self, void *owner, void *parent, int target0, int target1,
                             int target2, int target3, int target4)
{
    fn_82366908(self, parent, "Table Tennis Camera");
    self->owner = owner;
    self->state = 0;
    self->vtable = lbl_821B51E8;
    XMemSet(&self->settings, 0, sizeof(self->settings));
    self->special = 0;
    self->timer = 0;
    self->enabled = 1;
    self->table = &lbl_831D2980;
    self->alternate = lbl_831D2980.alternate;
    fn_8239E318(self);
    self->targetIds[0] = target0;
    self->current = -1;
    self->targetIds[1] = target1;
    self->targetIds[2] = target2;
    self->targetIds[3] = target3;
    self->targetIds[4] = target4;
    self->targets[0] = fn_8251F720(&self->targetIds[0], 0);
    self->targets[1] = fn_8251F720(&self->targetIds[1], 0);
    self->targets[2] = fn_8251F720(&self->targetIds[2], 0);
    self->targets[3] = fn_8251F720(&self->targetIds[3], 0);
    return self;
}
