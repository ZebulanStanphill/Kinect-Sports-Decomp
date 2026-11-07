typedef unsigned int size_t;

void *memset(void *dst, int val, size_t n);

typedef struct Buffers_8285D200 {
    char pad[0xa8];
    void *bufA;   /* 0xa8 */
    void *bufB;   /* 0xac */
} Buffers_8285D200;

typedef struct Sizes_8285D200 {
    char pad[0x58];
    unsigned int sizeA;  /* 0x58 */
    unsigned int sizeB;  /* 0x5c */
} Sizes_8285D200;

extern Buffers_8285D200 *fn_8285A808(void);

void fn_8285D200(Sizes_8285D200 *param_1)
{
    Buffers_8285D200 *b;

    b = fn_8285A808();
    memset(b->bufA, 0, param_1->sizeA);
    memset(b->bufB, 0, param_1->sizeB);
}
