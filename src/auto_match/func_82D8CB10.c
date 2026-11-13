typedef struct Body_82D8CB10 {
    char pad0[0x20];
    unsigned short index;          /* 0x20 */
    char pad22[6];
    unsigned __int64 multiThreadCheck; /* 0x28 */
} Body_82D8CB10;

typedef struct Entity_82D8CB10 {
    char pad0[0xcc];
    Body_82D8CB10 *body;           /* 0xcc */
} Entity_82D8CB10;

typedef struct Self_82D8CB10 {
    int pad0;
    Entity_82D8CB10 *entityA;      /* 0x04 */
    Entity_82D8CB10 *entityB;      /* 0x08 */
    void *source;            /* 0x0c */
    int mode;                /* 0x10 */
} Self_82D8CB10;

extern void fn_82CEFB20(unsigned __int64 *check);
extern void fn_82DBB3F8(void *source, unsigned int key, const void *a, Body_82D8CB10 *body, float x, float y);

void fn_82D8CB10(Self_82D8CB10 *self, unsigned int key, const void *a, float x, float y)
{
    Body_82D8CB10 *body = self->entityA->body;

    if (body->index == 0xffff) {
        body = self->entityB->body;
    }
    if (self->mode != 2) {
        fn_82DBB3F8(self->source, key, a, body, x, y);
    } else {
        unsigned __int64 saved = body->multiThreadCheck;
        fn_82CEFB20(&body->multiThreadCheck);
        fn_82DBB3F8(self->source, key, a, body, x, y);
        body->multiThreadCheck = saved;
    }
}
