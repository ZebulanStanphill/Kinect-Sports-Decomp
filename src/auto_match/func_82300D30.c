typedef struct Entry_82300D30 {
    int unknown0; /* 0x0 */
    int unknown4; /* 0x4 */
    int value;    /* 0x8 */
    int key;      /* 0xc */
} Entry_82300D30;

typedef struct Pair_82300D30 {
    int key;
    int value;
} Pair_82300D30;

typedef struct Group_82300D30 {
    int key;
    int values[2];
} Group_82300D30;

void fn_82300D30(Entry_82300D30 *entries)
{
    unsigned int i;
    unsigned int j;

    {
        Pair_82300D30 pairs[3] = {{3, 0x13}, {5, 0x10}, {4, 0x11}};
        for (i = 0; i < 3; i++) {
            entries[i].value = pairs[i].value;
            entries[i].key = pairs[i].key;
        }
    }
    {
        Group_82300D30 groups[5] = {{2, {0xe, 0xf}}, {1, {0, 1}}, {6, {6, 7}}, {8, {2, 3}}, {7, {4, 5}}};
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 2; j++) {
                entries[3 + i * 2 + j].key = groups[i].key;
                entries[3 + i * 2 + j].value = groups[i].values[j];
            }
        }
    }
}
