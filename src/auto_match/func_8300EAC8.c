typedef struct Element_8300EAC8 {
    int value0; /* 0x00 */
    int value1; /* 0x04 */
    int value2; /* 0x08 */
} Element_8300EAC8;

typedef struct Array_8300EAC8 {
    Element_8300EAC8 *begin;
    Element_8300EAC8 *end;
    int capacity;
} Array_8300EAC8;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, unsigned int size);
extern int fn_82FA5190(int heap, void *memory);

int fn_8300EAC8(Array_8300EAC8 *self, int extra)
{
    int capacity = extra + self->capacity;
    Element_8300EAC8 *memory = (Element_8300EAC8 *)fn_82FA5060(lbl_831BC768, capacity * 12);
    int count;
    if (memory == 0) {
        return 0;
    }
    count = self->end - self->begin;
    if (self->begin != 0) {
        unsigned int index;
        for (index = 0; index < count; index++) {
            Element_8300EAC8 *element = &memory[index];
            Element_8300EAC8 *begin;
            if (element != 0) {
                element->value1 = 1;
                element->value2 = 0;
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
