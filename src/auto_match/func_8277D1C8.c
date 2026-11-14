typedef struct Entry_8277D1C8 {
    int key;
    int value;
} Entry_8277D1C8;

typedef struct Table_8277D1C8 {
    int f00;
    int f04;
    int f08;
    Entry_8277D1C8 **blocks;
} Table_8277D1C8;

typedef struct Iter_8277D1C8 {
    Table_8277D1C8 *table;
    unsigned int index;
    unsigned int remaining;
    int endKey;
    Entry_8277D1C8 *cur;
    int key;
    int nextKey;
    int value;
    unsigned char done;
} Iter_8277D1C8;

int fn_8277D1C8(Iter_8277D1C8 *it, int (*get)(Entry_8277D1C8 *e))
{
    it->done = 0;
    if (it->remaining != 0) {
        unsigned int index = it->index;
        it->remaining--;
        it->index = index + 1;
        it->key = it->nextKey;
        it->cur = &it->table->blocks[index >> 4][index & 15];
        if (it->remaining != 0)
            it->nextKey = it->table->blocks[it->index >> 4][it->index & 15].key;
        else
            it->nextKey = it->endKey;
        it->value = get(it->cur);
        return 1;
    }
    return 0;
}
