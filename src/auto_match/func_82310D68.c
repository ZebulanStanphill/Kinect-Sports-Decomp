/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

/* Per-slot block, 300 bytes apart; the values sit 0x5a8 bytes into the table. */
typedef struct Slot_82310D68 {
    char pad[0x5a8];
    float valueB1; /* 0x5a8 */
    float valueA1; /* 0x5ac */
    float valueB0; /* 0x5b0 */
    float valueA0; /* 0x5b4 */
} Slot_82310D68;

typedef struct Owner_82310D68 {
    char pad[0x10];
    char *table; /* 0x10 */
} Owner_82310D68;

typedef struct Ring_82310D68 {
    unsigned int *begin;  /* 0x0 */
    unsigned int *end;    /* 0x4 */
    unsigned int *cursor; /* 0x8 */
    int unknownC;         /* 0xc */
    unsigned int count;   /* 0x10 */
} Ring_82310D68;

typedef struct Out_82310D68 {
    int id;       /* 0x0 */
    int mode;     /* 0x4 */
    int unknown8; /* 0x8 */
    float valueA; /* 0xc */
    float valueB; /* 0x10 */
    char pad[0xc];
    __vector4 vec; /* 0x20 */
    char pad2[0x60];
    Ring_82310D68 ring; /* 0x90 */
} Out_82310D68;

extern int fn_823CC7A0(void);

void fn_82310D68(Owner_82310D68 *owner, Out_82310D68 *out, int id, int mode)
{
    char *table = owner->table;
    Slot_82310D68 *slot = (Slot_82310D68 *)(table + fn_823CC7A0() * 300);
    Ring_82310D68 *ring;
    unsigned int i;
    out->id = id;
    out->mode = mode;
    out->unknown8 = 0;
    out->valueA = mode != 0 ? slot->valueA1 : slot->valueA0;
    out->valueB = mode != 0 ? slot->valueB1 : slot->valueB0;
    out->vec = __VMXGetReg(77);
    ring = &out->ring;
    i = 0;
    while (i < ring->count) {
        unsigned int **cursor = &ring->cursor;
        i++;
        *cursor = *cursor + 1;
        if (*cursor == ring->end) {
            *cursor = ring->begin;
        }
    }
    ring->count = 0;
}
