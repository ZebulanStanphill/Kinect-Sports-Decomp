typedef struct Format_82FE05A8 {
    int id;              /* 0x00 */
    unsigned int width;  /* 0x04 */
    int field08;         /* 0x08 */
    unsigned int height; /* 0x0c */
    int field10;         /* 0x10 */
} Format_82FE05A8;

typedef struct Allocator_82FE05A8 Allocator_82FE05A8;

typedef struct AllocatorVtbl_82FE05A8 {
    void *slot00;
    void *(*Alloc)(Allocator_82FE05A8 *self, unsigned int size); /* 0x04 */
} AllocatorVtbl_82FE05A8;

struct Allocator_82FE05A8 {
    AllocatorVtbl_82FE05A8 *vt;
};

typedef struct Encoder_82FE05A8 {
    unsigned char pad000[0xc8];
    int quality; /* 0xc8 */
    unsigned char pad0cc[4];
    unsigned char enabled; /* 0xd0 */
    unsigned char pad0d1[0xb];
    void *filter; /* 0xdc */
    unsigned char pad0e0[0x54];
    int format; /* 0x134 */
    unsigned char pad138[4];
    float rate; /* 0x13c */
} Encoder_82FE05A8;

extern const Format_82FE05A8 lbl_82175108[32];

extern void *fn_82FDF660(void *memory);
extern int fn_82FE4408(void *filter, Allocator_82FE05A8 *allocator, float rate, int field08, int field10,
                       unsigned int width, unsigned int height, int quality);

int fn_82FE05A8(Encoder_82FE05A8 *self, Allocator_82FE05A8 *allocator)
{
    int result = 1;
    int format = self->format;
    void *memory;
    void *filter;

    if (self->enabled) {
        memory = allocator->vt->Alloc(allocator, 0x314);
        if (memory != 0) {
            filter = fn_82FDF660(memory);
        } else {
            filter = 0;
        }
        self->filter = filter;
        if (filter == 0) {
            return 0x34;
        }
        result = fn_82FE4408(filter, allocator, self->rate, lbl_82175108[format].field08,
                             lbl_82175108[format].field10, lbl_82175108[format].width,
                             lbl_82175108[format].height, self->quality);
    }
    return result;
}
