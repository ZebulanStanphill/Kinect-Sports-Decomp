typedef struct Obj_82FBA370 Obj_82FBA370;

typedef struct Vtbl_82FBA370 {
    void *pad[5];
    int (*get)(Obj_82FBA370 *, void *, unsigned int);
} Vtbl_82FBA370;

struct Obj_82FBA370 {
    Vtbl_82FBA370 *vt;      /* 0x0 */
    int mode1;              /* 0x4 */
    float a;                /* 0x8 */
    float b;                /* 0xc */
    float c;                /* 0x10 */
    unsigned char enabled1; /* 0x14 */
    int mode2;              /* 0x18 */
    float d;                /* 0x1c */
    float e;                /* 0x20 */
    float f;                /* 0x24 */
    unsigned char enabled2; /* 0x28 */
    int mode3;              /* 0x2c */
    float g;                /* 0x30 */
    float h;                /* 0x34 */
    float i;                /* 0x38 */
    unsigned char enabled3; /* 0x3c */
    float j;                /* 0x40 */
    unsigned char enabled4; /* 0x44 */
    char pad45[3];
    unsigned char enabled5; /* 0x48 */
    unsigned char enabled6; /* 0x49 */
    unsigned char enabled7; /* 0x4a */
};

extern float lbl_82015BD8;
extern float lbl_8200D8C4;
extern float lbl_8200D8A8;
extern float lbl_82089FC0;

int fn_82FBA370(Obj_82FBA370 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->mode1 = 4;
        self->a = 0.0f;
        self->enabled1 = 1;
        self->b = 120.0f;
        self->c = 5.0f;
        self->mode2 = 6;
        self->d = 0.0f;
        self->enabled2 = 1;
        self->e = 2000.0f;
        self->mode3 = 5;
        self->f = 5.0f;
        self->enabled3 = 1;
        self->g = 0.0f;
        self->enabled4 = 1;
        self->h = 5000.0f;
        self->enabled5 = 1;
        self->i = 5.0f;
        self->enabled6 = 1;
        self->j = 0.0f;
        self->enabled7 = 1;
        return 1;
    }
    return self->vt->get(self, data, size);
}
