typedef struct Vec3_824FB0B0 {
    float x;
    float y;
    float z;
} Vec3_824FB0B0;

typedef struct Actor_824FB0B0 {
    char pad0[0x2b0];
    float range; /* 0x2b0 */
    char pad2b4[0xb70 - 0x2b4];
    int state; /* 0xb70 */
    char padb74[0xba0 - 0xb74];
    unsigned char visible; /* 0xba0 */
    unsigned char active;  /* 0xba1 */
} Actor_824FB0B0;

typedef struct Name_824FB0B0 {
    const char *text; /* 0x00 */
} Name_824FB0B0;

typedef struct Self_824FB0B0 {
    char pad0[0x20];
    Actor_824FB0B0 *current; /* 0x20 */
    char pad24[0x1b8 - 0x24];
    Actor_824FB0B0 *actor; /* 0x1b8 */
    int pad1bc;
    Name_824FB0B0 name; /* 0x1c0 */
} Self_824FB0B0;

extern const float lbl_821962C0[4];
extern const float lbl_821CA45C[2];

extern Actor_824FB0B0 *fn_82528FA8(void *scene, Name_824FB0B0 *name, const float *orientation,
                                   Vec3_824FB0B0 *position, float scale, int flags);

void fn_824FB0B0(Self_824FB0B0 *self, void *scene)
{
    Vec3_824FB0B0 position;
    Actor_824FB0B0 *actor;

    if (self->name.text != 0) {
        position.x = 0.0f;
        position.y = 0.0f;
        position.z = 0.0f;
        actor = fn_82528FA8(scene, &self->name, lbl_821962C0, &position, lbl_821CA45C[1], 0);
        if (actor != 0) {
            self->actor = actor;
            actor->range = 100.0f;
            self->actor->state = 2;
            self->actor->visible = 0;
            self->actor->active = 0;
            self->current = actor;
        }
    }
}
