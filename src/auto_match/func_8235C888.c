typedef struct Item_8235C888 {
    char data[0x420];
} Item_8235C888;

typedef struct Owner_8235C888 {
    char padding[0xc04];
    int count; /* 0xc04 */
    char paddingc08[0x0c];
    int active; /* 0xc14 */
    char paddingc18[0x12a8];
    Item_8235C888 items[2]; /* 0x1ec0 */
    char padding2700[0x434];
    float timer; /* 0x2b34 */
    int next;    /* 0x2b38 */
    char padding2b3c[0x70];
    int current; /* 0x2bac */
    int state;   /* 0x2bb0 */
} Owner_8235C888;

extern void fn_8235DA80(Owner_8235C888 *, float);
extern void fn_82418F68(Item_8235C888 *, float);

void fn_8235C888(Owner_8235C888 *self, float time)
{
    int index = 0;

    if (self->timer > 0.0f) {
        self->timer -= time;
        if (self->timer <= 0.0f) {
            if (self->active) {
                self->state = 0;
                self->current = self->next;
            }
            self->timer = 0.0f;
        }
    }
    fn_8235DA80(self, time);
    for (; index < self->count; index++) {
        fn_82418F68(&self->items[index], time);
    }
}
