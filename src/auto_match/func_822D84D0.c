typedef struct Entry_82560010 Entry_82560010;
typedef struct Table_82560010 Table_82560010;
typedef struct Animation_822B83D0 Animation_822B83D0;

typedef struct Scene_822D84D0 {
    char pad0[0x14];
    char tracks[0x10];     /* 0x14 */
    Table_82560010 *table; /* 0x24 */
} Scene_822D84D0;

typedef struct Owner_822D84D0 {
    char pad0[0x2c];
    void *callback;
    char pad30[0x118 - 0x30];
    Scene_822D84D0 *scene;
    char pad11c[0x274 - 0x11c];
    int active;
} Owner_822D84D0;

typedef struct Camera_822D84D0 {
    char pad0[0x4c];
    float angle;
} Camera_822D84D0;

typedef struct Player_822D84D0 {
    char pad0[0x24];
    Camera_822D84D0 *camera;
    char pad28[0x54 - 0x28];
    Owner_822D84D0 *owner;
    void *target;

    union {
        unsigned char text[16];
        unsigned char *data;
    } name;

    unsigned int length;
    unsigned int capacity;
    char pad74[0xc];
    int state;
    int active;
    char pad88[8];
    char first[0x20];
    char second[0x20];
    int useBlend;
    float blend;
    float timer;
    float savedAngle;
} Player_822D84D0;

extern Entry_82560010 *fn_82560010(Table_82560010 *, const unsigned char *);
extern Animation_822B83D0 *fn_822B83D0(void *, Entry_82560010 *);
extern void fn_825113E0(void *, unsigned int, void *);
extern float fn_827F6328(Animation_822B83D0 *);
extern void fn_823726F8(void *, float, float, void *);

void fn_822D84D0(Player_822D84D0 *self)
{
    Animation_822B83D0 *animation;
    Owner_822D84D0 *owner = self->owner;
    Scene_822D84D0 *scene = owner->scene;
    const unsigned char *name = self->name.text;
    Entry_82560010 *entry;
    if (self->capacity >= 16)
        name = *(const unsigned char *const *)name;
    entry = fn_82560010(scene->table, name);
    scene = owner->scene;
    animation = fn_822B83D0(scene, entry);

    self->active = 1;
    self->owner->active = 1;
    fn_825113E0(self->owner->scene->tracks, 0x17, self->first);
    fn_825113E0(self->owner->scene->tracks, 0x27, self->second);
    if (self->useBlend != 0) {
        float length = fn_827F6328(animation);
        float blend = self->blend * length;
        fn_823726F8(self->target, blend, length - blend, self->owner->callback);
    }
    self->state = 0;
    self->timer = 0.0f;
    self->savedAngle = self->camera->angle;
    self->camera->angle = 15.0f;
}
