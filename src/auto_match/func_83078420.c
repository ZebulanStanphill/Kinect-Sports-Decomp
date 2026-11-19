/* While the body (fn_8306D760) is not active the state resets to
   mode 0x1e with its current box copied into the target box and unit scales; otherwise the state
   steps by the time (fn_83077AA8) unless fn_8306D830 says it is settled. Then fn_83077208. */
typedef struct State_83078420 {
    char pad0[0x10];
    void *body; /* 0x10 */
    char pad14[4];
    float x;      /* 0x18 */
    float y;      /* 0x1c */
    float width;  /* 0x20 */
    float height; /* 0x24 */
    float depth;  /* 0x28 */
    char pad2c[0x68 - 0x2c];
    float targetX;       /* 0x68 */
    float targetY;       /* 0x6c */
    float minimumWidth;  /* 0x70 */
    float maximumWidth;  /* 0x74 */
    float minimumHeight; /* 0x78 */
    float maximumHeight; /* 0x7c */
    float targetDepth;   /* 0x80 */
    int mode;            /* 0x84 */
    float scaleZ;        /* 0x88 */
    float scaleX;        /* 0x8c */
    float scaleY;        /* 0x90 */
} State_83078420;

extern unsigned char fn_8306D760(void *body);
extern unsigned char fn_8306D830(void *body);
extern void fn_83077AA8(State_83078420 *self, float time);
extern void fn_83077208(State_83078420 *self, int immediate);

void fn_83078420(State_83078420 *self, float time, unsigned char keep)
{
    int immediate;

    if (fn_8306D760(self->body)) {
        if (!fn_8306D830(self->body))
            fn_83077AA8(self, time);
        immediate = keep == 0;
    } else {
        immediate = 1;
        self->mode = 0x1e;
        self->targetX = self->x;
        self->targetY = self->y;
        self->minimumWidth = self->width;
        self->maximumWidth = self->width;
        self->minimumHeight = self->height;
        self->maximumHeight = self->height;
        self->targetDepth = self->depth;
        self->scaleX = 1.0f;
        self->scaleY = 1.0f;
        self->scaleZ = 1.0f;
    }
    fn_83077208(self, immediate);
}
