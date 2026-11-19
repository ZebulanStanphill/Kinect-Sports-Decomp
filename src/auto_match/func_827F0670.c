struct Node_827F0670;

typedef struct NodeVt_827F0670 {
    void *f0;
    void (*reset)(struct Node_827F0670 *self, float time);  /* 0x4 */
    void (*update)(struct Node_827F0670 *self, float time); /* 0x8 */
} NodeVt_827F0670;

typedef struct Order_827F0670 {
    unsigned short index; /* 0x0 */
    unsigned short pad2;
} Order_827F0670;

typedef struct Node_827F0670 {
    NodeVt_827F0670 *vt; /* 0x00 */
    char pad04[0x1c];
    Order_827F0670 order[0x20];           /* 0x20 */
    struct Node_827F0670 *children[0x10]; /* 0xa0 */
    char padE0[2];
    unsigned short count; /* 0xe2 */
    char padE4[0xc];
    unsigned int parent; /* 0xf0 */
    char padF4[0x94];
    unsigned char started; /* 0x188 */
} Node_827F0670;

extern char *fn_827F3C20(Node_827F0670 *node);
extern void fn_827F4058(Node_827F0670 *node);
extern void fn_827F4068(Node_827F0670 *node);
extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_827F0670(Node_827F0670 *self, float time)
{
    int i;
    Node_827F0670 *child;
    char *dst;
    char *src;

    if (self->started == 0) {
        self->vt->reset(self, 0.0f);
    }
    for (i = self->count - 1; i >= 0; i--) {
        child = self->children[self->order[i].index];
        child->vt->update(child, time);
    }
    if (self->parent == 0xffff) {
        fn_827F4058(self);
    } else {
        dst = fn_827F3C20(self) + 0x34;
        src = fn_827F3C20(self->children[self->parent]) + 0x34;
        memcpy(dst, src, 0x20);
        fn_827F4068(self);
    }
}
