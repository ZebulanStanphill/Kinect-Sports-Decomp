typedef struct Interface_822B98F8 Interface_822B98F8;

struct Interface_822B98F8 {
    int (**vt)();
};

extern void *fn_827F04B0(unsigned int);
extern void *fn_82554260(void *, void *, int);
extern void fn_827F2DD0(void *, void *, float, int, int);

void fn_822B98F8(void **self)
{
    if (!self[10] && !self[7]) {
        Interface_822B98F8 *owner = *(Interface_822B98F8 **)((char *)self[0] + 0x8c0);
        if (owner) {
            void *object = (void *)owner->vt[20](owner, &self[6]);
            self[7] = object;
            if (object) {
                void *allocation = fn_827F04B0(0x1a0);
                self[8] = allocation ? fn_82554260(allocation, self[7], 1) : 0;
                fn_827F2DD0(self[7], self[8], 0.0f, 18, 0);
                owner->vt[39](owner, self[6]);
            }
        }
    }
}
