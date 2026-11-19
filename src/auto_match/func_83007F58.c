typedef struct Element_83007F58 {
    int value0; /* 0x00 */
    int value1; /* 0x04 */
    int value2; /* 0x08 */
    int value3; /* 0x0c */
    int value4; /* 0x10 */
    int value5; /* 0x14 */
    int value6; /* 0x18 */
    int value7; /* 0x1c */
} Element_83007F58;

typedef struct Array_83007F58 {
    Element_83007F58 *begin;
    Element_83007F58 *end;
    int capacity;
} Array_83007F58;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, unsigned int size);
extern int fn_82FA5190(int heap, void *memory);

/* The zeroed words form one three-word member; its inline initialiser clears them in order. */
static __forceinline void ClearTriple(int *values)
{
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
}

int fn_83007F58(Array_83007F58 *self, int extra)
{
    int capacity = extra + self->capacity;
    Element_83007F58 *memory = (Element_83007F58 *)fn_82FA5060(lbl_831BC768, capacity * 32);
    int count;
    if (memory == 0) {
        return 0;
    }
    count = self->end - self->begin;
    if (self->begin != 0) {
        unsigned int index;
        for (index = 0; index < count; index++) {
            Element_83007F58 *element = &memory[index];
            Element_83007F58 *begin;
            if (element != 0) {
                ClearTriple(&element->value5);
            }
            begin = self->begin;
            *element = begin[index];
        }
        fn_82FA5190(lbl_831BC768, self->begin);
    }
    self->begin = memory;
    self->capacity = capacity;
    self->end = memory + count;
    return 1;
}
