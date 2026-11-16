typedef struct Object_825A1388 {
    void **table; /* 0x00 */
    char reserved04[0x1c];

    struct {
        char reserved00[0x20];
        unsigned int minimum; /* 0x20 */
        unsigned int maximum; /* 0x24 */
    } state;                  /* 0x20 */
} Object_825A1388;

typedef struct Entry_825A1388 {
    Object_825A1388 *object; /* 0x00 */
    int value;               /* 0x04 */
} Entry_825A1388;

typedef struct List_825A1388 {
    Entry_825A1388 *begin; /* 0x00 */
    Entry_825A1388 *end;   /* 0x04 */
} List_825A1388;

typedef struct Message_825A1388 {
    int type;                /* 0x00 */
    int size;                /* 0x04 */
    Object_825A1388 *object; /* 0x08 */
    int unused;              /* 0x0c */
} Message_825A1388;

extern void *XMemSet(void *, int, unsigned int);
extern void fn_8257C8F0(void *, Message_825A1388 *);
extern void fn_8257CB40(void *, Message_825A1388 *, int);
extern void fn_8258B170(void *, void *, unsigned int *, unsigned int *);
extern void fn_8251E5A0(List_825A1388 *, Entry_825A1388 *);
extern void fn_82522ED8(Object_825A1388 *);

void fn_825A1388(List_825A1388 *self, Object_825A1388 *object)
{
    char *owner = (char *)object->table[19];
    Message_825A1388 message;
    Entry_825A1388 *entry;
    Entry_825A1388 *end;
    XMemSet(&message.object, 0, 8);
    message.type = 0x55;
    message.size = 0x10;
    message.object = object;
    message.unused = 0;
    fn_8257C8F0(owner, &message);
    fn_8257CB40(owner + 0x78, &message, 1);
    {
        unsigned int *state = (unsigned int *)&object->state;
        fn_8258B170(owner + 0x6d4, state, state + 8, state + 9);
    }
    end = self->end;
    for (entry = self->begin; entry < end; ++entry) {
        if (entry->object == object) {
            fn_8251E5A0(self, entry);
            break;
        }
    }
    fn_82522ED8(object);
}
