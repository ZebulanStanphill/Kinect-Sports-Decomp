typedef struct Handler_82573C00 {
    char pad0[0x4];
    unsigned short kind; /* 0x04 */
} Handler_82573C00;

typedef struct Pair_82573C00 {
    unsigned int first; /* 0x00 */
    int second;         /* 0x04 */
} Pair_82573C00;

typedef struct Results_82573C00 {
    int count;              /* 0x00 */
    int items[8];           /* 0x04 */
    int pairCount;          /* 0x24 */
    Pair_82573C00 pairs[8]; /* 0x28 */
} Results_82573C00;

extern void fn_825C32D0(Handler_82573C00 *self, void *source, void *event, int *out);
extern int fn_825C3060(Handler_82573C00 *self, void *source, void *event);
extern int fn_825C3108(Handler_82573C00 *self, void *source, void *event);
extern int fn_825C31F0(Handler_82573C00 *self, void *source, void *event);
extern void fn_825C3488(Handler_82573C00 *self, void *source, void *event, int *item, unsigned int *first,
                        int *second);
extern void fn_825C3A68(Handler_82573C00 *self, void *source, void *event);

void fn_82573C00(Handler_82573C00 *self, void *source, void *event, Results_82573C00 *results)
{
    int item;
    unsigned int first = 0;
    int second = 0;

    switch (self->kind) {
    case 1:
        fn_825C32D0(self, source, event, &item);
        if (results->count < 8 && item != 0) {
            results->items[results->count] = item;
            results->count++;
        }
        break;
    case 4:
        item = fn_825C3060(self, source, event);
        if (results->count < 8 && item != 0) {
            results->items[results->count] = item;
            results->count++;
        }
        break;
    case 5:
        item = fn_825C3108(self, source, event);
        if (results->count < 8 && item != 0) {
            results->items[results->count] = item;
            results->count++;
        }
        break;
    case 6:
        item = fn_825C31F0(self, source, event);
        if (results->count < 8 && item != 0) {
            results->items[results->count] = item;
            results->count++;
        }
        break;
    case 10:
        fn_825C3488(self, source, event, &item, &first, &second);
        if (results->pairCount < 8 && first != 0) {
            int value = second;

            results->pairs[results->pairCount].first = first;
            results->pairs[results->pairCount].second = value;
            results->pairCount++;
        }
        break;
    default:
        fn_825C3A68(self, source, event);
        break;
    }
}
