typedef struct Allocator_82F93910 Allocator_82F93910;
typedef struct {
    void *slot[2];
    void *(*alloc)(Allocator_82F93910 *self, unsigned int size);  /* 0x08 */
    void (*free)(Allocator_82F93910 *self, void *p);               /* 0x0c */
} AllocatorVtbl_82F93910;
struct Allocator_82F93910 { AllocatorVtbl_82F93910 *vt; };

extern char lbl_832641A4[];
extern Allocator_82F93910 *fn_82F93A00(void *holder);
extern void *fn_8265C940(unsigned int size, unsigned int flags);

void *fn_82F93910(unsigned int size)
{
    if (fn_82F93A00(lbl_832641A4) != 0) {
        Allocator_82F93910 *allocator = fn_82F93A00(lbl_832641A4);
        return allocator->vt->alloc(allocator, size);
    }
    return fn_8265C940(size, 0x20ff4000);
}
