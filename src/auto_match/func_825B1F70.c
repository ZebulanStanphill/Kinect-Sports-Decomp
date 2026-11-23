typedef struct Settings_825B1F70 {
    int initialised; /* 0x0 */
    float f4;        /* 0x4 */
    float f8;        /* 0x8 */
    float fC;        /* 0xc */
    float f10;       /* 0x10 */
    float f14;       /* 0x14 */
    char pad18[0x30 - 0x18];
    float f30; /* 0x30 */
    float f34; /* 0x34 */
    char pad38[0x3c - 0x38];
    int locked; /* 0x3c */
    char pad40[0x5c - 0x40];
    int f5C;   /* 0x5c */
    float f60; /* 0x60 */
    float f64; /* 0x64 */
    float f68; /* 0x68 */
    float f6C; /* 0x6c */
    float f70; /* 0x70 */
    float f74; /* 0x74 */
} Settings_825B1F70;

void fn_825B1F70(Settings_825B1F70 *self)
{
    if (self->locked != 0) {
        return;
    }
    self->initialised = 1;
    self->f5C = 0;
    self->fC = 1.0f;
    self->f10 = 400.0f;
    self->f4 = 0.5f;
    self->f8 = 800.0f;
    self->f14 = 0.8f;
    self->f30 = 0.0f;
    self->f34 = 0.0f;
    self->f60 = 350.0f;
    self->f64 = 700.0f;
    self->f68 = 8.0f;
    self->f6C = 32.0f;
    self->f70 = 4.0f;
    self->f74 = 0.5f;
}
