typedef struct Allocator_82F93988 Allocator_82F93988;
typedef struct {
    void *slot[2];
    void *(*alloc)(Allocator_82F93988 *self, unsigned int size);  /* 0x08 */
    void (*free)(Allocator_82F93988 *self, void *p);               /* 0x0c */
} AllocatorVtbl_82F93988;
struct Allocator_82F93988 { AllocatorVtbl_82F93988 *vt; };

extern char lbl_832641A4[];
extern Allocator_82F93988 *fn_82F93A00(void *holder);
extern void fn_8265C990(void *p, unsigned int flags);

void fn_82F93988(void *p)
{
    if (fn_82F93A00(lbl_832641A4) != 0) {
        Allocator_82F93988 *allocator = fn_82F93A00(lbl_832641A4);
        allocator->vt->free(allocator, p);
    } else {
        fn_8265C990(p, 0x20ff4000);
    }
}
