// The array subobject preserves the original indexed-store operand order.
struct Array {
    unsigned int *data;
    int count;



};

struct Object {
    char pad[0x1b0];
    Array a;
};

extern "C" void fn_82D816D8(Object *p, unsigned int value) {
    {Array *array=&p->a;
        int i = 0;
        unsigned int *q;
        if (array->count > 0) {
            q = array->data;
            do {
                if (*q == value) goto found;
                ++i;
                ++q;
            } while (i < array->count);
        }
        i = -1;
    found:
        array->data[i] = 0;
    }
}
