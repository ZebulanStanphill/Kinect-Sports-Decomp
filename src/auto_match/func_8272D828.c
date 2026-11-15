typedef struct Object_8272D828 Object_8272D828;

typedef struct Vtable_8272D828 {
    void *slots[16];
    char *(*getData)(Object_8272D828 *); /* 0x40 */
} Vtable_8272D828;

struct Object_8272D828 {
    Vtable_8272D828 *vtable;
    char pad004[0x9c];
    void *context; /* 0xa0 */
};

typedef struct Point_8272D828 {
    float x; /* 0x00 */
    float y; /* 0x04 */
} Point_8272D828;

extern void fn_8268CC00(void *);
extern void fn_8269A240(Object_8272D828 *, void *);
extern void fn_8268D008(void *, Point_8272D828 *, const Point_8272D828 *);
extern void fn_827A1070(void *, float, float, void *);

void fn_8272D828(Object_8272D828 *self, unsigned int index, Point_8272D828 *out, void *context)
{
    char *data = self->vtable->getData(self);

    struct {
        Point_8272D828 input;
        Point_8272D828 output;
        char transform[24];
    } frame;

    if (data != 0) {
        const float *entry;
        if (index >= 4) {
            entry = 0;
        } else {
            entry = (const float *)(data + index * 0x24 + 0x944);
        }
        {
            float y = entry[6];
            frame.input.x = entry[5];
            frame.input.y = y;
        }
        fn_8268CC00(frame.transform);
        fn_8269A240(self, frame.transform);
        fn_8268D008(frame.transform, &frame.output, &frame.input);
        if (out != 0) {
            out->x = frame.output.x;
            out->y = frame.output.y;
        }
        fn_827A1070(self->context, frame.output.x, frame.output.y, context);
    }
}
