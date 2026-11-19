typedef struct Section_82814E30 {
    unsigned int size;   /* 0x00 */
    void *memory;        /* 0x04 */
    unsigned int offset; /* 0x08 */
    unsigned int end;    /* 0x0c */
    unsigned int length; /* 0x10 */
} Section_82814E30;

typedef struct Header_82814E30 {
    char pad0[0x1c];
    unsigned int headerSize; /* 0x1c */
    char pad20[0x50 - 0x20];
    unsigned char flags; /* 0x50 */
    char pad51[0x58 - 0x51];
    Section_82814E30 sections[2]; /* 0x58 */
} Header_82814E30;

typedef struct Callbacks_82814E30 {
    void *slot0;                                                                    /* 0x00 */
    void *slot1;                                                                    /* 0x04 */
    void *slot2;                                                                    /* 0x08 */
    void *(*allocate)(int heap, unsigned int size, int align, unsigned int offset); /* 0x0c */
    void *slot4;                                                                    /* 0x10 */
    void *slot5;                                                                    /* 0x14 */
} Callbacks_82814E30;

typedef struct Loader_82814E30 {
    char pad0[4];
    unsigned int align; /* 0x04 */
    char pad8[4];
    unsigned int errorFlags; /* 0x0c */
    unsigned int stateFlags; /* 0x10 */
    char pad14[4];
    int heap;                 /* 0x18 */
    Header_82814E30 *header;  /* 0x1c */
    unsigned int relocations; /* 0x20 */
    char pad24[0x79 - 0x24];
    unsigned char section; /* 0x79 */
} Loader_82814E30;

extern Callbacks_82814E30 lbl_8320A4E8;
extern void fn_82814D28(Loader_82814E30 *loader);
extern void fn_82820228(unsigned int relocations, unsigned int index, unsigned int *size);

int fn_82814E30(Loader_82814E30 *loader)
{
    Header_82814E30 *header = loader->header;
    unsigned int relocations = loader->relocations;
    int result = 0;
    unsigned int offset;
    unsigned int aligned;
    unsigned char i;
    Section_82814E30 *section;
    unsigned int size;
    void *memory;
    unsigned int dataOffset;
    unsigned int total;

    loader->section = 0;
    if ((header->flags & 1) != 1) {
        fn_82814D28(loader);
    }
    i = 0;
    offset = ((loader->align + header->headerSize - 1) & ~(loader->align - 1)) - header->headerSize;
    do {
        section = &header->sections[i];
        if (section->size == 0) {
            break;
        }
        loader->section = i;
        section->offset = offset;
        aligned = (section->length - offset + loader->align - 1) & ~(loader->align - 1);
        section->end = aligned;
        offset = aligned - section->length + offset;
        if (relocations != 0) {
            fn_82820228(relocations, i + 1, &size);
        } else {
            size = section->size;
        }
        dataOffset = offset + 0x44;
        total = dataOffset + size;
        if (lbl_8320A4E8.allocate == 0) {
            loader->errorFlags |= 0x1000;
            result = 1;
            break;
        }
        memory = lbl_8320A4E8.allocate(loader->heap, total, 4, dataOffset);
        section->memory = memory;
        if (memory == 0) {
            result = 1;
            break;
        }
        i++;
        loader->stateFlags |= 0x20;
    } while (i < 2);
    return result;
}
