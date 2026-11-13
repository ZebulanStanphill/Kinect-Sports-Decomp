struct Obj_82C550B8 {
    int unk0;
    int unk4;
    unsigned int count8;    /* 0x08 */
    int factorC;            /* 0x0c */
    int unk10;
    unsigned int count14;   /* 0x14 */
    int unk18;
    int unk1c;
    int factor20;           /* 0x20 */
};

unsigned int fn_82C550B8(struct Obj_82C550B8 *obj)
{
    unsigned int size = 0;
    if (obj != 0) {
        size = (obj->count14 + obj->count8 + 10) * 4 + obj->factor20 * obj->factorC;
    }
    return size;
}
