typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Config_823369B0 {
    char pad00[0x4c];
    int width;  /* 0x4c */
    int height; /* 0x50 */
    int depth;  /* 0x54 */
} Config_823369B0;

typedef struct Grid_823369B0 {
    float x;            /* 0x000 */
    float y;            /* 0x004 */
    int pad008[2];      /* 0x008 */
    int count10;        /* 0x010 */
    int count14;        /* 0x014 */
    int count18;        /* 0x018 */
    int count1C;        /* 0x01c */
    int count20;        /* 0x020 */
    int count24;        /* 0x024 */
    int count28;        /* 0x028 */
    int count2C;        /* 0x02c */
    int width;          /* 0x030 */
    int height;         /* 0x034 */
    int depth;          /* 0x038 */
    int value3C;        /* 0x03c */
    int value40;        /* 0x040 */
    unsigned char flag; /* 0x044 */
    float scale;        /* 0x048 */
    float blend;        /* 0x04c */
    __vector4 origin;   /* 0x050 */
    char pad060[0x180 - 0x60];
    int value180; /* 0x180 */
    int value184; /* 0x184 */
    int enabled;  /* 0x188 */
    int value18C; /* 0x18c */
    float timer;  /* 0x190 */
    char list[4]; /* 0x194 */
    int value198; /* 0x198 */
} Grid_823369B0;

extern void fn_82340138(void *list);

Grid_823369B0 *fn_823369B0(Grid_823369B0 *self, int unused, Config_823369B0 *config)
{
    self->x = 0.0f;
    self->y = 0.0f;
    self->count10 = 0;
    self->count14 = 0;
    self->count18 = 0;
    self->count1C = 0;
    self->count20 = 0;
    self->count24 = 0;
    self->count28 = 0;
    self->count2C = 0;
    self->value3C = 0;
    self->value40 = 0;
    self->flag = 0;
    self->scale = 5.0f;
    self->blend = 0.5f;
    self->origin = __VMXGetReg(77);
    self->value180 = 0;
    self->value184 = 0;
    self->enabled = 1;
    self->value18C = 0;
    self->timer = 0.0f;
    fn_82340138(self->list);
    self->value198 = 0;
    self->width = config->width;
    self->height = config->height;
    self->depth = config->depth;
    return self;
}
