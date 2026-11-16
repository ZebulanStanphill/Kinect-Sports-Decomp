typedef struct Object_82DAB5E0 {
    char reserved00[0xaa];        /* 0x00 */
    unsigned short interval;      /* 0xaa */
    char reservedac[0x158];       /* 0xac */
    unsigned short listenerCount; /* 0x204 */
} Object_82DAB5E0;

typedef struct Pair_82DAB5E0 {
    char reserved00[0xc]; /* 0x00 */
    void *world;          /* 0x0c */
    char reserved10[8];   /* 0x10 */
    short countdown;      /* 0x18 */
} Pair_82DAB5E0;

typedef struct Event_82DAB5E0 {
    void *first;                 /* 0x00 */
    void *second;                /* 0x04 */
    void *current;               /* 0x08 */
    void *contacts;              /* 0x0c */
    unsigned int processed[256]; /* 0x10 */
    Pair_82DAB5E0 *pair;         /* 0x410 */
} Event_82DAB5E0;

extern void fn_82DAF190(void *, Event_82DAB5E0 *);
extern void fn_82DAD448(Object_82DAB5E0 *, Event_82DAB5E0 *);

void fn_82DAB5E0(Pair_82DAB5E0 *self, char *first, char *second, void *context, char **contacts)
{
    short countdown = self->countdown--;
    if (countdown == 0) {
        Object_82DAB5E0 *firstObject = (Object_82DAB5E0 *)(first + *(signed char *)(first + 0x10));
        Object_82DAB5E0 *secondObject = (Object_82DAB5E0 *)(second + *(signed char *)(second + 0x10));
        unsigned short interval = firstObject->interval;
        Event_82DAB5E0 event;
        int count;
        int index;
        if (interval >= secondObject->interval) {
            interval = secondObject->interval;
        }
        self->countdown = interval;
        count = (*contacts - (char *)contacts - 0x10) / 0x30;
        event.first = first;
        event.second = second;
        event.contacts = contacts;
        event.pair = self;
        for (index = count - 1; index >= 0; --index) {
            event.processed[index] = 0;
        }
        fn_82DAF190(self->world, &event);
        if (firstObject->listenerCount != 0) {
            fn_82DAD448(firstObject, &event);
        }
        if (secondObject->listenerCount != 0) {
            fn_82DAD448(secondObject, &event);
        }
    }
}
