typedef struct Interface_8228B270 Interface_8228B270;

struct Interface_8228B270 {
    int (**vt)();
};

extern void *fn_827F04B0(unsigned int);
extern void *fn_82554260(void *, void *, int);
extern void fn_827F2DD0(void *, void *, float, int, int);

void fn_8228B270(char *self, int index)
{
    void **entry = (void **)(self + index * 0x18);
    if (!entry[392]) {
        Interface_8228B270 *owner = *(Interface_8228B270 **)((char *)entry[391] + 0xb4);
        if (owner) {
            void *object = (void *)owner->vt[20](owner, &entry[394]);
            entry[392] = object;
            if (object) {
                void *allocation = fn_827F04B0(0x1a0);
                entry[393] = allocation ? fn_82554260(allocation, entry[392], 1) : 0;
                fn_827F2DD0(entry[392], entry[393], 0.0f, 18, 0);
                owner->vt[39](owner, entry[394]);
            }
        }
    }
}
