typedef struct Body_82D8C948 {
    char pad0[0x20];
    unsigned short index;          /* 0x20 */
    char pad22[6];
    unsigned __int64 multiThreadCheck; /* 0x28 */
} Body_82D8C948;

typedef struct Entity_82D8C948 {
    char pad0[0xcc];
    Body_82D8C948 *body;           /* 0xcc */
} Entity_82D8C948;

typedef struct Self_82D8C948 {
    int pad0;
    Entity_82D8C948 *entityA;      /* 0x04 */
    Entity_82D8C948 *entityB;      /* 0x08 */
    void *source;            /* 0x0c */
    int mode;                /* 0x10 */
} Self_82D8C948;

extern void fn_82CEFB20(unsigned __int64 *check);
extern void fn_82DBAF68(void *source, unsigned int key, const void *a, Body_82D8C948 *body, const void *b, const void *c);

void fn_82D8C948(Self_82D8C948 *self, unsigned int key, const void *a, const void *b, const void *c)
{
    Body_82D8C948 *body = self->entityA->body;

    if (body->index == 0xffff) {
        body = self->entityB->body;
    }
    if (self->mode != 2) {
        fn_82DBAF68(self->source, key, a, body, b, c);
    } else {
        unsigned __int64 saved = body->multiThreadCheck;
        fn_82CEFB20(&body->multiThreadCheck);
        fn_82DBAF68(self->source, key, a, body, b, c);
        body->multiThreadCheck = saved;
    }
}
