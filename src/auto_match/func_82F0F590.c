typedef struct Frame_82F0F590 {
    char pad0[0x70];
    int v70[2];      /* 0x70 */
    int v78[2];      /* 0x78 */
    int v80[2];      /* 0x80 */
    int v88[2];      /* 0x88 */
    int v90[2];      /* 0x90 */
    int v98[2];      /* 0x98 */
    char pada0[0x108 - 0xa0];
    int width;        /* 0x108 */
    int height;       /* 0x10c */
    char pad110[0x298 - 0x110];
    char data[4];     /* 0x298 */
} Frame_82F0F590;

typedef struct Self_82F0F590 {
    char pad0[0xaf0];
    int mode;         /* 0xaf0 */
    char padaf4[0x6d5c - 0xaf4];
    int alt;          /* 0x6d5c */
} Self_82F0F590;

extern void fn_82ECA928(Self_82F0F590 *self, int width, int height, char *data, int *a, int *b,
                        int *c, int *d, int *e);
extern void fn_83147640(Self_82F0F590 *self, int width, int height, char *data, int *b, int *c,
                        int *d, int *e);
extern void fn_82ECFE20(Self_82F0F590 *self, int width, int height, char *data, int *a, int *b);

/* runs one of three processing passes over the frame, chosen by the mode;
   the 8-byte members at 0x70-0x98 are of unknown type */
void fn_82F0F590(Self_82F0F590 *self, Frame_82F0F590 *frame)
{
    if (self->mode == 1) {
        if (self->alt != 0) {
            fn_82ECA928(self, frame->width, frame->height, frame->data, frame->v70, frame->v78,
                        frame->v80, frame->v88, frame->v98);
            return;
        }
        fn_83147640(self, frame->width, frame->height, frame->data, frame->v78, frame->v80,
                    frame->v88, frame->v98);
        return;
    }
    fn_82ECFE20(self, frame->width, frame->height, frame->data, frame->v90, frame->v98);
}
