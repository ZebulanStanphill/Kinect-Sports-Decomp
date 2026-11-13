typedef struct Body_82D8CC50 {
    char pad0[0x20];
    unsigned short index;          /* 0x20 */
    char pad22[6];
    unsigned __int64 multiThreadCheck; /* 0x28 */
} Body_82D8CC50;

typedef struct Entity_82D8CC50 {
    char pad0[0xcc];
    Body_82D8CC50 *body;           /* 0xcc */
} Entity_82D8CC50;

typedef struct Self_82D8CC50 {
    int pad0;
    Entity_82D8CC50 *entityA;      /* 0x04 */
    Entity_82D8CC50 *entityB;      /* 0x08 */
    void *source;                  /* 0x0c */
    int mode;                      /* 0x10 */
} Self_82D8CC50;

extern void fn_82CEFB20(unsigned __int64 *check);
extern void fn_82DBB6B0(void *source, Body_82D8CC50 *body, const void *value);

void fn_82D8CC50(Self_82D8CC50 *self, const void *value)
{
    Body_82D8CC50 *body = self->entityA->body;

    if (body->index == 0xffff) {
        body = self->entityB->body;
    }
    if (self->mode != 2) {
        fn_82DBB6B0(self->source, body, value);
    } else {
        unsigned __int64 saved = body->multiThreadCheck;
        fn_82CEFB20(&body->multiThreadCheck);
        fn_82DBB6B0(self->source, body, value);
        body->multiThreadCheck = saved;
    }
}
