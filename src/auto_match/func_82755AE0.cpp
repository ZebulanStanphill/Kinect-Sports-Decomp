struct Target_82755AE0;

struct Item_82755AE0 {
    char pad[0x154];
    Target_82755AE0 *target; /* 0x154 */
};

struct Entry_82755AE0 {
    Item_82755AE0 *item; /* 0x0 */
    unsigned int length; /* 0x4 */
};

struct List_82755AE0 {
    Entry_82755AE0 *entries; /* 0x0 */
    unsigned int count;      /* 0x4 */

    bool HitTest(unsigned int start, unsigned int end);
};

/* Scaleform's reference-counted string: a pointer to a shared block whose low two bits hold flags */
struct StringData_82755AE0 {
    unsigned int size;
    long refs;
};

struct String_82755AE0 {
    unsigned int tagged;
};

extern "C" {
long _InterlockedExchangeAdd(long volatile *value, long add);
void fn_8267BE38(void *block);
void fn_8268B330(String_82755AE0 *s);
bool fn_827AECE8(Target_82755AE0 *target, unsigned int start, unsigned int end);
}

static __forceinline void Release(String_82755AE0 *s)
{
    StringData_82755AE0 *data = (StringData_82755AE0 *)(s->tagged & ~3u);

    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
}

bool List_82755AE0::HitTest(unsigned int start, unsigned int end)
{
    String_82755AE0 text;
    unsigned int offset;
    unsigned int i;
    Target_82755AE0 *target;

    fn_8268B330(&text);
    offset = 0;
    for (i = 0; i < count; i++) {
        target = entries[i].item->target;
        if (target != 0) {
            if ((offset <= start && start < entries[i].length + offset) ||
                (offset >= start && offset < end)) {
                if (fn_827AECE8(target, start - offset, end - offset)) {
                    Release(&text);
                    return true;
                }
            }
            offset += entries[i].length;
        }
    }
    Release(&text);
    return false;
}
