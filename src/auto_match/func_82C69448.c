long _InterlockedExchange(long volatile *target, long value);

extern volatile long lbl_83231E48;

typedef struct Object_82C69448 {
    char pad0[0x26c];
    int refs;
} Object_82C69448;

void fn_82C69448(Object_82C69448 **slot, Object_82C69448 *obj)
{
    if (obj == *slot)
        return;
    while (_InterlockedExchange(&lbl_83231E48, 1) != 0) {
        while (lbl_83231E48 != 0) {
        }
    }
    if (obj != 0)
        obj->refs++;
    if (*slot != 0)
        (*slot)->refs--;
    *slot = obj;
    lbl_83231E48 = 0;
}
