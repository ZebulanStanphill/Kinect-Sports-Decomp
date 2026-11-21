extern void *lbl_832642E8;
extern void *lbl_832642FC;

extern int fn_82FF6520(void *map, void *key);
extern int fn_83017558(void *manager, void *key, int value);

int fn_8300CAF0(void *context, int value, void *key, unsigned int kind)
{
    switch (kind) {
    case 0:
        return fn_83017558(lbl_832642FC, key, value);
    case 1:
        return fn_82FF6520(lbl_832642E8, key);
    }
    return 0;
}
