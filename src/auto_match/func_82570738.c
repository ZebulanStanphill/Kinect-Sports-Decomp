typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Owner_82570738 {
    char pad0[0x844];
    int handle;                     /* 0x844 */
} Owner_82570738;

typedef struct __declspec(align(16)) Entry_82570738 {
    int unk0;
    unsigned int key;               /* 0x04 */
    int pad8[2];
    __vector4 position;             /* 0x10 */
    __vector4 velocity;             /* 0x20 */
} Entry_82570738;

typedef struct Vector_82570738 {
    Entry_82570738 *begin;
    Entry_82570738 *end;
} Vector_82570738;

typedef struct __declspec(align(16)) Self_82570738 {
    Owner_82570738 *owner;          /* 0x00 */
    int pad4;
    Vector_82570738 entries;        /* 0x08 */
    int pad10[4];
    char state[0x10];               /* 0x20 */
    __vector4 origin;               /* 0x30 */
} Self_82570738;

extern int fn_82567CC0(unsigned int key, void *state, float dt);
extern void fn_82566E58(unsigned int key, int handle);
extern __vector4 fn_82561E40(void *state);

static __forceinline void Erase(Vector_82570738 *list, Entry_82570738 *it)
{
    Entry_82570738 *dst;
    Entry_82570738 *src;
    Entry_82570738 *last;
    Entry_82570738 *p;
    last = list->end;
    for (dst = it, src = it + 1; src != last; dst++, src++)
        *dst = *src;
    last = list->end - 1;
    for (p = last; p != list->end; p++) {
    }
    list->end = last;
}

void fn_82570738(Self_82570738 *self, float dt)
{
    Entry_82570738 *it = self->entries.begin;
    while (it != self->entries.end) {
        unsigned int key = it->key;
        if (fn_82567CC0(key, self->state, dt) != 0) {
            fn_82566E58(key, self->owner->handle);
            Erase(&self->entries, it);
        } else {
            it->position = self->origin;
            it->velocity = fn_82561E40(self->state);
            it++;
        }
    }
}
