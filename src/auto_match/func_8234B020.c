typedef struct String_8234B020 {
    char data[16];         /* 0x0 */
    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int allocator;         /* 0x18 */
} String_8234B020;

typedef struct Context_8234B020 {
    int unknown;
    String_8234B020 name; /* 0x4 */
    void *animation;      /* 0x20 */
    void *controller;     /* 0x24 */
    int unknown28;
    int current; /* 0x2c */
    int unknown30;
    int state;   /* 0x34 */
    int enabled; /* 0x38 */
} Context_8234B020;

extern void fn_827F5708(void *, float);
extern void fn_827F3580(void *, float, float, int);
extern void fn_82230360(String_8234B020 *, const char *, unsigned int);
extern void fn_8234B0C8(Context_8234B020 *, const char *, float);

void fn_8234B020(Context_8234B020 *self)
{
    float zero = 0.0f;
    String_8234B020 *name;
    const char *text;
    if (self->controller) {
        fn_827F5708(self->controller, zero);
    }
    self->enabled = 1;
    self->state = 0;
    name = &self->name;
    fn_82230360(name, "neutral", 7);
    if (self->animation) {
        fn_827F3580(self->animation, zero, zero, 18);
        self->current = 0;
        text = name->capacity >= 16 ? *(char **)name->data : name->data;
        fn_8234B0C8(self, text, zero);
    }
}
