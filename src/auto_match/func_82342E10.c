typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Motion_82342E10 {
    char pad[0x90];
    __vector4 position;
    __vector4 velocity;
    int dirty;
} Motion_82342E10;

typedef struct Entity_82342E10 {
    char pad[0xf8];
    int attached;
    Motion_82342E10 *motion;
} Entity_82342E10;

typedef struct Body_82342E10 {
    char pad[0x24];
    Entity_82342E10 *entity;
    char pad28[0x58];
    __vector4 position;
    char pad90[0x50];
    __vector4 velocity;
} Body_82342E10;

typedef struct Obj_82342E10 {
    char pad[0xc];
    Body_82342E10 **body;
} Obj_82342E10;

extern int fn_824CD030(Entity_82342E10 *entity);

void fn_82342E10(Obj_82342E10 *self, Entity_82342E10 *entity)
{
    if (fn_824CD030(entity) != 0) {
        Body_82342E10 *body = *self->body;
        Entity_82342E10 *owner = body->entity;
        __vector4 velocity = body->velocity;
        __vector4 position = body->position;
        owner->motion->position = position;
        owner->motion->velocity = velocity;
        owner->motion->dirty = 1;
    } else if (entity->attached != 0) {
        (*self->body)->position = entity->motion->position;
    }
}
