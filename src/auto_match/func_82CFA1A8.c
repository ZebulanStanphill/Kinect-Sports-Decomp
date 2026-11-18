typedef struct ErrorVt_82CFA1A8 ErrorVt_82CFA1A8;

typedef struct IntArray_82CFA1A8 {
    int *data; /* 0x0 */
    int size;  /* 0x4 */
} IntArray_82CFA1A8;

typedef struct Error_82CFA1A8 {
    ErrorVt_82CFA1A8 *vt; /* 0x00 */
    char pad04[0x10];
    IntArray_82CFA1A8 sections; /* 0x14 */
} Error_82CFA1A8;

struct ErrorVt_82CFA1A8 {
    void *slots[5];
    unsigned char *(*isEnabled)(unsigned char *result, Error_82CFA1A8 *self, int id); /* 0x14 */
};

extern char lbl_82196582[];

extern void fn_82CFA0B8(Error_82CFA1A8 *self, const char *what, int id, const char *description,
                        const char *file, int line, unsigned char printStack);

static __forceinline int Back_82CFA1A8(IntArray_82CFA1A8 *array)
{
    return array->data[array->size - 1];
}

int fn_82CFA1A8(Error_82CFA1A8 *self, int message, int id, const char *description, const char *file,
                int line)
{
    unsigned char enabled;
    const char *what;
    unsigned char printStack;

    if (id == -1 && self->sections.size != 0) {
        id = Back_82CFA1A8(&self->sections);
    }
    if (*self->vt->isEnabled(&enabled, self, id) == 0) {
        return 0;
    }
    what = lbl_82196582;
    printStack = 0;
    switch (message) {
    case 0:
        what = "Report";
        break;
    case 1:
        what = "Warning";
        break;
    case 2:
        what = "Assert";
        printStack = 1;
        break;
    case 3:
        what = "Error";
        printStack = 1;
        break;
    }
    fn_82CFA0B8(self, what, id, description, file, line, printStack);
    return message == 2 || message == 3;
}
