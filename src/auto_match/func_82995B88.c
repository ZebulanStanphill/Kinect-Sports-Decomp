typedef unsigned int size_t;
void *memset(void *dst, int value, size_t size);

extern const unsigned int lbl_8315BD28[8][4];

typedef struct Reg_82995B88 {
    char pad0[0x10];
    unsigned int id; /* 0x10 */
} Reg_82995B88;

typedef struct Group_82995B88 {
    unsigned int flags;    /* 0x0 */
    unsigned int total;    /* 0x4 */
    unsigned int *indices; /* 0x8 */
} Group_82995B88;

typedef struct Shader_82995B88 {
    char pad0[0x14];
    Reg_82995B88 **regs;      /* 0x14 */
    char pad18[0x54];         /* 0x18 */
    unsigned int pad6c_0 : 2; /* 0x6c */
    int checkTable : 1;
    unsigned int pad6c_3 : 29;
} Shader_82995B88;

static __forceinline int RowMatches(const unsigned int *ids, unsigned int row)
{
    unsigned int j;

    for (j = 0; j < 4; j++) {
        if (ids[j] != 0xffffffff && ids[j] != lbl_8315BD28[row][j]) {
            return 0;
        }
    }
    return 1;
}

int fn_82995B88(Shader_82995B88 *self, Group_82995B88 *group)
{
    unsigned int size = group->flags & 0xfffff;
    unsigned int count;
    unsigned int i;

    if (size == 0) {
        return 1;
    }
    count = group->total / size;
    for (i = 0; i < count; i++) {
        unsigned int ids[4];
        unsigned int j;

        memset(ids, 0xff, sizeof(ids));
        for (j = 0; j < size; j++) {
            ids[j] = self->regs[group->indices[i * size + j]]->id;
        }
        if (self->checkTable) {
            unsigned int row;

            for (row = 0; row < 8; row++) {
                if (RowMatches(ids, row)) {
                    break;
                }
            }
            if (row == 8) {
                return 1;
            }
        }
    }
    return 0;
}
