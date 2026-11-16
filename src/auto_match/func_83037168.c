typedef struct Element_83037168 {
    int first;
    int second;
    int third;
    int fourth;
} Element_83037168;

typedef struct Array_83037168 {
    Element_83037168 *begin;
    Element_83037168 *end;
    int capacity;
} Array_83037168;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, unsigned int size);
extern int fn_82FA5190(int heap, void *memory);

int fn_83037168(Array_83037168 *self, int extra)
{
    int capacity = extra + self->capacity;
    Element_83037168 *memory = (Element_83037168 *)fn_82FA5060(lbl_831BC768, capacity * 16);
    int count;
    if (memory == 0) {
        return 0;
    }
    count = self->end - self->begin;
    if (self->begin != 0) {
        unsigned int index;
        for (index = 0; index < count; index++) {
            Element_83037168 *element = &memory[index];
            Element_83037168 *begin;
            if (element != 0) {
                element->second = 0;
                element->first = 0;
                element->third = 0;
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
