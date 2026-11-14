/* Lazily initialised descriptor (guard bit in lbl_83265094); lbl_8217E9F8 is a pair of function pointers. */
typedef struct {
    const void *table;
    int size;
    int count;
} Desc_830692D0;

extern char lbl_8217E9F8[];
extern unsigned int lbl_83265094;
extern Desc_830692D0 lbl_83265088;

Desc_830692D0 *fn_830692D0(void)
{
    if ((lbl_83265094 & 1) == 0) {
        lbl_83265094 |= 1;
        lbl_83265088.size = 4;
        lbl_83265088.table = lbl_8217E9F8;
        lbl_83265088.count = 1;
    }
    return &lbl_83265088;
}
