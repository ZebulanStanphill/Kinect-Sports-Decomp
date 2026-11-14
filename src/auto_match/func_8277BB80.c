typedef struct Entry_8277BB80 {
    int a;
    int b;
    int key;
} Entry_8277BB80;

typedef struct Iter_8277BB80 {
    Entry_8277BB80 **entries;
    int index;
    unsigned int remaining;
    int endKey;
    Entry_8277BB80 *cur;
    int key;
    int nextKey;
    int value;
    unsigned char done;
} Iter_8277BB80;

int fn_8277BB80(Iter_8277BB80 *it, int (*get)(Entry_8277BB80 *e))
{
    it->done = 0;
    if (it->remaining != 0) {
        int index = it->index;
        it->remaining--;
        it->index = index + 1;
        it->key = it->nextKey;
        it->cur = &(*it->entries)[index];
        if (it->remaining != 0)
            it->nextKey = (*it->entries)[it->index].key;
        else
            it->nextKey = it->endKey;
        it->value = get(it->cur);
        return 1;
    }
    return 0;
}
