typedef struct String_82897060 {
    union {
        char buffer[0x10];
        char *pointer;
    } data; /* 0x0 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int pad18;             /* 0x18 */
} String_82897060;

typedef struct Named_82897060 {
    char pad0[0x18];
    String_82897060 name; /* 0x18 */
} Named_82897060;

typedef struct SharedPtr_82897060 {
    Named_82897060 *pointer; /* 0x0 */
    void *counter;           /* 0x4 */
} SharedPtr_82897060;

typedef struct Entry_82897060 {
    String_82897060 name;      /* 0x0 */
    short f1c;                 /* 0x1c */
    unsigned short f1e;        /* 0x1e */
    short f20;                 /* 0x20 */
    short pad22;               /* 0x22 */
    int f24;                   /* 0x24 */
    int f28;                   /* 0x28 */
    int f2c;                   /* 0x2c */
    SharedPtr_82897060 shared; /* 0x30 */
    unsigned char f38;         /* 0x38 */
} Entry_82897060;

extern void *fn_828A12E8(int key);
extern void fn_82230218(String_82897060 *self, const String_82897060 *source, unsigned int position,
                        unsigned int count);
extern void fn_8265CA20(void *p);
extern Entry_82897060 *fn_82890428(Entry_82897060 *entry, const String_82897060 *name, short a,
                                   unsigned short b, int c, int d, int e, SharedPtr_82897060 *shared,
                                   unsigned char g);
extern void fn_82896F40(void *table, Entry_82897060 *entry);
extern void fn_822315A0(void *counter);

static __forceinline void StringInit(String_82897060 *s)
{
    s->capacity = 0xf;
    s->size = 0;
    s->data.buffer[0] = 0;
}

static __forceinline void StringCopy(String_82897060 *s, const String_82897060 *source)
{
    StringInit(s);
    fn_82230218(s, source, 0, 0xffffffff);
}

static __forceinline void StringDestroy(String_82897060 *s)
{
    if (s->capacity >= 0x10) {
        fn_8265CA20(s->data.pointer);
    }
    StringInit(s);
}

/* Copies name into the shared object's name, builds an entry from the arguments and adds it to
   the table found for key. */
void fn_82897060(const String_82897060 *name, short a, unsigned short b, int c, int d, int e,
                 SharedPtr_82897060 *shared, int key, unsigned char g)
{
    void *table = fn_828A12E8(key);
    String_82897060 copy;
    String_82897060 argument;
    Entry_82897060 entry;

    StringCopy(&copy, name);
    fn_82230218(&shared->pointer->name, &copy, 0, 0xffffffff);
    StringDestroy(&copy);
    StringCopy(&argument, name);
    fn_82890428(&entry, &argument, a, b, c, d, e, shared, g);
    StringDestroy(&argument);
    fn_82896F40(table, &entry);
    if (entry.shared.counter != 0) {
        fn_822315A0(entry.shared.counter);
    }
    if (entry.name.capacity >= 0x10) {
        fn_8265CA20(entry.name.data.pointer);
    }
}
