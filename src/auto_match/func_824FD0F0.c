typedef struct ModelDesc_824FD0F0 {
    char pad0[0x4b];
    char name[0x39]; /* 0x4b */
    int owner;       /* 0x84 */
    char pad88[0x28];
    float scale; /* 0xb0 */
    char padb4[0x20];
    int resource; /* 0xd4 */
    char padd8[0x4f0];
} ModelDesc_824FD0F0;

typedef struct Message_824FD0F0 {
    int type;    /* 0x0 */
    int pad4;    /* 0x4 */
    void *model; /* 0x8 */
} Message_824FD0F0;

typedef struct Actor_824FD0F0 {
    char pad0[0x4c];
    int owner; /* 0x4c */
    char pad50[0xbb0 - 0x50];
    void *model; /* 0xbb0 */
    char padbb4[0x8];
    unsigned int resource; /* 0xbbc */
    char padbc0[0x4];
    char timerA[0x4]; /* 0xbc4 */
    char timerB[0x4]; /* 0xbc8 */
    char timerC[0x4]; /* 0xbcc */
} Actor_824FD0F0;

extern const float lbl_821CA45C[2];

extern void fn_82529508(ModelDesc_824FD0F0 *desc);
extern void *fn_82587AC0(const char *name);
extern void *fn_82529A38(void *source, ModelDesc_824FD0F0 *desc, int flags);
extern void fn_82536590(void *timer, int value);
extern void fn_825274F8(void *model, Actor_824FD0F0 *self, int kind);
extern void fn_824FD748(Actor_824FD0F0 *self, Message_824FD0F0 *message);

void fn_824FD0F0(Actor_824FD0F0 *self, Message_824FD0F0 *message)
{
    ModelDesc_824FD0F0 desc;

    switch (message->type) {
    case 0x42:
        if (message->model == self->model) {
            fn_825274F8(self->model, self, 0xc);
        }
        break;
    case 0x45:
        if (self->resource != 0) {
            fn_82529508(&desc);
            desc.scale = lbl_821CA45C[1];
            desc.owner = self->owner;
            desc.resource = self->resource;
            {
                void *source = fn_82587AC0(desc.name);
                self->model = fn_82529A38(source, &desc, 0);
            }
        }
        fn_82536590(self->timerB, 0);
        break;
    case 0x4b:
        fn_82536590(self->timerA, 0);
        fn_82536590(self->timerC, 0);
        break;
    }
    fn_824FD748(self, message);
}
