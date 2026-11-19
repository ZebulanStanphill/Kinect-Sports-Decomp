typedef struct FetchHeader_8263AA68 {
    unsigned int address : 30;
    unsigned int type : 2;
} FetchHeader_8263AA68;

typedef struct VertexFetch_8263AA68 {
    unsigned int address; /* 0x0 */
    unsigned int size;    /* 0x4 */
} VertexFetch_8263AA68;

typedef union FetchGroup_8263AA68 {
    FetchHeader_8263AA68 header;
    VertexFetch_8263AA68 vertex[3];
} FetchGroup_8263AA68;

typedef struct Device_8263AA68 {
    char pad0[0x18];
    unsigned __int64 dirtyFetch; /* 0x18 */
    char pad20[0x480 - 0x20];
    FetchGroup_8263AA68 fetch[32]; /* 0x480 */
} Device_8263AA68;

typedef struct Buffer_8263AA68 {
    char pad0[0x18];
    unsigned int address; /* 0x18 */
    unsigned int size;    /* 0x1c */
} Buffer_8263AA68;

void *memset(void *dst, int value, unsigned int size);

void fn_8263AA68(Device_8263AA68 *dev, unsigned int reg, Buffer_8263AA68 *buffer, int offset)
{
    unsigned int index = 0x5f - reg;
    unsigned int slot = index / 3;
    unsigned int sub = index - slot * 3;
    FetchGroup_8263AA68 *group = &dev->fetch[slot];
    unsigned int type = group->header.type;
    unsigned int address;
    VertexFetch_8263AA68 *vertex;

    if (type == 0 || type == 2) {
        memset(group, 0, 0x18);
    }
    group->header.type = 1;
    vertex = &group->vertex[sub];
    address = buffer->address + offset;
    vertex->size = (buffer->size - offset) & 0xcfffffff | 0x10000000;
    vertex->address = ((address >> 20) + 0x200 & 0x1000) + (address & 0x1fffffff);
    dev->dirtyFetch |= 0x8000000000000000ULL >> (slot + 32);
}
