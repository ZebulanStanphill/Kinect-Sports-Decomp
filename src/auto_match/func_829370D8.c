void *memset(void *dst, int value, unsigned int size);

typedef struct Obj_829370D8 {
    char pad0[0x84];
    char name0[0x20];       /* 0x84 */
    int values[4];          /* 0xa4 */
    char name1[0x20];       /* 0xb4 */
    short d4;
    short d6;
    char name2[0x20];       /* 0xd8 */
    int f8;
    char name3[0x20];       /* 0xfc */
    int pad11c;
    int f120;
    int f124;
    unsigned int flags;     /* 0x128 */
    int ready;              /* 0x12c */
    int f130;
} Obj_829370D8;

void fn_829370D8(Obj_829370D8 *self)
{
    self->f120 = 0;
    self->f124 = 0;
    self->flags &= 0x100000;
    self->f130 = 0;
    memset(self->name0, 0, sizeof(self->name0));
    memset(self->values, 0, sizeof(self->values));
    memset(self->name1, 0, sizeof(self->name1));
    self->d4 = 0;
    memset(self->name2, 0, sizeof(self->name2));
    self->f8 = 0;
    memset(self->name3, 0, sizeof(self->name3));
    self->ready = 1;
}
