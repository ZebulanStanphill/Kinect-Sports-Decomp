typedef struct Body_82D8CBC8 {
    char pad0[0x20];
    unsigned short index;          /* 0x20 */
    char pad22[6];
    unsigned __int64 multiThreadCheck; /* 0x28 */
} Body_82D8CBC8;

typedef struct Entity_82D8CBC8 {
    char pad0[0xcc];
    Body_82D8CBC8 *body;           /* 0xcc */
} Entity_82D8CBC8;

typedef struct Self_82D8CBC8 {
    int pad0;
    Entity_82D8CBC8 *entityA;      /* 0x04 */
    Entity_82D8CBC8 *entityB;      /* 0x08 */
    void *source;                  /* 0x0c */
    int mode;                      /* 0x10 */
} Self_82D8CBC8;

extern void fn_82CEFB20(unsigned __int64 *check);
extern void fn_82DBB550(void *source, unsigned int key, Body_82D8CBC8 *body, const void *velocity);

void fn_82D8CBC8(Self_82D8CBC8 *self, unsigned int key, const void *velocity)
{
    Body_82D8CBC8 *body = self->entityA->body;

    if (body->index == 0xffff) {
        body = self->entityB->body;
    }
    if (self->mode != 2) {
        fn_82DBB550(self->source, key, body, velocity);
    } else {
        unsigned __int64 saved = body->multiThreadCheck;
        fn_82CEFB20(&body->multiThreadCheck);
        fn_82DBB550(self->source, key, body, velocity);
        body->multiThreadCheck = saved;
    }
}
