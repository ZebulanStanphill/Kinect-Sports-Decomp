typedef struct Hdr_82BD81E0 {
    int f0;
    int f4;
    char *item;
    int size;
} Hdr_82BD81E0;

typedef struct Pool_82BD81E0 {
    char *data;
    char *hdrs;
    int hdrSize;
} Pool_82BD81E0;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_82BD8098(Pool_82BD81E0 *p);

int fn_82BD81E0(int itemSize, int hdrSize, unsigned int count, int offset, Pool_82BD81E0 **out)
{
    int hr = 0;
    Pool_82BD81E0 *p;
    Hdr_82BD81E0 *h;

    p = (Pool_82BD81E0 *)fn_8265C940(0xc, 0x618a8006);
    if (p != 0) {
        p->hdrSize = hdrSize;
        p->data = (char *)fn_8265C940(itemSize * count, 0x608a2002);
        p->hdrs = (char *)fn_8265C940(hdrSize * count, 0x618a0009);
        if (p->data != 0 && p->hdrs != 0) {
            while (count != 0) {
                count--;
                h = (Hdr_82BD81E0 *)(p->hdrs + p->hdrSize * count);
                h->size = itemSize - offset;
                h->item = p->data + itemSize * count + offset;
            }
            goto done;
        }
    }
    hr = 0x8007000e;
    fn_82BD8098(p);
    p = 0;
done:
    *out = p;
    return hr;
}
