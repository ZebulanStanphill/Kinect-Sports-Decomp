typedef struct {
    unsigned char (*fn)(void *item, void *arg);
    void *arg;
} Pred_82870970;

void **fn_82870970(void **first, void **last, Pred_82870970 pred)
{
    for (; first != last; ++first) {
        if (pred.fn(*first, pred.arg)) {
            break;
        }
    }
    return first;
}
