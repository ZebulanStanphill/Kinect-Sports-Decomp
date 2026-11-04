extern unsigned char fn_82887DB8(int, int);
extern int fn_828830B8(int);
extern int lbl_83212A50[];
extern unsigned int lbl_83213E40;

#define AT(base, off) (*(int *)((int)(base) + (off)))

void fn_82888230(int p1, int p2, unsigned int a, int v)
{
    int arr;
    int o1;
    int o2;
    int o3;
    unsigned int k;
    if (fn_82887DB8(p1, p2) != 0) {
        arr = fn_828830B8(p1);
        o1 = a << 2;
        if (v > AT(arr, o1)) {
            AT(arr, o1) = v;
        }
        o2 = (a + 0x33) << 2;
        if (v > AT(arr, o2)) {
            AT(arr, o2) = v;
            AT(arr, (a + 0x66) << 2) = 0;
        }
        k = *(unsigned int *)((char *)lbl_83212A50 + 0x13f0);
        o3 = ((k + 3) * 0x33 + a) << 2;
        if (v > AT(arr, o3)) {
            AT(arr, o3) = v;
            AT(arr, ((k + 0xe) * 0x33 + a) << 2) = 0;
        }
        if (v > AT(lbl_83212A50, o1)) {
            AT(lbl_83212A50, o1) = v;
        }
        if (v > AT(lbl_83212A50, o2)) {
            AT(lbl_83212A50, o2) = v;
            AT((char *)lbl_83212A50 + 0x198, a << 2) = 0;
        }
        if (v > AT(lbl_83212A50, o3)) {
            AT(lbl_83212A50, o3) = v;
            AT((char *)lbl_83212A50 + 0xb28, (k * 0x33 + a) << 2) = 0;
        }
    }
}
