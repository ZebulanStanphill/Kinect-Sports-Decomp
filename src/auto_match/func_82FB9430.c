typedef struct Element_82FB9430 {
    int value;            /* 0x00 */
    unsigned short index; /* 0x04 */
    unsigned char flags;  /* 0x06 */
    unsigned char reserved07;
    unsigned int payload; /* 0x08 */
} Element_82FB9430;

typedef struct Array_82FB9430 {
    Element_82FB9430 *begin;
    Element_82FB9430 *end;
    int capacity;
} Array_82FB9430;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, unsigned int size);
extern int fn_82FA5190(int heap, void *memory);

int fn_82FB9430(Array_82FB9430 *self, int extra)
{
    int capacity = extra + self->capacity;
    Element_82FB9430 *memory = (Element_82FB9430 *)fn_82FA5060(lbl_831BC768, capacity * 12);
    int count;
    if (memory == 0) {
        return 0;
    }
    count = self->end - self->begin;
    if (self->begin != 0) {
        unsigned int index;
        for (index = 0; index < count; index++) {
            Element_82FB9430 *element = &memory[index];
            Element_82FB9430 *begin;
            if (element != 0) {
                element->index = 0;
                element->flags &= 0x3f;
                {
                    unsigned int *pPayload = &element->payload;
                    *pPayload = 0;
                }
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
