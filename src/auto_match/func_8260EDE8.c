typedef struct Clip_8260EDE8 {
    int pad0;
    float start; /* 0x04 */
    float end;   /* 0x08 */
    int padC;
    float speed; /* 0x10 */
    int loop;    /* 0x14 */
} Clip_8260EDE8;

typedef struct Player_8260EDE8 {
    char pad0[0x60];
    void **owner; /* 0x60 */
} Player_8260EDE8;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_8257E190(void *mem, void *owner, float length, float speed, unsigned char loop);

void fn_8260EDE8(Player_8260EDE8 *self, int unused, Clip_8260EDE8 *clip, int unused2, int skip)
{
    if (skip == 0) {
        float length = clip->end - clip->start;
        void *owner = *self->owner;
        void *mem = fn_8265C9E0(0x80);

        if (mem != 0) {
            fn_8257E190(mem, owner, length - 0.01f >= 0.0f ? length : 0.01f, clip->speed, clip->loop != 0);
        }
    }
}
