typedef struct Ring_828D5DC0 {
    int pad0;
    void **data;
    unsigned int cap;
} Ring_828D5DC0;

typedef struct Iter_828D5DC0 {
    Ring_828D5DC0 *ring;
    unsigned int idx;
} Iter_828D5DC0;

extern void fn_828D4E48(void *a, void *b);

void fn_828D5DC0(Iter_828D5DC0 first, Iter_828D5DC0 last)
{
    while (first.idx != last.idx) {
        unsigned int j;
        unsigned int i;
        --last.idx;
        if (first.idx == last.idx) {
            return;
        }
        j = last.idx;
        if (last.ring->cap <= j) {
            j = last.idx - last.ring->cap;
        }
        i = first.idx;
        if (first.ring->cap <= i) {
            i = first.idx - first.ring->cap;
        }
        fn_828D4E48(first.ring->data[i], last.ring->data[j]);
        ++first.idx;
    }
}
