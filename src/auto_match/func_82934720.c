typedef struct Value_82934720 {
    char pad0[0x10];
    int type; /* 0x10 */
    int pad14;

    union {
        double number; /* 0x18 */
        int integer;   /* 0x18 */
    } data;
} Value_82934720;

typedef struct Element_82934720 {
    int pad0;
    int kind;                      /* 0x4 */
    Value_82934720 *value;         /* 0x8 */
    struct Element_82934720 *next; /* 0xc */
} Element_82934720;

typedef struct Param_82934720 {
    int pad0;
    int type; /* 0x4 */
    char pad8[0x18];
    Element_82934720 *elements; /* 0x20 */
} Param_82934720;

extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern int fn_829352D0(void *self, void *buf, unsigned int size, int kind, void *arg, int flags);

int fn_82934720(void *self, unsigned int rows, unsigned int columns, Param_82934720 *param, void *arg)
{
    int hr = 0;
    float *buf = 0;
    Element_82934720 *element;
    unsigned int i;
    unsigned int j;
    unsigned int n;

    if (param->type == 0xe) {
        element = param->elements;
        if (element->kind == 1) {
            n = rows * 4;
            buf = (float *)fn_8265C9E0(n <= 0x3fffffff ? n * 4 : 0xffffffff);
            if (buf == 0) {
                hr = 0x8007000e;
            } else {
                memset(buf, 0, rows * 16);
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < columns; j++) {
                        Value_82934720 *value = element->value;

                        if (value->type == 3) {
                            buf[i * 4 + j] = (float)value->data.number;
                        } else if (value->type == 1) {
                            ((int *)buf)[i * 4 + j] = value->data.integer;
                        } else {
                            ((int *)buf)[i * 4 + j] = value->data.integer;
                        }
                        element = element->next;
                    }
                }
                hr = fn_829352D0(self, buf, rows * 16, 6, arg, 0);
            }
        }
        fn_8265CA20(buf);
        return hr;
    }
    return 0;
}
