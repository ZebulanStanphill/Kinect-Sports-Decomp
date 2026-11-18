class Visitor_8283FF08
{
  public:
    virtual void Slot0();
    virtual void Slot1();
    virtual void Visit(void *field);
};

struct Field_8283FF08 {
    int offset; /* 0x00 */
    char pad04[0x30];
};

struct Layout_8283FF08 {
    char pad00[4];
    Field_8283FF08 *fields; /* 0x04 */
    char pad08[0xa];
    unsigned short fieldCount; /* 0x12 */
};

struct Type_8283FF08 {
    int unused;
    Layout_8283FF08 *layout; /* 0x04 */
};

struct Entry_8283FF08 {
    Type_8283FF08 *type; /* 0x00 */
    char pad04[8];
};

struct Table_8283FF08 {
    char pad00[0x20];
    unsigned int count;      /* 0x20 */
    Entry_8283FF08 *entries; /* 0x24 */
};

extern "C" void fn_8283FF08(Table_8283FF08 *self, char *base, Visitor_8283FF08 *visitor)
{
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        Entry_8283FF08 *entry = &self->entries[i];
        if (visitor != 0) {
            int j;
            for (j = 0; j < entry->type->layout->fieldCount; j++) {
                void *field = base + entry->type->layout->fields[j].offset;
                visitor->Visit(field);
            }
        }
    }
}
