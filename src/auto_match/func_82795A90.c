typedef struct Item_82795A90 Item_82795A90;
extern void fn_8267BE38(void *p);
extern void fn_82794B38(Item_82795A90 *item);

void fn_82795A90(Item_82795A90 **items, unsigned int count)
{
    Item_82795A90 **p = items + count - 1;
    if (count != 0) {
        unsigned int n = count;
        do {
            Item_82795A90 *item = *p;
            if (item != 0) {
                fn_82794B38(item);
                fn_8267BE38(item);
            }
            n--;
            p--;
        } while (n != 0);
    }
}
