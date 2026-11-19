typedef struct Settings_824970C8 {
    int id;       // 0x0
    int sound;    // 0x4
    float volume; // 0x8
    float pitch;  // 0xc
    float pan;    // 0x10
} Settings_824970C8;

typedef struct Value_824970C8 {
    int field0;                 // 0x0
    int field4;                 // 0x4
    int sound;                  // 0x8
    Settings_824970C8 settings; // 0xc
    int enabled;                // 0x20
} Value_824970C8;

typedef struct Node_824970C8 {
    struct Node_824970C8 *next; // 0x0
    struct Node_824970C8 *prev; // 0x4
    int key;                    // 0x8
    Value_824970C8 value;       // 0xc
} Node_824970C8;

typedef struct Bucket_824970C8 {
    Node_824970C8 *first; // 0x0
    Node_824970C8 *last;  // 0x4
} Bucket_824970C8;

typedef struct Map_824970C8 {
    int pad0;
    Node_824970C8 *end; // 0x4
    char pad8[8];
    Bucket_824970C8 *vec; // 0x10
} Map_824970C8;

typedef struct Player_824970C8 {
    int pad0;
    void *voice; // 0x4
} Player_824970C8;

typedef struct Object_824970C8 {
    char pad0[0x28];
    Map_824970C8 sounds; // 0x28
    char pad3c[0x18];
    Player_824970C8 *player; // 0x54
    int started;             // 0x58
} Object_824970C8;

extern unsigned int fn_824973B0(Map_824970C8 *map, int *key);
extern void fn_8254EEB8(Player_824970C8 *player, int sound, float volume, float pitch, float pan);

static __forceinline Node_824970C8 *Find(Map_824970C8 *map, int key)
{
    Bucket_824970C8 *bucket = &map->vec[fn_824973B0(map, &key)];
    Node_824970C8 *end = map->end;
    Node_824970C8 *first = bucket->first;
    Node_824970C8 *node;

    for (node = first; node != (first == end ? end : bucket->last->next); node = node->next) {
        if (node->key == key) {
            return node;
        }
    }
    return end;
}

void fn_824970C8(Object_824970C8 *self, int key)
{
    Node_824970C8 *node;
    Value_824970C8 *value;
    Settings_824970C8 settings;

    node = Find(&self->sounds, key);
    if (node != self->sounds.end) {
        value = &node->value;
        if (self->started == 0) {
            if (self->player->voice != 0) {
                fn_8254EEB8(self->player, value->sound, 0.0f, 0.0f, 0.0f);
            }
            self->started = 1;
        } else {
            settings = value->settings;
            if (value->enabled != 0 && self->player->voice != 0) {
                fn_8254EEB8(self->player, settings.sound, settings.volume, settings.pitch, settings.pan);
            }
        }
    }
}
