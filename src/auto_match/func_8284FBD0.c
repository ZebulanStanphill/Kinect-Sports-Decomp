typedef struct Entry_8284FBD0 {
    int pad0;
    const char *name; /* 0x04 */
    char pad8[0x50 - 0x8];
} Entry_8284FBD0;

typedef struct List_8284FBD0 {
    unsigned int count;      /* 0x00 */
    Entry_8284FBD0 *entries; /* 0x04 */
} List_8284FBD0;

typedef struct Source_8284FBD0 {
    char pad00[0x34];
    unsigned int maskBytes; /* 0x34 */
    char pad38[0x5c];
    unsigned int scratchBytes; /* 0x94 */
} Source_8284FBD0;

typedef struct Masks_8284FBD0 {
    char pad00[8];
    unsigned char *visible; /* 0x08 */
    char pad0C[0xc];
    unsigned char *saved; /* 0x18 */
    void *scratch;        /* 0x1c */
} Masks_8284FBD0;

typedef struct State_8284FBD0 {
    char pad00[0x98];
    unsigned char visited; /* 0x98 */
    unsigned char cached;  /* 0x99 */
} State_8284FBD0;

typedef struct Graph_8284FBD0 {
    char pad00[0x4c];
    unsigned short passCount; /* 0x4c */
} Graph_8284FBD0;

/* What fn_8285A8F8 calls for every node it walks. */
typedef struct Walker_8284FBD0 {
    void (*visit)(void);     /* 0x0 */
    Source_8284FBD0 *source; /* 0x4 */
    int unk8;                /* 0x8 */
    int unkC;                /* 0xc */
} Walker_8284FBD0;

void *memset(void *dst, int value, unsigned int size);
char *strstr(const char *string, const char *part);
extern int fn_8285AE70(Graph_8284FBD0 *self);
extern State_8284FBD0 *fn_8285A808(Graph_8284FBD0 *self, void *state);
extern void fn_8285A8F8(Graph_8284FBD0 *self, void *state, Walker_8284FBD0 *walker);
extern void fn_8284D780(Source_8284FBD0 *source, List_8284FBD0 **list);
extern void fn_82850D08(Entry_8284FBD0 *entry, unsigned char set, void *masks, int index);
extern void fn_8284F908(Graph_8284FBD0 *self, void *state, Source_8284FBD0 *source, Masks_8284FBD0 *masks);
extern void fn_8284F9B8(void);

void fn_8284FBD0(Graph_8284FBD0 *self, void *state, Source_8284FBD0 *source, Masks_8284FBD0 *masks)
{
    List_8284FBD0 *list;
    Walker_8284FBD0 walker;
    State_8284FBD0 *entry;
    unsigned int i;
    unsigned char *visible;
    unsigned char *saved;

    if (fn_8285AE70(self)) {
        fn_8284D780(source, &list);
        if (list != 0) {
            for (i = 0; i < list->count; i++) {
                if (strstr(list->entries[i].name, "_PART_VisibilityCell_") != 0) {
                    fn_82850D08(&list->entries[i], 0, masks, 0);
                }
            }
        }
    } else {
        entry = fn_8285A808(self, state);
        if (entry->cached) {
            visible = masks->visible;
            saved = masks->saved;
            for (i = 0; i < source->maskBytes; i++) {
                *visible = *saved & *visible;
                visible++;
                saved++;
            }
        } else {
            if (!entry->visited) {
                walker.visit = fn_8284F9B8;
                walker.source = source;
                walker.unk8 = 0;
                walker.unkC = 0;
                fn_8285A8F8(self, state, &walker);
            }
            fn_8284F908(self, state, source, masks);
            entry->cached = 1;
        }
    }
    for (i = 0; i < self->passCount; i++) {
        memset(masks->scratch, 0, source->scratchBytes);
    }
}
