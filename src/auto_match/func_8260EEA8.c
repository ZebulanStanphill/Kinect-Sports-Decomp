typedef struct Data_8260EEA8 {
    char padding[0x10];
    int first;        /* 0x10 */
    int second;       /* 0x14 */
    int third;        /* 0x18 */
    int fourth;       /* 0x1c */
    char point[0x0c]; /* 0x20 */
    float time;       /* 0x2c */
    char padding30[0x0c];
    float values[12]; /* 0x3c */
} Data_8260EEA8;

extern void fn_82553D80(void *, int, int, void *, float, int, float, int, float, float, float, float, float,
                        float, float, float, float, float, float);

void fn_8260EEA8(char *self, void *unused, Data_8260EEA8 *data, void *unused2, int mode)
{
    if (mode == 0) {
        char *owner = **(char ***)(self + 0x60);
        fn_82553D80(*(void **)(owner + 0x1a8), data->first, data->second, data->point, data->time,
                    data->third, data->values[0], data->fourth, data->values[1], data->values[2],
                    data->values[3], data->values[4], data->values[5], data->values[6], data->values[7],
                    data->values[8], data->values[9], data->values[10], data->values[11]);
    } else if (mode == 1 || mode == 3) {
        char *owner = **(char ***)(self + 0x60);
        *(int *)(*(char **)(owner + 0x1a8) + 0x3f0) = 0;
    }
}
