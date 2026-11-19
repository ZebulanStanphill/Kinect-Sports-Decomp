typedef struct Name_8271B938 {
    int a;
    int b;
    int refcount; /* 0x08 */
} Name_8271B938;

typedef struct Elem_8271B938 {
    unsigned char type;  /* 0x00 */
    Name_8271B938 *name; /* 0x04 */
    int number;          /* 0x08 */
    int w;
} Elem_8271B938;

typedef struct Stack_8271B938 {
    Elem_8271B938 *cur;  /* 0x00 */
    Elem_8271B938 *base; /* 0x04 */
    Elem_8271B938 *end;  /* 0x08 */
    int pad[2];          /* 0x0c */
    int count;           /* 0x14 */
} Stack_8271B938;

typedef struct Ctx_8271B938 {
    char pad[0x254];
    char names[0x50]; /* 0x254 */
} Ctx_8271B938;

typedef struct Obj_8271B938 {
    char pad0[8];
    Stack_8271B938 stack; /* 0x08 */
    char pad1[0x58];
    Ctx_8271B938 *ctx; /* 0x78 */
} Obj_8271B938;

typedef struct StringData_8271B938 {
    int pad0;
    long refs; /* 0x04 */
} StringData_8271B938;

typedef struct Progress_8271B938 {
    int loaded; /* 0x00 */
    int total;  /* 0x04 */
} Progress_8271B938;

typedef struct ProgressEntry_8271B938 {
    unsigned int *key;           /* 0x00 */
    Progress_8271B938 *progress; /* 0x04 */
} ProgressEntry_8271B938;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268B330(unsigned int *string);
extern void fn_8269E088(const Elem_8271B938 *value, unsigned int *string);
extern Progress_8271B938 *fn_8271A720(void *table, unsigned int *key);
extern void fn_8271B248(void *table, void *table2, ProgressEntry_8271B938 *entry);
extern void fn_82681728(Name_8271B938 **out, void *table, const char *name);
extern void fn_826826A8(Stack_8271B938 *s);
extern void fn_826944C8(Name_8271B938 *n);
extern void fn_82695520(Elem_8271B938 *dst, const Elem_8271B938 *src);
extern void fn_826AF618(Stack_8271B938 *s);
extern void fn_82720748(Obj_8271B938 *o, void *target, Name_8271B938 **name, int a, int b);

void fn_8271B938(char *clip, Obj_8271B938 *self, const Elem_8271B938 *value, int loaded, int total)
{
    Name_8271B938 *event;
    Stack_8271B938 *s;
    Elem_8271B938 *cur;
    void *target;
    int idx;

    if (value != 0) {
        unsigned int key;
        Progress_8271B938 *found;
        Progress_8271B938 progress;
        ProgressEntry_8271B938 entry;

        fn_8268B330(&key);
        fn_8269E088(value, &key);
        found = fn_8271A720(clip + 0x30, &key);
        if (found != 0) {
            found->loaded = loaded;
            found->total = total;
        } else {
            progress.loaded = loaded;
            progress.total = total;
            entry.key = &key;
            entry.progress = &progress;
            fn_8271B248(clip + 0x30, clip + 0x30, &entry);
        }
        {
            StringData_8271B938 *data = (StringData_8271B938 *)(key & ~3u);

            if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
                fn_8267BE38(data);
            }
        }
    }
    s = &self->stack;
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    if (cur != 0) {
        cur->number = total;
        cur->type = 4;
    }
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    if (cur != 0) {
        cur->number = loaded;
        cur->type = 4;
    }
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    if (cur != 0) {
        fn_82695520(cur, value);
    }
    target = clip ? clip + 0x10 : 0;
    idx = (int)(s->cur - s->base) + s->count * 32 - 32;
    fn_82681728(&event, self->ctx->names, "onLoadProgress");
    fn_82720748(self, target, &event, 3, idx);
    {
        Name_8271B938 *n = event;
        if (--n->refcount == 0) {
            fn_826944C8(n);
        }
    }
    fn_826AF618(s);
}
