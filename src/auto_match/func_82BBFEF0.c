typedef struct Array_82BBFEF0 {
    int pad0;
    unsigned int count;
    void **data;
} Array_82BBFEF0;

typedef int (*Compare_82BBFEF0)(void *a, void *b);

/* Shell sort with the 3h+1 gap sequence. */
void fn_82BBFEF0(Array_82BBFEF0 *a, Compare_82BBFEF0 compare)
{
    void **data = a->data;
    unsigned int h = 1;
    unsigned int i;
    int j;
    void *value;

    do {
        h = h * 3 + 1;
    } while (h < a->count);
    for (h /= 3; h != 0; h /= 3) {
        for (i = h; i < a->count; i++) {
            value = data[i];
            for (j = i - h; j >= 0; j -= h) {
                if (compare(data[j], value) <= 0)
                    break;
                data[j + h] = data[j];
            }
            data[j + h] = value;
        }
    }
}
