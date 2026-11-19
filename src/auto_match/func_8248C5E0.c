typedef struct Vector_8248C5E0 {
    void *first; // 0x0
    void *last;  // 0x4
    void *end;   // 0x8
    char alval[4];
} Vector_8248C5E0;

typedef struct Entry_8248C5E0 {
    int id;                   // 0x0
    int type;                 // 0x4
    Vector_8248C5E0 items;    // 0x8
    int field18;              // 0x18
    int field1C;              // 0x1c
    int field20;              // 0x20
    int field24;              // 0x24
    int field28;              // 0x28
    int field2C;              // 0x2c
    float field30;            // 0x30
    int field34;              // 0x34
    int field38;              // 0x38
    float field3C;            // 0x3c
    float field40;            // 0x40
    int field44;              // 0x44
    int field48;              // 0x48
    Vector_8248C5E0 pointers; // 0x4c
    int field5C;              // 0x5c
    int field60;              // 0x60
    int field64;              // 0x64
} Entry_8248C5E0;

typedef struct EntryVector_8248C5E0 {
    Entry_8248C5E0 *first; // 0x0
    Entry_8248C5E0 *last;  // 0x4
    Entry_8248C5E0 *end;   // 0x8
} EntryVector_8248C5E0;

extern Vector_8248C5E0 *fn_8248CDD8(Vector_8248C5E0 *self, const Vector_8248C5E0 *other);
extern Vector_8248C5E0 *fn_8248D078(Vector_8248C5E0 *self, const Vector_8248C5E0 *other);
extern Entry_8248C5E0 *fn_8248BC38(Entry_8248C5E0 *self, unsigned int flags);

Entry_8248C5E0 **fn_8248C5E0(Entry_8248C5E0 **result, EntryVector_8248C5E0 *self, Entry_8248C5E0 *where)
{
    Entry_8248C5E0 *last;
    Entry_8248C5E0 *src;
    Entry_8248C5E0 *dst;

    last = self->last;
    for (src = where + 1, dst = where; src != last; src++, dst++) {
        dst->id = src->id;
        dst->type = src->type;
        fn_8248CDD8(&dst->items, &src->items);
        dst->field18 = src->field18;
        dst->field1C = src->field1C;
        dst->field20 = src->field20;
        dst->field24 = src->field24;
        dst->field28 = src->field28;
        dst->field2C = src->field2C;
        dst->field30 = src->field30;
        dst->field34 = src->field34;
        dst->field38 = src->field38;
        dst->field3C = src->field3C;
        dst->field40 = src->field40;
        dst->field44 = src->field44;
        dst->field48 = src->field48;
        fn_8248D078(&dst->pointers, &src->pointers);
        dst->field5C = src->field5C;
        dst->field60 = src->field60;
        dst->field64 = src->field64;
    }
    last = self->last;
    for (src = last - 1; src != last; src++) {
        fn_8248BC38(src, 0);
    }
    last = self->last;
    *result = where;
    self->last = last - 1;
    return result;
}
