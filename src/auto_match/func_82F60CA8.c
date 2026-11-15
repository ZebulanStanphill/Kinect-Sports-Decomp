typedef struct Item_82F60CA8 {
    char pad[0x44];     /* 0x0 */
    unsigned int value; /* 0x44 */
} Item_82F60CA8;

typedef struct Object_82F60CA8 {
    int unused;            /* 0x0 */
    char collection[0x54]; /* 0x4 */
    unsigned int last;     /* 0x58 */
    unsigned int first;    /* 0x5c */
} Object_82F60CA8;

extern int fn_82F61A28(void *, int *);
extern void fn_82F61B68(void *, int, Item_82F60CA8 **);
extern void fn_82F61AB0(void *);

int fn_82F60CA8(Object_82F60CA8 *self)
{
    int count = 0;
    Item_82F60CA8 *first;
    Item_82F60CA8 *last;
    int result = fn_82F61A28(self->collection, &count);
    if (result == 0) {
        if (count > 0) {
            fn_82F61B68(self->collection, count - 1, &last);
            fn_82F61B68(self->collection, 0, &first);
            if (self->first != first->value) {
                self->last = last->value;
                self->first = first->value;
            } else {
                fn_82F61AB0(self->collection);
                result = 0x82240408;
            }
        } else {
            fn_82F61AB0(self->collection);
            result = 0x82240407;
        }
    }
    return result;
}
