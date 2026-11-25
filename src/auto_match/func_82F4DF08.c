typedef struct Voice_82F4DF08 {
    char data[0x30];
} Voice_82F4DF08;

typedef struct State_82F4DF08 {
    unsigned char ready; /* 0x0000 */
    char pad1[3];
    char header[0x3c];    /* 0x0004 */
    char banks[4][0xab0]; /* 0x0040 */
    unsigned int f2b00;   /* 0x2b00 */
    unsigned int f2b04;   /* 0x2b04 */
    unsigned int f2b08;   /* 0x2b08 */
    char f2b0c[0x1c];     /* 0x2b0c */
    int f2b28;            /* 0x2b28 */
    unsigned int f2b2c;   /* 0x2b2c */
    float level;          /* 0x2b30 */
    char pad2b34[0x1c];
    int f2b50; /* 0x2b50 */
    char pad2b54[4];
    Voice_82F4DF08 voices[6]; /* 0x2b58 */
    char tableA[0x1c];        /* 0x2c78 */
    unsigned int f2c94;       /* 0x2c94 */
    char pad2c98[8];
    char tableB[0xd0];  /* 0x2ca0 */
    unsigned int flags; /* 0x2d70 */
    float a;            /* 0x2d74 */
    float c;            /* 0x2d78 */
    float b;            /* 0x2d7c */
    float d;            /* 0x2d80 */
    float e;            /* 0x2d84 */
    unsigned int f2d88; /* 0x2d88 */
    unsigned int f2d8c; /* 0x2d8c */
    char f2d90[0x20];   /* 0x2d90 */
    unsigned int f2db0; /* 0x2db0 */
    unsigned int f2db4; /* 0x2db4 */
    unsigned int f2db8; /* 0x2db8 */
    int f2dbc;          /* 0x2dbc */
    int f2dc0;          /* 0x2dc0 */
    unsigned int f2dc4; /* 0x2dc4 */
    int f2dc8;          /* 0x2dc8 */
    char f2dcc[0x18];   /* 0x2dcc */
    unsigned int f2de4; /* 0x2de4 */
    float f2de8;        /* 0x2de8 */
    char f2dec[0x1c];   /* 0x2dec */
} State_82F4DF08;

extern const float lbl_8200D8B4;
extern void *memset(void *dst, int value, unsigned int size);
extern Voice_82F4DF08 *fn_82F4D3E8(Voice_82F4DF08 *voice);
extern void fn_824B4288(void *p, unsigned int size);

State_82F4DF08 *fn_82F4DF08(State_82F4DF08 *self)
{
    int i;
    Voice_82F4DF08 *voice;

    self->ready = 0;
    self->f2b00 = 0;
    self->f2b04 = 0;
    self->f2b08 = 0;
    memset(self->f2b0c, 0, 0x1c);
    self->f2b2c = 0;
    self->f2b50 = 2;
    self->level = lbl_8200D8B4;
    voice = self->voices;
    i = 5;
    do {
        fn_82F4D3E8(voice);
        voice++;
        i--;
    } while (i >= 0);
    self->f2c94 = 0;
    self->flags = 0;
    self->f2d88 = 0;
    self->f2d8c = 0;
    self->f2db0 = 0;
    self->a = 0.0f;
    self->f2db4 = 0;
    self->c = 0.0f;
    self->f2db8 = 0;
    self->f2dbc = 1;
    self->b = 0.0f;
    self->f2dc0 = 1;
    self->d = 0.0f;
    self->f2dc4 = 0;
    self->e = 0.0f;
    self->f2dc8 = 1;
    self->f2de8 = 0.0f;
    self->f2de4 = 0;
    memset(self->f2dec, 0, 0x1c);
    fn_824B4288(self->banks[3], 0xab0);
    fn_824B4288(self->banks[2], 0xab0);
    fn_824B4288(self->banks[1], 0xab0);
    fn_824B4288(self->banks[0], 0xab0);
    fn_824B4288(self->header, 0x3c);
    fn_824B4288(self->tableA, 0x1c);
    fn_824B4288(self->tableB, 0xd0);
    fn_824B4288(self->f2d90, 0x20);
    fn_824B4288(self->f2dcc, 0x18);
    self->f2b28 = 6;
    return self;
}
