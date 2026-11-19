typedef struct FILE_8282FCF0 {
    char pad[0x20];
} FILE_8282FCF0;

typedef struct SymbolRecord_8282FCF0 {
    unsigned int section; /* 0x0 */
    unsigned int pad4;    /* 0x4 */
    unsigned int offset;  /* 0x8 */
    unsigned int padC;    /* 0xc */
    unsigned int index;   /* 0x10 */
} SymbolRecord_8282FCF0;

typedef struct Section_8282FCF0 {
    char pad0[0xc];
    unsigned int id; /* 0xc */
    char pad10[0x8];
    unsigned int base; /* 0x18 */
    char pad1c[0x2c];
    void *symbols; /* 0x48 */
    char pad4c[0x8];
    unsigned char loaded; /* 0x54 */
} Section_8282FCF0;

typedef struct SymbolNode_8282FCF0 {
    char pad0[0x10];
    struct SectionDb_8282FCF0 *owner; /* 0x10 */
    unsigned int index;               /* 0x14 */
} SymbolNode_8282FCF0;

typedef struct SectionDb_8282FCF0 {
    char pad0[0xac];
    unsigned int symbolCount; /* 0xac */
    char padB0[0x2fc - 0xb0];
    char sections[0xa8];    /* 0x2fc */
    char symbolTable[0x18]; /* 0x3a4 */
} SectionDb_8282FCF0;

extern unsigned int fread(void *buffer, unsigned int size, unsigned int count, FILE_8282FCF0 *file);
extern FILE_8282FCF0 *__iob_func(void);
extern int fprintf(FILE_8282FCF0 *file, const char *format, ...);
extern void fn_828223C8(Section_8282FCF0 *it, Section_8282FCF0 **next);
extern void fn_82816B30(void *vector, SymbolRecord_8282FCF0 *record);
extern SymbolNode_8282FCF0 *fn_828252E8(SectionDb_8282FCF0 *self, int size);
extern void fn_828244E8(void);
extern void fn_82822F60(void *table, SymbolNode_8282FCF0 *node, void (*hash)(void),
                        SymbolNode_8282FCF0 *item);

int fn_8282FCF0(FILE_8282FCF0 *file, SectionDb_8282FCF0 *self)
{
    Section_8282FCF0 *it;
    SymbolRecord_8282FCF0 record;
    Section_8282FCF0 *section;
    unsigned int base;
    unsigned int id;
    unsigned int i;
    SymbolNode_8282FCF0 *node;

    it = (Section_8282FCF0 *)self->sections;
    section = 0;
    base = 0;
    id = 0;
    for (i = 0; i < self->symbolCount; i++) {
        if (fread(&record, 0x14, 1, file) != 1) {
            fprintf(&__iob_func()[2],
                    "sectionDb Error: Symbol file symbol map data did not read correctly\n");
            return 5;
        }
        while (id != record.section) {
            fn_828223C8(it, &it);
            section = it;
            id = it->id;
            base = it->base;
        }
        record.section = (unsigned int)section;
        record.offset += base;
        fn_82816B30(section->symbols, &record);
        section->loaded = 0;
        node = fn_828252E8(self, 0x18);
        node->owner = self;
        node->index = record.index;
        fn_82822F60(self->symbolTable, node, fn_828244E8, node);
    }
    return 0;
}
