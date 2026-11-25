typedef struct String_828A3A88 {
    union {
        char buffer[0x10];
        char *pointer;
    } data; /* 0x0 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int pad18;             /* 0x18 */
} String_828A3A88;

typedef struct SharedPtr_828A3A88 {
    void *pointer; /* 0x0 */
    void *counter; /* 0x4 */
} SharedPtr_828A3A88;

extern char lbl_82196884[];

extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern void fn_8288B300(void *self, unsigned int type);
extern void *fn_82240730(void *self);
extern String_828A3A88 *fn_82230360(String_828A3A88 *self, const char *text, unsigned int count);
extern SharedPtr_828A3A88 *fn_828BAB20(SharedPtr_828A3A88 *self, void *p);
extern void fn_822315A0(void *counter);
extern void fn_82897060(const String_828A3A88 *name, short a, unsigned short b, int c, int d, int e,
                        SharedPtr_828A3A88 *shared, int key, unsigned char g);
extern void fn_828A15A0(void);
extern void fn_828A0EB0(void);
extern void fn_828A1608(void);
extern void fn_828A0F08(void);

static __forceinline void StringInit(String_828A3A88 *s)
{
    s->capacity = 0xf;
    s->size = 0;
    s->data.buffer[0] = 0;
}

static __forceinline void StringDestroy(String_828A3A88 *s)
{
    if (s->capacity >= 0x10) {
        fn_8265CA20(s->data.pointer);
    }
    StringInit(s);
}

void fn_828A3A88(int key)
{
    void *global;
    void *player;
    void *memory;
    String_828A3A88 globalName;
    String_828A3A88 playerName;
    SharedPtr_828A3A88 globalShared;
    SharedPtr_828A3A88 playerShared;

    global = fn_8265C9E0(0x34);
    if (global != 0) {
        fn_8288B300(global, 1);
        *(char **)global = lbl_82196884;
    } else {
        global = 0;
    }
    StringInit(&globalName);
    fn_82230360(&globalName, "GlobalNetObj", 0xc);
    fn_82897060(&globalName, 0, 1, (int)fn_828A15A0, (int)fn_828A0EB0, 0, fn_828BAB20(&globalShared, global),
                key, 0);
    if (globalShared.counter != 0) {
        fn_822315A0(globalShared.counter);
    }
    StringDestroy(&globalName);

    memory = fn_8265C9E0(0x2fc);
    if (memory != 0) {
        player = fn_82240730(memory);
    } else {
        player = 0;
    }
    StringInit(&playerName);
    fn_82230360(&playerName, "PlayerNetObj", 0xc);
    fn_82897060(&playerName, 1, 0x100, (int)fn_828A1608, (int)fn_828A0F08, 0,
                fn_828BAB20(&playerShared, player), key, 0);
    if (playerShared.counter != 0) {
        fn_822315A0(playerShared.counter);
    }
    if (playerName.capacity >= 0x10) {
        fn_8265CA20(playerName.data.pointer);
    }
}
