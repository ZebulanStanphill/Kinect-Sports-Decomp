typedef struct Tail_829F5CA8 {
    unsigned __int64 first;  /* 0x00 */
    unsigned __int64 second; /* 0x08 */
    unsigned __int64 third;  /* 0x10 */
    unsigned int fourth;     /* 0x18 */
} Tail_829F5CA8;

typedef struct Object_829F5CA8 {
    int state;                /* 0x00 */
    int active;               /* 0x04 */
    int id;                   /* 0x08 */
    int reserved0c;           /* 0x0c */
    char first[0xa0];         /* 0x10 */
    char second[0x20];        /* 0xb0 */
    char third[0x10570];      /* 0xd0 */
    int field10640;           /* 0x10640 */
    int field10644;           /* 0x10644 */
    char reserved10648[0x30]; /* 0x10648 */
    int field10678;           /* 0x10678 */
    char reserved1067c[0x18]; /* 0x1067c */
    int field10694;           /* 0x10694 */
    int reserved10698;        /* 0x10698 */
    int field1069c;           /* 0x1069c */
    Tail_829F5CA8 tail;       /* 0x106a0 */
} Object_829F5CA8;

extern void fn_829F5388(void *);
extern void fn_82A0D568(void *);
extern void fn_82A0B9C8(void *);

Object_829F5CA8 *fn_829F5CA8(Object_829F5CA8 *self)
{
    fn_829F5388(self->first);
    fn_82A0D568(self->second);
    fn_82A0B9C8(self->third);
    self->active = 0;
    self->id = -1;
    self->field10640 = 0;
    self->field1069c = 0;
    self->field10678 = 0;
    self->field10694 = 0;
    self->field10644 = 0;
    self->state = 0;
    {
        Tail_829F5CA8 *tail = &self->tail;
        tail->first = 0;
        tail->second = 0;
        tail->third = 0;
        tail->fourth = 0;
    }
    return self;
}
