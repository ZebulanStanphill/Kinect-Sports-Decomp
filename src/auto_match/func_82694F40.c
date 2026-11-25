typedef struct Buffer_82694F40 {
    char *data;
    int size;
    int used;
    int capacity;
    unsigned char flags;
    void *heap;
    char local[8];
} Buffer_82694F40;

typedef struct Entry_82694F40 {
    char *text;
    char pad04[8];
    unsigned int flags;
    unsigned int capacity;
} Entry_82694F40;

typedef struct Block_82694F40 {
    int pad00;
    struct Block_82694F40 *next;
    Entry_82694F40 entries[50];
} Block_82694F40;

typedef struct TextBlock_82694F40 {
    char pad00[0x7e0];
    struct TextBlock_82694F40 *next;
    void *memory;
} TextBlock_82694F40;

typedef struct Manager_82694F40 {
    char pad00[0xc];
    Block_82694F40 *blocks;         /* 0x0c */
    void *freeText;                 /* 0x10 */
    TextBlock_82694F40 *textBlocks; /* 0x14 */
    Entry_82694F40 *empty;          /* 0x18 */
    char *logger;                   /* 0x1c */
    unsigned int name;              /* 0x20 */
} Manager_82694F40;

typedef struct Text_82694F40 {
    unsigned int length;
    long refs;
    char text[1];
} Text_82694F40;

extern void *lbl_831E7E64;
extern const char lbl_82196582[];
extern void fn_8268AFB0(Buffer_82694F40 *, void *);
extern void fn_8268AFD8(Buffer_82694F40 *);
extern void fn_8268B1F0(Buffer_82694F40 *, const char *, int);
extern void fn_8267BE38(void *);
extern void fn_8267C4F0(void *);
extern void fn_82693F78(void *, const char *, ...);
extern void fn_82768F38(Manager_82694F40 *);
extern long _InterlockedExchangeAdd(volatile long *, long);

void fn_82694F40(Manager_82694F40 *self)
{
    Buffer_82694F40 buffer;
    unsigned int leaks;
    Text_82694F40 *name;

    fn_8268AFB0(&buffer, lbl_831E7E64);
    leaks = 0;
    if (self->blocks != 0) {
        const char *nextQuote = ", '";
        Block_82694F40 **pBlocks = &self->blocks;
        const char *quote = "'";
        do {
            Block_82694F40 *block = (*pBlocks);
            int remaining = 50;
            Entry_82694F40 *entry = block->entries;
            (*pBlocks) = block->next;
            do {
                if (entry->text != 0 && entry != self->empty) {
                    if (leaks < 16) {
                        const char *prefix = leaks != 0 ? nextQuote : quote;
                        fn_8268B1F0(&buffer, prefix, -1);
                        fn_8268B1F0(&buffer, entry->text, -1);
                        fn_8268B1F0(&buffer, quote, -1);
                    }
                    ++leaks;
                    if (!(entry->flags & 0x40000000)) {
                        unsigned int capacity = entry->capacity;
                        char *memory = entry->text;
                        if (capacity < 12) {
                            *(void **)memory = self->freeText;
                            self->freeText = memory;
                        } else {
                            fn_8267BE38(memory);
                        }
                    }
                }
                ++entry;
            } while (--remaining != 0);
            fn_8267BE38(block);
        } while ((*pBlocks) != 0);
    }
    while (self->textBlocks != 0) {
        TextBlock_82694F40 *block = self->textBlocks;
        TextBlock_82694F40 *next = block->next;
        void *memory = block->memory;
        self->textBlocks = next;
        fn_8267BE38(memory);
    }
    if (leaks != 0 && (int)self->logger != 0) {
        const char *text;
        char *logger = self->logger;
        name = (Text_82694F40 *)(self->name & ~3u);
        fn_82693F78(logger + 0xc, "ActionScript Memory leaks in movie '%s', including %d string nodes\n",
                    name->text, leaks);
        text = buffer.data ? buffer.data : lbl_82196582;
        fn_82693F78(self->logger + 0xc, "Leaked string content: %s\n", text);
    }
    fn_8268AFD8(&buffer);
    name = (Text_82694F40 *)(self->name & ~3u);
    if (_InterlockedExchangeAdd(&name->refs, -1) - 1 == 0)
        fn_8267BE38(name);
    if (self->logger != 0)
        fn_8267C4F0(self->logger);
    fn_82768F38(self);
}
