typedef struct { int a; void *p; int rest[5]; } Slot_82E32310;
typedef struct { char pad[0x1a8]; Slot_82E32310 *slots; char pad2[0x6f0 - 0x1ac]; } Item_82E32310;
typedef struct { char pad[0x22]; unsigned short count; } Hdr_82E32310;
extern void fn_82C2B590(void *);

void fn_82E32310(Hdr_82E32310 **ctx, Item_82E32310 *items)
{
    Hdr_82E32310 *h = *ctx;
    short i, j;
    if (h != 0 && items != 0 && h->count != 0) {
        i = 0;
        do {
            Item_82E32310 *it = items + i;
            if (it != 0 && it->slots != 0) {
                j = 0;
                do {
                    
                    Slot_82E32310 *s = it->slots + j;
                    if (s != 0 && s->p != 0) {
                        fn_82C2B590(s->p);
                        it->slots[j].p = 0;
                    }
                    j = (short)(j + 1);
                } while (j < 2);
            }
            if (it->slots != 0) {
                fn_82C2B590(it->slots);
                it->slots = 0;
            }
            i = (short)(i + 1);
        } while (i < h->count);
    }
}
