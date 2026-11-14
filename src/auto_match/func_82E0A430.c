typedef struct Registry_82E0A430 Registry_82E0A430;
typedef struct RegistryVt_82E0A430 {
    void *slots[7];
    void (*add)(Registry_82E0A430 *self, void *cls, int flags);
} RegistryVt_82E0A430;
struct Registry_82E0A430 { RegistryVt_82E0A430 *vt; };

typedef struct Owner_82E0A430 { Registry_82E0A430 *registry; } Owner_82E0A430;

extern char lbl_8323AE68[];
extern char lbl_8323AE98[];
extern char lbl_8323AEC8[];
extern char lbl_8323AEF8[];
extern char lbl_832654F0[];
extern char lbl_83265550[];

void fn_82E0A430(Owner_82E0A430 *self, int kind)
{
    void *classes[4];
    int i;

    classes[0] = lbl_8323AE68;
    classes[1] = lbl_8323AEF8;
    classes[2] = lbl_8323AEC8;
    classes[3] = lbl_8323AE98;
    if (kind == 1) {
        classes[0] = lbl_832654F0;
        classes[1] = lbl_83265550;
    }
    for (i = 0; i < 4; i++) {
        self->registry->vt->add(self->registry, classes[i], 0);
    }
}
